//
//  cpp_binary_search.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/19/20.

#include <stdio.h>
#include <iostream>

using namespace std;
int binary_search_basic(int a[], int n, int key){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = (start + end)/2;
        if(a[mid] == key){
            return mid;
        }
        // Example: 1, 2, 3, 4, 5, 6, 7, 8, 9
        // Key : 2, mid here is 5
        else if(a[mid] > key) {
            end = mid - 1;
        }
        // Key : 7, mid is 5, look on right side
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int main_binSearch(){
    int n, key;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the element to search : ";
    cin >> key;
    cout<< binary_search_basic(a, n, key) << endl;
    return 0;
}
