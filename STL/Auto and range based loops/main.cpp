#include <bits/stdc++.h>

int main(){

    // loops using iterators used to be so lenthy to write .. so we used range based loops
    // syntax for range based loops 

    /*
    for(int value(variable) : v(name of container like- array, string etc)){
         operation1;
             .
             .
             .
             .
    }
    */
    
    std::vector <int> v = {1, 2, 3, 4 ,5};

    std::cout << "Elements of v: ";
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << ' ';
    } 
    std::cout << "(used normal loops)" << std::endl;

    std::vector <int> :: iterator it; // declared a iterator for accessing the same vector

    std::cout << "Elements of v: ";
    for(it = v.begin(); it != v.end(); it++){
        std::cout << (*it) << ' ';
    }
    std::cout << "(used stl iterator)" << std::endl;

    std::cout << "Elements of v: ";
    for(int value : v){
        std::cout << value << ' ';
    }  // It works like other 2 but we have to write less compaire to others in this one
       // But it makes copy of container,, If we want change in the real container we should use reference 
    std::cout << "(used range based loop)" << std::endl;

    std::cout << "Elements of v: ";
    for(int &value : v){
        std::cout << value << ' ';
    }   // It will not make a copy it will iterate in the real container
    std::cout << "(used reference in range based loop)" << std::endl;


    // auto keyword - auto is used to initialize any variable...
    // it determines the detatype a variable autometically

    auto a = 1; // here a is recognized by a integer variabel autometically
    auto b = 2.0; // here b is recognized by a double  variable autometicall

    std::cout << "size of (a)int : " << sizeof(a) << "\nsize of (b)double : " << sizeof(b) << std::endl; 
    // size of int = 4 and size of double = 8
    std::cout << "a = " << a << "\nb = " << b << std::endl;

    // we can use auto keyword in case of range based loops to replace large names of data types
    // we can also use it to avoid the declaration of iteratots
    std::vector <int> v2 = {1, 2, 3, 4, 5};

    // using c++ stl(iterators)

    std::cout << "Elements of v2: ";
    // std::vector <int> :: iterator it; (we can skip this line by using auto it in loops)
    for(auto it =v2.begin(); it != v2.end(); it++){
        std::cout << (*it) << ' ';
    }
    std::cout << "(used auto to skip diclaration of iterator)" << std::endl;

    std::cout << "Elements of v: ";
    for(auto value : v){
        std::cout << value << ' ';
    }  // we used auto keyword in range based loops 
    std::cout << "(used auto keyword in range based loop)" << std::endl;

    return 0;
}