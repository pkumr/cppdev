//
//  flow_control.cpp
//  compcode
//
//  Created by Parveen Kumar on 6/24/20.
//

#include <stdio.h>
#include <iostream>
#include <ios>

using namespace std;

class FlowControl{
public:
    void basic_if_else();
    void dangling_else();
    void switch_statement();
    
};
void FlowControl:: basic_if_else(){
    //******************* if else ***********************
    // 0 -- false
    // 1 -- true
    bool i = true;
    if(i){
        cout << "if " << i << "\n";
        
    }else{
        cout << "else " << i << "\n";
        
    }
}

void FlowControl::dangling_else(){
    //c++ has dangling else problem
    //this can be avoided by using {} brackets
    //following code shows (dangling else)
    //Error/Warning : Add explicit braces to avoid dangling else
    int i = false;
    if(true){//-- if i remove { after if(true) and its closing }
        if(i)
            cout<< "dangling if else" << i << "\n";
        else
            cout<< "dangling else else" << "\n";
    }//closing <-- dangling problem can happen
}
void FlowControl::switch_statement(){
    int x = 0;
    switch (x) {
        case 1:
            cout << "Mon" << "\n";
            break;
        case 2:
            cout << "Tue" << "\n";
        default:
            cout << "Sun" << "\n";
            break;
    }
    switch (x) {
            //Valid without warning
    }
    switch (x) {
            //Code will never be executed
            //cout<< "Hello switch" << "\n";
    }
    switch (x) {
            //single default in switch is valid
            //no compile or runtime error
        default:
            cout << "def" << "\n";
            break;
    }
    int x_change = 10;
    const int x_const = 20;
    switch (x + x_change) {
        //Error with x_change : Case value is not a constant expression
        /*
        case x_change:
            cout << "1 Change" << "\n";
            break;
         */
        case x_const:
            cout << "1 Const" << "\n";
        default:
            cout << "def" << "\n";
            break;
    }
    
}

int main(){
    FlowControl fc;
    fc.basic_if_else();
    fc.dangling_else();
    fc.switch_statement();
}
