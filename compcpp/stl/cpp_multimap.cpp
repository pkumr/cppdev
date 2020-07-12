//
//  cpp_multimap.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/11/20.
//
//

#include <stdio.h>
#include <iostream>
#include <map>
//#include <cstring>
using namespace std;
int main_multimap(){
    multimap<char, string> m;
    //methods
    //insert
    //find
    //erase
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch, s));
    }
    
    for(pair<char, string> p : m ){
        cout<< p.first << " -- " << p.second << endl;
    }
    cout << "finding lower bound " << endl;
    multimap<char, string>::iterator it1 = m.lower_bound('a');
    cout << it1->first << " -- " << it1->second << endl;
    multimap<char, string>::iterator it2 = m.upper_bound('a');
    for(auto it = it1; it != it2; it++){
        cout<< it->first << " -- " << it->second << "\n";
    }
    auto f = m.begin();
    m.erase(f);
    cout<< "after erase begin element " << endl;
    for(multimap<char, string>::iterator it = m.begin(); it != m.end(); it++){
        cout<< "first :" << (*it).first << " second : " << (*it).second << "\n";
    }
    return 0;
}
