#include <iostream>

void quicksort(double data[], int first, int last) {
    if (first >= last) return;
    double pivot = data[first];
    int left = first;
    int right = last + 1;
    while (true) {
        do left++; while (left <= last && data[left] < pivot);
        do right--; while (data[right] > pivot);
        if (left > right) break;
        std::swap(data[left], data[right]);
    }
    std::swap(data[first], data[right]);
    quicksort(data, first, right - 1);
    quicksort(data, right + 1, last);
}