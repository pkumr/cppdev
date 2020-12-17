//
//  cpp_map.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/11/20.
//

//header file for map
#include <map>
#include <iostream>

using namespace std;
int main_map(){
    map<string, int> m;
    //1. insert
    m.insert(make_pair("a", 1));
    //2. insert
    pair<string, int>p;
    p.first="b";
    p.second = 2;
    m.insert(p);
    //3. insert
    m["c"] = 3;
    m["a"] = 4;//update value of a
    //erase
    auto f = m.find("c"); //find return iterator
    m.erase(f); //erase takes iterator as input
    
    //Search find() method. it returns an iterator
    string letter;
    cin>>letter;
    map<string, int>::iterator it = m.find(letter);
    if(it!= m.end()){
        cout<< "value : " << letter << ", " << m[letter] << endl;
    }else{
        cout<< "letter not found" << "\n";
    }
    if(m.count(letter)){
        cout<< "letter is present"<< "\n";
    }
    
    //Iterate
    //1. using iterator
    for(map<string, int>::iterator it = m.begin();it != m.end(); it++){
        cout<<it->first << " and " << it->second <<endl;
    }
    //above for loop can be rewritten as
    for(auto it = m.begin(); it != m.end();it++){
        cout<<(*it).first << " and " << (*it).second << endl;
    }
    //2. using foreach and pair
    cout<< "using pair" <<endl;
    for(pair<string, int> p : m){
        cout<< p.first << " and " << p.second << "\n";
    }
    return 0;
}
