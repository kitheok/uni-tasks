#include <iostream>
#include <string>
#include "../queue/queue.h"
#include "../queue/list.h" 

using namespace std;

struct Contact {
    string name;
    string phone;

    Contact(const string& n, const string& p) : name(n), phone(p) {}
};

struct Node {
    Contact contact;
    Node* left;
    Node* right;

    Node(const Contact& c) : contact(c), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, const Contact& contact) {
        if (node == nullptr) {
            return new Node(contact);
        }
        if (contact.name < node->contact.name) {
            node->left = insert(node->left, contact);
        } else if (contact.name > node->contact.name) {
            node->right = insert(node->right, contact);
        }
        return node;
    }

    Node* search(Node* node, const string& name) {
        if (node == nullptr || node->contact.name == name) {
            return node;
        }
        if (name < node->contact.name) {
            return search(node->left, name);
        }
        return search(node->right, name);
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* deleteNode(Node* node, const string& name) {
        if (node == nullptr) return node;

        if (name < node->contact.name) {
            node->left = deleteNode(node->left, name);
        } else if (name > node->contact.name) {
            node->right = deleteNode(node->right, name);
        } else {
            //узел с одним или ни одним дочерним
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            //узел с двумя дочерними
            Node* temp = findMin(node->right);
            node->contact = temp->contact;
            node->right = deleteNode(node->right, temp->contact.name);
        }
        return node;
    }

    void inOrder(Node* node) {
        if (node != nullptr) {
            inOrder(node->left);
            cout << node->contact.name << ": " << node->contact.phone << endl;
            inOrder(node->right);
        }
    }

    void preOrder(Node* node) {
        if (node != nullptr) {
            cout << node->contact.name << ": " << node->contact.phone << endl;
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    void postOrder(Node* node) {
        if (node != nullptr) {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->contact.name << ": " << node->contact.phone << endl;
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(const Contact& contact) {
        root = insert(root, contact);
    }

    Node* search(const string& name) {
        return search(root, name);
    }

    void deleteNode(const string& name) {
        root = deleteNode(root, name);
    }

    void levelOrder() {
        if (root == nullptr) return;

        Queue* queue = queue_create(); 
        queue_insert(queue, root); //добавляем корень в очередь

        while (!queue_empty(queue)) {
            Node* current = queue_get(queue); //получаем данные из очереди
            queue_remove(queue); 

            cout << current->contact.name << ": " << current->contact.phone << endl;

            if (current->left) {
                queue_insert(queue, current->left); //добавляем левого потомка в очередь
            }
            if (current->right) {
                queue_insert(queue, current->right); //добавляем правого потомка в очередь
            }
        }

        queue_delete(queue);
    }

    void inOrder() {
        cout << "In-order traversal:" << endl;
        inOrder(root);
    }

    void preOrder() {
        cout << "Pre-order traversal:" << endl;
        preOrder(root);
    }

    void postOrder() {
        cout << "Post-order traversal:" << endl;
        postOrder(root);
    }
};

int main() {
    BST tree;
    tree.insert(Contact("Alice", "123-456-7890"));
    tree.insert(Contact("Bob", "234-567-8901"));
    tree.insert(Contact("Charlie", "345-678-9012"));
    tree.insert(Contact("David", "456-789-0123"));

    cout << "Contacts (level-order):" << endl;
    tree.levelOrder();

    cout << endl;
    tree.inOrder();
    cout << endl;
    tree.preOrder();
    cout << endl;
    tree.postOrder();

    return 0;
}