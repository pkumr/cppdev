//
//  Created by Parveen Kumar on 6/20/20.
//

#include <stdio.h>
#include <iostream>
#include <ios>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if(s.length() > 10){
            cout << s[0];
            cout << s.length() - 2;
            cout << s[s.length() - 1] << '\n';
        }else{
            cout << s << '\n';
        }
    }
}
