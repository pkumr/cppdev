//
//  cpp_set.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/11/20.
//

#include <stdio.h>
#include <set>
#include <unordered_set>
#include <iostream>

using namespace std;
int main(){
    int arr[]  = {10, 20, 11, 9, 8, 10};
    int n = sizeof(arr)/sizeof(int);
    set<int> s;
    unordered_set<int> un_s;
    
    for(int i = 0; i < n; i ++){
        s.insert(arr[i]);
    }
    for(int i = 0; i < n; i ++){
        un_s.insert(arr[i]);
    }
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout<< (*it) << ", ";
    }
    cout<<endl;
    for(unordered_set<int>::iterator it = un_s.begin(); it != un_s.end(); it++){
        cout<< (*it) << ", ";
    }
}
