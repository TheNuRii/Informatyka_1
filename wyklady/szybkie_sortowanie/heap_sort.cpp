// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;

void insert(double value, double heap[], int& heap_size, const int HEAP_MAX){
    int child = ++heap_size;
    int parent = child / 2;
    while (parent && heap[parent] > value){
        heap[child] = heap[parent];
        child = parent;
        parent / 2;
    }
    heap[child] = value;
}

int min_child(const int heap[], int parent, int heap_size) {
    int left = 2 * parent;
    int right = left + 1;
    if (left > heap_size) return 0;
    if(right > heap_size || heap[left] < heap[right])
        return left;
    return right;
}

void remove_min(double heap[], int& heap_size){
    double last = heap[heap_size--];
    int temp = 1;
    int min_child_idx = min_child(reinterpret_cast<const int *>(heap), 1, heap_size);
}

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root Since we are using 0 based indexing
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver program
int main()
{
    int arr[] = { 60 ,20 ,40 ,70, 30, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
//heapify algorithm
// the loop must go reverse you will get after analyzing manually
// (i=n/2 -1) because other nodes/ ele's are leaf nodes
// (i=n/2 -1) for 0 based indexing
// (i=n/2) for 1 based indexing
    for(int i=n/2 -1;i>=0;i--){
        heapify(arr,n,i);
    }

    cout << "After heapifying array is \n";
    printArray(arr, n);


    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);

    return 0;
}
//code by Prajwal Chougale
