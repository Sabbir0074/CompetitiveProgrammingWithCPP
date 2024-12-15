#include <bits/stdc++.h>

int main(){

    // Iterator used to non indax based container like - map, set etc
    // Iterator is is a pointer like structure

    //iterators = datatype + :: + iterator + variable name for the iterator

    // (iterator).begin points first element of a container
    // (iterator).end points blank element after last element of a container

    std::vector <int> v = {2, 3, 4, 5, 6, 7};
    std::vector <int> :: iterator it = v.begin(); // declared an iterator

    std::cout << *it << std::endl; //prints the first element of the vector

    //printing the elements of the vector using iterator it
    std::cout << "Elements of the vector: ";
    for(it = v.begin(); it != v.end(); it++){
        std::cout << (*it) << ' ';
    }
    std::cout << std::endl;


    // vector of pair
    std::vector <std::pair <int, int>> vp = {{1, 2}, {2, 3}, {3, 4}};

    std::vector <std::pair <int, int>> :: iterator it2;

    //printing the elements of the vector of pair using iterator it
    std::cout << "Elements of the vector of pair: { ";
    for(it2 = vp.begin(); it2 != vp.end(); it2++){
        std::cout << "{" << (*it2).first << ", " << (*it2).second << "} ";
    }
    std::cout << '}' << std::endl;

    //printing the elements of the vector of pair using iterator it
    std::cout << "Elements of the vector of pair: { ";
    for(it2 = vp.begin(); it2 != vp.end(); it2++){
        std::cout << "{" << (it2)->first << ", " << (it2)->second << "} ";
    }
    std::cout << '}' << std::endl;

    // *it.first = it->first


    return 0;
}