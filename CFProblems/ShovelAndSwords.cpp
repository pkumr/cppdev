//
//  Created by Parveen Kumar on 6/20/20.
//
#include <stdio.h>
#include <iostream>
#include <ios>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int tests;
    cin >> tests;
    while (tests--) {
        int sticks, swords;
        cin >> sticks;
        cin >> swords;
        if(sticks > 2 * swords){
            cout << swords << '\n';
        }else if (swords > 2 * sticks){
            cout << sticks << '\n';
        }else{
            cout << ((sticks + swords)/ 3) << '\n';
        }
    }
}
