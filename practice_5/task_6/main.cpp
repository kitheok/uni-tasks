#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

//структура для узла дерева Хаффмана
struct Node {
    char character;
    int frequency;
    Node *left;
    Node *right;

    Node(char ch, int freq) : character(ch), frequency(freq), left(nullptr), right(nullptr) {}
};

//компаратор для приоритетной очереди
struct Compare {
    bool operator()(Node* lhs, Node* rhs) {
        return lhs->frequency > rhs->frequency; //для минимальной очереди по частоте
    }
};

//рекурсивная функция для получения кодов Хаффмана
void generateCodes(Node* root, const string& str, unordered_map<char, string>& codeMap) {
    if (root == nullptr) return;

    //ситуация для листа -> сохраняем код символа
    if (root->left == nullptr && root->right == nullptr) {
        codeMap[root->character] = str;
    }

    //рекурсивные вызовы для левого и правого поддерева
    generateCodes(root->left, str + "0", codeMap);
    generateCodes(root->right, str + "1", codeMap);
}

//функция для кодирования текста
void huffmanCoding(const string& text) {
  setlocale(LC_ALL, "ru");
    //подсчет частоты символов
    unordered_map<char, int> frequency;
    for (char ch : text) {
        frequency[ch]++;
    }

    //создание приоритетной очереди
    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (const auto& pair : frequency) {
        pq.push(new Node(pair.first, pair.second));
    }

    //построение дерева Хаффмана
    while (pq.size() > 1) {
        Node* left = pq.top();
        pq.pop();
        Node* right = pq.top();
        pq.pop();

        Node* newNode = new Node('\0', left->frequency + right->frequency);
        newNode->left = left;
        newNode->right = right;
        pq.push(newNode);
    }

    //корень дерева
    Node* root = pq.top();

    //сохранение кодов
    unordered_map<char, string> huffmanCodes;
    generateCodes(root, "", huffmanCodes);

    //вывод
    cout << "Huffman codes:\n";
    for (const auto& pair : huffmanCodes) {
        cout << pair.first << ": " << pair.second << endl;
    }

    //кодированеи текста
    string encodedString = "";
    for (char ch : text) {
        encodedString += huffmanCodes[ch];
    }

    cout << "\nEncoded string:\n" << encodedString << endl;

    //показать уменьшение объема данных
    int originalSize = text.size() * 8; //стандартный размер символа 8 бит
    int compressedSize = encodedString.size();
    cout << "\nOriginal text size in bits:" << originalSize << endl;
    cout << "Compressed text size in bits: " << compressedSize << endl;//размер сжатого текста в битах
    float compressionRatio = (float)compressedSize / originalSize * 100;
    cout << "Data reduction: " << compressionRatio << "%\n";//уменьшение объема данных 
}

int main() {
    setlocale(LC_ALL, "ru");
    string text;
    cout << "Enter text to compress: ";
    getline(cin, text); 

    huffmanCoding(text);

    return 0;
}
