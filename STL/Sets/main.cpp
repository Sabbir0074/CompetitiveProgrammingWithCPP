#include <bits/stdc++.h>

using namespace std;

void unorderedSet(){
    unordered_set <string> s; // same as unordered map
    // where we dont need the elements in sorted order in that case we can use unordered sets

    s.insert("def");
    s.insert("abc");
    s.insert("xyz");
    // elements inserted in front of the set ( --> --> set )

    for(string value : s){
        cout << value << endl;
    }
}

void multiSet(){
    // in case of multisets we can use multiple same elements in  the set 
    multiset <string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("abc");
    s.insert("abc");
    // it stors the elements in sorted order
    for(string value : s){
        cout << value << endl;
    }

    // if we have multiple same elemet , in case of find operation it will return the index of teh first elemnt
    auto it = s.find("abc");
    s.erase(it); // it will erase first "abc"
    cout << endl << "After erasing with index......" << endl;
    for(string value : s){
        cout << value << endl;
    }

    cout << "Erasing with value......" << endl;
    s.erase("abc"); // it will erase all "abc"
    for(string value : s){
        cout << value << endl;
    }
}

int main(){

    // sets are compaired with maps, if we remove the values and only stores the keys it will be a set

    //diclaration
    set <string> s; //it strore s elements in sorted order
    //inserting value
    s.insert("def"); // time complexity O(log(n))
    s.insert("abc");
    s.insert("def");

    // finding elements 
    auto it = s.find("abc"); // returns the index if the element exist

    // printing elements range based loop
    for(string value : s){
        cout << value << endl;
    }

    cout << endl << endl;

    // printing with normal loop 
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *(it) << endl;
    }

    // erasing elemets 
    s.erase("abc"); // it can also take iterator as a argumnet and erase spasific element in the index
    cout << endl << "After erasing ........." << endl;
    for(string value : s){
        cout << value << endl;
    }

    cout << endl << endl;

    s.insert("xyz");
    s.insert("ghi");
    s.insert("abc");
    for(string value : s){
        cout << value << endl;
    }

    bool flag;
    cout << "Enter 1 to enter unorfdered set: ";
    cin >> flag;
    if(flag == 1){
        unorderedSet();
    }

    flag = 0;
    cout << "Enter 1 to enter multi set: ";
    cin >> flag;
    if(flag == 1){
        multiSet();
    }



    return 0;
}