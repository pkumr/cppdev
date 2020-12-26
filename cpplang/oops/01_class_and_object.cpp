#include <iostream>
using namespace std;

class Test{
public:
    int testNo;
    char testName[20];
    void attempt(){
        cout << "Test is attempted!" <<testName <<" " <<testNo << "\n";
    }
};

int main(){
    Test t;
    t.testNo = 321;
    t.testName[0] = 't';
    t.testName[1] = 'e';
    t.testName[2] = 's';
    t.testName[3] = 't';
    t.testName[4] = '1';
    t.testName[5] = '\0';
    t.attempt();
    return 0;
}
