#include <iostream>
#include <vector>

using namespace std;

// node structure to store data
struct Node
{
    int data;
    Node *next;
};

// hashtable class
class HashTable
{
    // hashtable size
    int TABLE_SIZE;

    // pointer to an array containing hashTable
    vector<Node *> hashTable;

public:
    // constructor
    HashTable(int bsize);

    // function to insert data into the hashtable
    bool insertItem(int data);

    // function to delete data from the hashtable
    bool deleteItem(int data);

    // function to search for an element in the hashtable
    bool searchItem(int data);

    // function to display the hashtable
    void displayHash();

    // function to calculate the hash value
    int hashFunction(int data);
};

// constructor
HashTable::HashTable(int bsize)
{
    this->TABLE_SIZE = bsize;
    hashTable.resize(TABLE_SIZE);

    // initialize all hashTable with null values
    for (int i = 0; i < TABLE_SIZE; i++)
        hashTable[i] = nullptr;
}

// function to calculate the hash value
int HashTable::hashFunction(int data)
{
    return (data % TABLE_SIZE);
}

// function to insert data into the hashtable
bool HashTable::insertItem(int data)
{
    int index = hashFunction(data);

    // create a new node and add to the bucket
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    // if bucket is empty
    if (hashTable[index] == nullptr)
        hashTable[index] = newNode;
    else
    {
        // add to the end of the list
        Node *temp = hashTable[index];
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    return true;
}

// function to delete data from the hashtable
bool HashTable::deleteItem(int data)
{
    int index = hashFunction(data);
    // search the list and delete the node
    Node *temp = hashTable[index];
    Node *prev = nullptr;
    while (temp != nullptr && temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }
    
    // if data is not found
    if (temp == nullptr)
        return false;

    // if data is found at the beginning of the list
    if (prev == nullptr)
        hashTable[index] = temp->next;

    // otherwise
    else
        prev->next = temp->next;

    delete temp;
    return true;
}

// function to search for an element in the hashtable
bool HashTable::searchItem(int data)
{
    int index = hashFunction(data);

    // search the list
    Node *temp = hashTable[index];
    while (temp != nullptr)
    {
        if (temp->data == data)
            return true;
        temp = temp->next;
    }
    return false;
}

// function to display the hashtable
void HashTable::displayHash()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        cout << i;
        Node *temp = hashTable[i];
        while (temp != nullptr)
        {
            cout << " --> " << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }
}

// main function
int main()
{
    // hashtable size
    int n = 10;

    // create a hashtable
    HashTable h(n);

    // insert elements into the hashtable
    h.insertItem(10);
    h.insertItem(25);
    h.insertItem(35);
    h.insertItem(45);

    // display the hashtable
    h.displayHash();

    // search for an element in the hashtable
    int element = 45;
    if (h.searchItem(element))
        cout << "\nElement " << element << " found in the hashtable" << endl;
    else
        cout << "\nElement " << element << " not found in the hashtable" << endl;

    // delete an element from the hashtable
    element = 25;
    if (h.deleteItem(element))
        cout << "\nElement " << element << " deleted from the hashtable" << endl;
    else
        cout << "\nElement " << element << " not found in the hashtable" << endl;

    // display the hashtable
    h.displayHash();

    return 0;
}