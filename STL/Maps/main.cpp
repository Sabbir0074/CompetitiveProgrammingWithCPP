#include <bits/stdc++.h>

using namespace std;

void nmap(){
    // Types of maps - 
    //     normal maps
    //     unordered maps
    //     Multimaps
    
    
    // Maps helps us to store key with its value like-
    //    for key 1 value "abc"

    //in normal maps keys are stored in sorted order 
    //but in unordered maps keys are sored in no order

    // syntax of map:
    //     map<detatype of key, datatype of value> variable;

    map<int, string> m;

    //initialing maps
    m[1] = "abc"; //m = variable, 1 = key, "abc" = value
    m.insert({2, "bcd"}); //m.insert function take value of maps in pair
                          // 2 = key, "bcd" = value, m = variable
    
    // Printing maps 
    map<int, string> :: iterator it; // declaring iterator for maps

    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << ' ' << (*it).second << endl;
    } 

    // printing with auto keyword
    for(auto &pr : m){
        cout << pr.first << ' ' << pr.second << endl;
    }

    // size of maps
    cout << "Size of map: " << m.size() << endl;

    // time complexity of maps are O(log(n))

    // searching in maps
    auto it2 = m.find(2);
    auto it3 = m.find(4); // not availabe in our maps

    if(it2 == m.end()){
        cout << "void" << endl;
    }else{
        cout << (*it2).first << ' ' << (*it2).second << endl;
    }

    if(it3 == m.end()){
        cout << "void" << endl;
    }else{
        cout << (*it3).first << ' ' << (*it3).second << endl;
    }

    // erasing elements of maps
    m.erase(it2); // argument of an erase function can be iterator or key
    for(auto &pr : m){
        cout << pr.first << ' ' << pr.second << endl; 
    }

    // clear the whole map
    m.clear(); 

    for(auto &pr : m){
        cout << pr.first << ' ' << pr.second << endl; 
    }
}

void E_nMaps(){
    //Problem- 
    // Given N strings, print unique strings 
    // in  lexiographical order with their frequency
    // N <= 10^5
    // |S| <= 100

    map<string, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    for(auto pr : m){
        cout << pr.first << ' ' << pr.second << endl;
    }
}

void UnorderedMap(){
    unordered_map <int, string> m; // it stores in randoem order 
                                   //internally it uses mechanism of hash
                                   //every function used in maps works well in unordered maps
    m[1] = "abc"; // time complexity O(1)
    //in case of unorderd maps we can't defime complex deta types
    
}

int main(){
    
    cout << "1 = Map /n2 = Example of maps/n3 = Unodrdered maps" << endl;
    int n; 
    cin >> n;
    if(n == 1){
        nmap();  //1
    }else if(n ==2){
        E_nMaps(); //2
    }else if(n == 3){
        unorderedMap();
    }

    // there is another type of map called multimap ,,  but it is not used generally
    // difference of maps and unordered maps is, in maps we cant assign duplicate keys but in multimaps we can.
    

    return 0;
}