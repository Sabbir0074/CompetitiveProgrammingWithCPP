#include <bits/stdc++.h>

int main(){

    std::pair<int, std::string> p; //We can make pair of 2 containers or data type
    p =  std::make_pair(2, "Sabbir"); //we can also initialize by "p = {2, Sabbir}"
    std::cout << "p.first = " << p.first << std::endl << "p.second = " << p.second  << std::endl << std::endl; //.first access first element and .second access second element

    //we can assign previous pair in a new pair
    std::pair<int, std::string> p1 = p;
    std::cout << "p1.first = " << p1.first << std::endl << "p1.second = " << p1.second << std::endl << std::endl; 

    std::cout << "After changing the value of p1.first" << std::endl;
    //when we assign a pair to another pair it works like function call by value
    p1.first = 3;
    std::cout << "p.first = " << p.first << std::endl << "p1.first = " << p1.first  << std::endl << std::endl;
    
    // we can also assign it like call by referance 
    std::pair <int, std::string> &p2 = p;
    std::cout << "p2.first = " << p2.first << std::endl << "p2.second = " << p2.second << std::endl; 
    std::cout << "p.first = " << p.first << std::endl << "p.second = " << p.second << std::endl; 

    std::cout << std::endl << "After changing the value of p2.first." << std::endl;
    p2.first = 6;
    std::cout << "p2.first = " << p2.first << std::endl << "p2.second = " << p2.second << std::endl; 
    std::cout << "p.first = " << p.first << std::endl << "p.second = " << p.second << std::endl; 

    //mainly pairs are used to maintain relation between 2 elements.

    std::pair<int, int> p_array[3]; //declared a array of pair of size 3
    p_array[0] = {1,2};
    p_array[1] = {3,4};
    p_array[2] = {5,6};

    for(int i = 0; i < 3; i++){
        std::cout << "p_array[" << i << "].firsst = " << p_array[i].first << " and p_array[" << i << "].second = " << p_array[i].second << std::endl; 
    }

    swap(p_array[0], p_array[2]);
    std::cout << std::endl << "After swappin arry[0] with array[2]" <<std::endl;
    for(int i = 0; i < 3; i++){
        std::cout << "p_array[" << i << "].firsst = " << p_array[i].first << " and p_array[" << i << "].second = " << p_array[i].second << std::endl; 
    }

    return 0;
}