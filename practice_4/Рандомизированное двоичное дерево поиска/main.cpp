#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
#include <set>
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

    bool isBST(Node* node, Node* left = nullptr, Node* right = nullptr) {
        if (node == nullptr) return true;

        //проверка на соответствие свойства BST
        if ((left != nullptr && node->contact.name <= left->contact.name) ||
            (right != nullptr && node->contact.name >= right->contact.name)) {
            return false;
        }

        //проверяем левое и правое поддерево
        return isBST(node->left, left, node) && isBST(node->right, node, right);
    }

public:
    BST() : root(nullptr) {}

    void insert(const Contact& contact) {
        root = insert(root, contact);
        if (!isBST(root)) {
            cerr << "Error: " << contact.name << endl;
        }
    }

    // void insertRandomized(Contact contact) {
    //     //генерация случайного числа для вставки
    //     int randNum = rand() % 2;

    //     if (randNum == 0) {
    //         cout << "Вставка " << contact.name << " в левое поддерево." << endl;
    //         //вставить в левое поддерево
    //         insert(contact);
    //     } else {
    //         cout << "Вставка " << contact.name << " в правое поддерево." << endl;
    //         //вставить в правое поддерево
    //         insert(contact); 
    //     }
    // }

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

    // void preOrder() {
    //     cout << "Pre-order traversal:" << std::endl;
    //     preOrder(root);
    // }

    // void postOrder() {
    //     std::cout << "Post-order traversal:" << std::endl;
    //     postOrder(root);
    // }

    void inOrder(Node* node) {
        if (node != nullptr) {
            inOrder(node->left);
            cout << node->contact.name << ": " << node->contact.phone << endl;
            inOrder(node->right);
        }
    }

    // void preOrder(Node* node) {
    //     if (node != nullptr) {
    //         cout << node->contact.name << ": " << node->contact.phone << endl;
    //         preOrder(node->left);
    //         preOrder(node->right);
    //     }
    // }

    // void postOrder(Node* node) {
    //     if (node != nullptr) {
    //         postOrder(node->left);
    //         postOrder(node->right);
    //         cout << node->contact.name << ": " << node->contact.phone << std::endl;
    //     }
    // }

    //генерация радномных контактов
    Contact generateRandomContact(set<string>& names) {
        string name;
        do {
            name = "Contact" + std::to_string(rand() % 100);
        } while (names.find(name) != names.end());
        
        string phone = to_string(rand() % 1000000000);
        names.insert(name);
        return Contact(name, phone);
    }

    void insertRandomContacts(int count) {
        set<string> names;
        for (int i = 0; i < count; ++i) {
            Contact contact = generateRandomContact(names);
            insert(contact);
            cout << "Inserted: " << contact.name << ", Phone: " << contact.phone << std::endl;
        }
    }
};

int main() {
    srand(static_cast<unsigned int>(time(0)));

    BST tree;
    tree.insertRandomContacts(10);

    std::cout << std::endl;
    tree.inOrder(); //вывод в порядке in-order для проверки

    return 0;
}