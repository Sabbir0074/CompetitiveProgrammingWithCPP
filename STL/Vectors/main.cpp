#include <bits/stdc++.h>

void printVector(std::vector<int> &V);

int main(){

    // Vector is like an array, whose size can be changed
    int a[10]; //is an array of 10 integers

    std::vector<int> v; //defined a empty integer vector whose size can be defined leter
    //we can make vector of datatypes and also containers and pair.Like-
    // vector<pair<int, int> > v; it is a vector of pair

    std::cout << "Taking input of vecctor v: " << std::endl;
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    std::cout << "Enter values: ";
    for(int i =0; i < size; i++){
        int x;
        std::cin >> x;
        v.push_back(x); // This line push all elements one step back and at last position add the current element
        //time complexity of push_back function is saze as array intput  
    }

    std::cout << "----------Accessing vecctors---------" << std::endl;
    printVector(v);

    std::vector<int> v2(10); //defines vector v2 of 10 size and all elements are 0
    v2.push_back(7); // added a new element 7 as 11th element that means the size of a vector can be changed
    // Accessing v2;
    printVector(v2);

    std::vector<int> v3(10, 3); //defines vector v3 of 10 size and all elements are 3
    v3.push_back(7); // added a new element 7 as 11th element
    // Accessing v3;
    printVector(v3);

    v3.pop_back();// this function remove last element from a vector
    std::cout << "after using popback function : " << std::endl;
    printVector(v3);

    // We can make a copy of a vector 
    std::vector<int> v4 = v3; //v4 is copy of v3. In case of array we can copy pointer of an arry and the changes reflects on the real array
                              //but in this case v4 is a copy of v3 so changes in v4 will not reflects on v3
    


    return 0;
}

void printVector(std::vector<int> &V){

    int size = V.size(); // V.size() counts the size of vector V
    std::cout << "Size of the vector: " << size << std::endl << "Elements of the vector: ";

    for(int i = 0; i < size; i++){
        std::cout << V[i] << ' ';
    }
    std::cout << std::endl;
}