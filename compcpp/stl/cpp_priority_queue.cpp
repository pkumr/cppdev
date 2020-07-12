//
//  cpp_priority_queue.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/11/20.
//

#include <stdio.h>
#include <iostream>
//header file is queue for priority queue
#include <queue>

using namespace std;

class Employee{
public:
    string name;
    int rating;
    Employee(){
        
    }
    ~Employee(){
        
    }
    Employee(string n, int r){
        name= n;
        rating = r;
    }
};

class EmployeeCompare{
public:
    bool operator()(Employee A, Employee B){
        return A.rating < B.rating;
    }
};

int main_pq(){
    //default heap is max heap
    priority_queue<int> pq;
    int n;
    cin>> n;
    for(int i = 0; i < n ; i++){
        int num;
        cin>> num;
        pq.push(num); //O(LogN) time
    }
    //remove
    while (!pq.empty()) {
        cout << pq.top() << ", ";
        pq.pop();
    }
    cout<<endl;
    //min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    int n1;
    cin>> n1;
    for(int i = 0; i < n1;i++){
        int num;
        cin>> num;
        minheap.push(num);
    }
    //remove
    while (!minheap.empty()) {
        cout << minheap.top() << ", ";
        minheap.pop();
    }
    cout<<endl;
    
    //Custom comparison in priority queue
    priority_queue<Employee, vector<Employee>, EmployeeCompare> pr_qu;
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        string name;
        int rating;
        cin>> name>> rating;
        Employee e (name, rating);
        pr_qu.push(e);
    }
    int k;
    cin >> k;
    for(int i =0; i < k; i++){
        Employee e = pr_qu.top();
        cout<< e.name << " " << e.rating << endl;
        pr_qu.pop();
    }
    return 0;
}
