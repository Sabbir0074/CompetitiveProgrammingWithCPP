#include <bits/stdc++.h>

using namespace std;

void learnStack(){

    // stack - First in last out  

    stack <int> s;
    s.push(1); // inserts 1 on the top of the stack 
    s.push(2); // inserts 2 on the top of the stack  
    s.push(3); 

    while(!s.empty()){
        cout << s.top() << endl; // accessing top element(last inserted element)
        s.pop(); // popping out the top elements or last element. 
    } 

    // after executing the loop the stack will be empty 
    //cout << s.top() << endl; // returns segmentation fault, cause the stack is empty 
}

void learnQueue(){
    // queue - first in first out 

    queue <int> q;
    q.push(1); // inserting 1 in the back 
    q.push(2); // inserting 2 in the back
    q.push(3);

    while(!q.empty()){
        cout << q.front() << endl; // accessing the front element(first inserted element)
        q.pop(); // popping out the front elements or first element. 
    }

    // after executing the loop the stack will be empty 
    cout << q.front() << endl; // returns 0 but it is not a element of the queue, cause the stack is empty 


}

int main(){

    bool dec;
    cout << "Insert 1 for Stack: ";
    cin >> dec;
    if(dec){
        learnStack();
    }

    cout << "Insert 1 for Queue: ";
    cin >> dec;
    if(dec){
        learnQueue();
    }
    
    return 0;
}