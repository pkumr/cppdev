#include<iostream>
#include<thread>

using namespace std;

void fun(){
    cout<< "fun function" << endl;
}

class FunObject{
public:
    void operator()() const {
        cout << "Fun Object" << endl;
    }
};

int main(){
    cout << endl;
    thread t1(fun);
    
    FunObject obj;
    thread t2(obj);

    thread t3([]{ cout<< "lambda function" << endl;});

    t1.join();
    t2.join();
    t3.join();

    cout << endl;
};
