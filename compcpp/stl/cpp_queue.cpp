//
//  cpp_queue.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/11/20.
//

#include <stdio.h>
#include <iostream>
//header file for queue
#include <queue>

using namespace std;
int main_queue(){
    queue<int> q;
    for(int i = 1; i < 5; i++){
        q.push(i);
    }
    while (!q.empty()) {
        cout<< q.front() << " -- ";
        q.pop();
    }
    return 0;
}
