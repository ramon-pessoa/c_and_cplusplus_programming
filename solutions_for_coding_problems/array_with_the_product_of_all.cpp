#include <iostream>
#include <iterator>     // std::ostream_iterator
#include <vector>       // std::vector
#include <algorithm>    // std::copy
#include <stdio.h>

using namespace std;

int* get_array_with_the_product_of_all(int arr[], int size) {
    static int new_arr[5];

    int idx = 0;
    for(int i = 0; i < size; i++) {
        int prod = 1;
        for(int j = 0; j < size; j++) {
            if(i != j)
                prod = prod * arr[j];
        }
        new_arr[idx] = prod;
        idx++;
    }

    return new_arr;
}

int main() {
    int arr1[3] = {3, 2, 1};
    int* new_arr = get_array_with_the_product_of_all(arr1, 3);
    cout << "\nNew array using [3, 2, 1] input array: ";
    std::copy ( new_arr, new_arr + 3, std::ostream_iterator<int>(std::cout, " ") );

    int arr2[5] = {1, 2, 3, 4, 5};
    new_arr = get_array_with_the_product_of_all(arr2, 5);
    cout << "\nNew array using [1, 2, 3, 4, 5] input array: ";
    std::copy ( new_arr, new_arr + 5, std::ostream_iterator<int>(std::cout, " ") );
    cout << endl;

    return 0;
}