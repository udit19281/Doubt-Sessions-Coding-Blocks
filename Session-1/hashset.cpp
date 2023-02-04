#include <iostream>
#include <vector>

const int TABLE_SIZE = 128;

struct HashNode {
    int key;
    int value;
};

class HashTable {
    private:
        std::vector<std::vector<HashNode>> table;
        int hashFunction(int key) {
            return key % TABLE_SIZE;
        }
    public:
        HashTable() {
            table.resize(TABLE_SIZE);
        }
        void insert(int key, int value) {
            int index = hashFunction(key);
            HashNode newNode = {key, value};
            table[index].push_back(newNode);
        }
        int search(int key) {
            int index = hashFunction(key);
            for (const auto& node : table[index]) {
                if (node.key == key) {
                    return node.value;
                }
            }
            std::cout << "Key not found." << std::endl;
            return -1;
        }
        void deleteKey(int key) {
            int index = hashFunction(key);
            for (auto it = table[index].begin(); it != table[index].end(); it++) {
                if (it->key == key) {
                    table[index].erase(it);
                    std::cout << "Key deleted." << std::endl;
                    return;
                }
            }
            std::cout << "Key not found." << std::endl;
        }
        void print() {
            for (const auto& bucket : table) {
                for (const auto& node : bucket) {
                    std::cout << "Key: " << node.key << " Value: " << node.value << std::endl;
                }
            }
        }
};

int main()
{
    HashTable ht;
    ht.insert(1, 10);
    ht.insert(1, 20);
    ht.insert(1, 30);
    ht.insert(2, 20);
    ht.insert(3, 30);
    std::cout << "Value associated with key 2: " << ht.search(2) << std::endl;
    // ht.deleteKey(2);
    ht.search(1);
    ht.print();
    return 0;
}
