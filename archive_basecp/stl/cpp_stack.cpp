//
//  cpp_stack.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/11/20.
//

#include <stdio.h>
#include <iostream>
//header file for stack
#include <stack>

using namespace std;
int main_stack(){
    stack<int> s;
    //methods
    //  1. push
    //  2. pop
    //  3. top
    for(int i = 0; i < 5; i++){
        s.push(i);
    }
    while (!s.empty()) {
        cout<< s.top() << "-->";
        s.pop();
    }
    return 0;
}
