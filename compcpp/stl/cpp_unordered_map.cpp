//
//  cpp_unordered_map.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/11/20.
//  Copyright © 2020 Parveen Kumar. All rights reserved.
//

#include <stdio.h>
#include <unordered_map> //header file for unordered_map (hash table)
#include <iostream>
#include <string>

using namespace std;
class Student{
public:
    string fname;
    string lname;
    int rollno;
    Student(string f, string l, int r){
        fname = f;
        lname = l;
        rollno = r;
    }
    bool operator == (const Student &s) const{
        return rollno == s.rollno ? true : false;
    }
};

class HashFun{
public:
    size_t operator()(const Student &s) const{
        return s.fname.length() + s.lname.length();
    }
};

int main_unorder_map(){
    unordered_map<string, int> un_m;
    //insert (1)
    un_m.insert(make_pair("a", 1));
    //insert (2)
    pair<string, int> p;
    p.first = "b";
    p.second = 2;
    un_m.insert(p);
    //insert (3)
    un_m["c"] = 3;
    
    //erase
    auto f = un_m.find("c"); //find return iterator
    un_m.erase(f); //erase takes iterator as input
    
    //Search
    string letter;
    cin>>letter;
    unordered_map<string, int>::iterator it = un_m.find(letter);
    if(it!= un_m.end()){
        cout<< "value : " << letter << ", " << un_m[letter] << endl;
    }else{
        cout<< "letter not found" << "\n";
    }
    if(un_m.count(letter)){
        cout<< "letter is present"<< "\n";
    }
    
    //Iterate
    //1. using iterator
    for(unordered_map<string, int>::iterator it = un_m.begin();it != un_m.end(); it++){
        cout<<it->first << " and " << it->second <<endl;
    }
    //above for loop can be rewritten as
    for(auto it = un_m.begin(); it != un_m.end();it++){
        cout<<(*it).first << " and " << (*it).second << endl;
    }
    //2. using foreach and pair
    cout<< "using pair" <<endl;
    for(pair<string, int> p : un_m){
        cout<< p.first << " and " << p.second << "\n";
    }
    
    //using hashmap in objects
    Student s1("Peter", "Parker", 1);
    Student s2("Bruce", "Baner", 2);
    Student s3("Bruce", "Wayne", 3);
    Student s4("Peter", "Parker", 4);
    unordered_map<Student, int, HashFun> student_map;
    
    student_map[s1] = 100;
    student_map[s2] = 120;
    student_map[s3] = 11;
    student_map[s4] = 45;
    
    for(auto s : student_map){
        cout<< s.first.fname << " " << s.first.rollno  << endl << " Marks " << s.second<<endl;
    }
    
    return 0;
}
