#include <iostream>
#include <string>

using namespace std;

const int TABLE_SIZE = 10;

struct Product {
int code;
string name;
float price;
bool isOccupied;

Product() : code(0), name(""), price(0.0), isOccupied(false) {}
};

class HashTable {
private:
Product table[TABLE_SIZE];

int hashFunction(int key) {
return key % TABLE_SIZE;
}

public:
void addProduct(int code, string name, float price) {
int index = hashFunction(code);
int originalIndex = index;
int i = 1;

while (table[index].isOccupied) {
index = (originalIndex + i) % TABLE_SIZE;
if (index == originalIndex) {
cout << "Hash table is full, cannot add product.\n";
return;
}
i++;
}

table[index].code = code;
table[index].name = name;
table[index].price = price;
table[index].isOccupied = true;
}

void printProducts() {
for (int i = 0; i < TABLE_SIZE; i++) {
if (table[i].isOccupied) {

cout << "Code: " << table[i].code << ", Name: " << table[i].name << ",
Price: " << table[i].price << "\n";
}
}
}

void searchProduct(int code) {
int index = hashFunction(code);
int originalIndex = index;
int i = 1;

while (table[index].isOccupied && table[index].code != code) {
index = (originalIndex + i) % TABLE_SIZE;
if (index == originalIndex) {
cout << "Product not found.\n";
return;
}
i++;
}

if (table[index].isOccupied) {
cout << "Found product - Code: " << table[index].code << ", Name: " <<
table[index].name << ", Price: " << table[index].price << "\n";
} else {
cout << "Product not found.\n";

}
}

void removeProduct(int code) {
int index = hashFunction(code);
int originalIndex = index;
int i = 1;

while (table[index].isOccupied && table[index].code != code) {
index = (originalIndex + i) % TABLE_SIZE;
if (index == originalIndex) {
cout << "Product not found, cannot remove.\n";
return;
}
i++;
}

if (table[index].isOccupied) {
table[index].isOccupied = false;
cout << "Product removed successfully.\n";
} else {
cout << "Product not found, cannot remove.\n";
}
}
};

int main() {
HashTable ht;

ht.addProduct(10001, "duong", 50000);
ht.addProduct(10002, "muoi", 7500);
ht.addProduct(10003, "gao", 15000);
ht.addProduct(10004, "nuoc mam", 30000);

cout << "Danh sach san pham:\n";
ht.printProducts();

cout << "\nTim kiem san pham voi ma 10002:\n";
ht.searchProduct(10002);

cout << "\nXoa san pham voi ma 10003:\n";
ht.removeProduct(10003);

cout << "\nDanh sach san pham sau khi xoa:\n";
ht.printProducts();

return 0;
}