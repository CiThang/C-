#include <iostream>

#include <list>
#include <vector>

using namespace std;

const int TABLE_SIZE = 9;

class HashTable {
private:
vector<list<int>> table;

int hashFunction(int key) {
return key % TABLE_SIZE;
}

public:
HashTable() {
table.resize(TABLE_SIZE);
}

void addNumber(int num) {
int index = hashFunction(num);
table[index].push_back(num);
}

void printTable() {
for (int i = 0; i < TABLE_SIZE; i++) {
cout << "Index " << i << ": ";
for (int num : table[i]) {
cout << num << " -> ";
}
cout << "NULL\n";
}
}

void searchNumber(int num) {
int index = hashFunction(num);
for (int n : table[index]) {
if (n == num) {
cout << "Number " << num << " found at index " << index << ".\n";
return;
}
}
cout << "Number " << num << " not found.\n";
}

void removeNumber(int num) {
int index = hashFunction(num);
table[index].remove(num);
cout << "Number " << num << " removed if it was present.\n";

}
};

int main() {
HashTable ht;

ht.addNumber(10);
ht.addNumber(22);
ht.addNumber(31);
ht.addNumber(4);
ht.addNumber(15);
ht.addNumber(28);
ht.addNumber(17);
ht.addNumber(88);
ht.addNumber(59);

cout << "Bang bam:\n";
ht.printTable();

cout << "\nTim kiem so 31:\n";
ht.searchNumber(31);

cout << "\nXoa so 22:\n";
ht.removeNumber(22);

cout << "\nBang bam sau khi xoa:\n";
ht.printTable();

return 0;
}