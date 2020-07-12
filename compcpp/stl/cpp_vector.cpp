//
//  cpp_vector.cpp
//  vector is dynamic array in cpp
//  Created by Parveen Kumar on 7/11/20.
//

#include <stdio.h>
#include <iostream>
//header file for vector <vector>
#include <vector>

using namespace std;
int main(){
    //1. ways to create and initalize the vector
    vector<int> v1;
    vector<int> v2(5, 10);
    vector<int> v3(v2.begin(), v2.end());
    vector<int> v4{1, 2, 3, 10, 14};
    
    //2. how to iterate over the vector
    //a). using simple for loop
    for(int i = 0; i < v4.size(); i++){
        cout<< v4[i] << ", ";
    }
    cout<< endl;
    //b). using iterator, in latest c++ versions vector<int>::iterator
    //   can be replace with auto keyword
    for(vector<int>::iterator it = v4.begin(); it != v4.end(); it++){
        cout<< (*it) << ", ";
    }
    cout<< endl;
    //c). for each loop, int can be replace with auto keyword too.
    for(int x : v4){
        cout<< x << ", " ;
    }
    cout<< endl;
    //3. vector methods
    //a) push_back() --> insert element at end of the vector
    //   time - O(1), more time when vector doubles its size
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v1.push_back(num);
    }
    cout<< "numbers added in vector " << "\n";
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout<< *it << ", ";
    }
    cout << endl;
    //b) memory levels in vector
    cout <<"size of vector : " << v1.size() << "\n";
    cout <<"size of underlying array/vector : " << v1.capacity() << "\n";
    cout <<"max number of elements vector can hold (machine dependant) : ";
    cout << v1.max_size() << "\n";
    
    //c) pop_back() --> removes the last element added in vector O(1)
    v1.pop_back();
    
    //d) insert at position O(N)
    v4.insert(v4.begin()+ 2, 8); // adding 8 at after pos 2
    v4.insert(v4.begin()+ 3, 4, 99); //adding multiple (4) 99 after pos 3
    cout<< "values after insert : ";
    for(auto x : v4)
        cout<< x << ", ";
    cout<< endl;
    //e) erase elements
    v4.erase(v4.begin()+ 2); //8 will be removed
    //erase elements in range
    v4.erase(v4.begin()+ 2, v4.begin()+5);
    cout<< "values after erase : ";
       for(auto x : v4)
           cout<< x << ", ";
       cout<< endl;
    
    //f) remove all elements
    v2.clear();
    
    //g) check if vector is empty
    if(v2.empty())
        cout<< "v2 is empty !" << "\n";
    
    //h) front and back elements
    v2.push_back(10);
    v2.push_back(11);
    v2.push_back(12);
    
    cout << "front element in v2 : " <<  v2.front() << "\n";
    cout << "back element in v2 : " << v2.back() << "\n";
    
    //i) reserve () --> to avoid doubling of vector
    
}
