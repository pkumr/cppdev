//
//  cpp_list.cpp
//  compcode (Doubly Linked List in c++)
//
//  Created by Parveen Kumar on 7/11/20.
//

#include <stdio.h>
#include <iostream>
//List header file
#include <list>
#include <string>

using namespace std;

int main_list(){
    //1. ways to create the list
    //2. basic functions
    //  push_back
    //  push_front
    //  pop_back
    //  pop_front
    //  reverse
    //  insert
    list<int> l1;
    list<int> l2{1, 2, 3, 10, 8, 5};
    //l2.sort();
    list<string> l3;
    l3.push_back("a");
    l3.push_back("b");
    l3.push_back("c");
    l3.push_back("d");

    //Using Iterator (auto can be used in place of list<string>::iterator
    for(list<string>::iterator it = l3.begin(); it != l3.end(); it++){
        cout<< "element is : " << *it << " ";
    }
    cout<<"\n";
    
    for(string s : l3){
        cout << s << " -- ";
    }
    cout<<endl;
    l3.reverse();
    for(string s : l3){
        cout << s << " -- ";
    }
    cout<<endl;
    l2.sort();
    for(int i : l2)
        cout<< i << ", ";
    cout<<endl;
    
    return 0;
}
