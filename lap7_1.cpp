#include <iostream>
#include <vector>
#include <algorithm>
class MaxHeap {
private:
std::vector<int> heap;
void heapifyDown(int index) {
int leftChild = 2 * index + 1;
int rightChild = 2 * index + 2;
int largest = index;
if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
largest = leftChild;
}
if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
largest = rightChild;
}
if (largest != index) {
std::swap(heap[index], heap[largest]);
heapifyDown(largest);
}
}
void heapifyUp(int index) {
if (index == 0) {
return;
}
int parentIndex = (index - 1) / 2;
if (heap[parentIndex] < heap[index]) {
std::swap(heap[parentIndex], heap[index]);
heapifyUp(parentIndex);
}
}
int findIndex(int value) {
for (int i = 0; i < heap.size(); ++i) {
if (heap[i] == value) {
return i;
}
}
return -1; // If the value is not found
}

public:
void buildHeap() {
for (int i = heap.size() / 2 - 1; i >= 0; --i) {
heapifyDown(i);
}
}
void insert(int value) {
heap.push_back(value);
heapifyUp(heap.size() - 1);
}
void deleteElement(int value) {
int index = findIndex(value);
if (index != -1) {
heap[index] = heap.back();
heap.pop_back();
if (index < heap.size()) {
heapifyDown(index);
heapifyUp(index);
}
}
}
void heapSort() {
std::vector<int> originalHeap = heap;
int size = heap.size();
for (int i = size - 1; i > 0; --i) {
std::swap(heap[0], heap[i]);
heap.resize(i);
heapifyDown(0);
}
heap = originalHeap;
}
void printHeap() {
for (int i = 0; i < heap.size(); ++i) {
std::cout << heap[i] << " ";
}
std::cout << std::endl;
}
void printSorted() {
std::vector<int> sortedHeap = heap;
int size = sortedHeap.size();
for (int i = size - 1; i > 0; --i) {

std::swap(sortedHeap[0], sortedHeap[i]);
int heapSize = i;
int index = 0;
while (true) {
int leftChild = 2 * index + 1;
int rightChild = 2 * index + 2;
int largest = index;
if (leftChild < heapSize && sortedHeap[leftChild] >
sortedHeap[largest]) {
largest = leftChild;
}
if (rightChild < heapSize && sortedHeap[rightChild] >
sortedHeap[largest]) {
largest = rightChild;
}
if (largest != index) {
std::swap(sortedHeap[index], sortedHeap[largest]);
index = largest;
} else {
break;
}
}
}
for (int i = 0; i < sortedHeap.size(); ++i) {
std::cout << sortedHeap[i] << " ";
}
std::cout << std::endl;
}
};
int main() {
MaxHeap maxHeap;
// Thêm các ph?n t? vào heap t?ng ph?n t? m?t
int initialElements[] = {45, 36, 54, 27, 63, 72, 61, 18};
for (int i = 0; i < 8; ++i) {
maxHeap.insert(initialElements[i]);
}
maxHeap.buildHeap();
std::cout << "Max Heap: ";
maxHeap.printHeap();
maxHeap.insert(50);
std::cout << "Heap after inserting 50: ";

maxHeap.printHeap();
maxHeap.deleteElement(36);
std::cout << "Heap after deleting 36: ";
maxHeap.printHeap();
std::cout << "Sorted numbers in descending order: ";
maxHeap.printSorted();
return 0;
}