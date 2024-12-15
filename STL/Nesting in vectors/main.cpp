#include <bits/stdc++.h>

void arrOfVector();
void vectorOfPair();
void vectorOfVector();

int main(){

    int choice;
    std::cout << "1 = Vecctor of pair \n2 = array of vector \n3 = Vector of vectors\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if(choice == 1){
        vectorOfPair();
    }else if(choice == 2){
        arrOfVector();
    }else if(choice == 3){
        vectorOfVector();
    }

    return 0;
}

void vectorOfPair(){
    // Vector of pair
    // std::vector <std::pair <int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    std::vector <std::pair <int, int>> v;
    std::cout << "Enter the size of vector: ";
    int size;
    std::cin >> size;
    
    std::cout << "Taking input for vector of pair: " << std::endl;
    for(int i = 0; i < size; i++){
        int x, y;
        std::cin >> x >> y;
        v.push_back({x,y});
    }

    std::cout << "Printing vector of pair: " << std::endl;
    for(int i = 0; i < v.size(); i++){
        std::cout << "v[" << i << "].first: " << v[i].first << ", " << "v[" << i << "].second: " << v[i].second << std::endl;
    }
}

void arrOfVector(){

    //std::vector<int> v[10]; // declared and initialized a array of vector
    int N; //Number of vecctors
    std::cout << "Enter the munber of vectors: ";
    std::cin >> N;
    std::vector<int> v[N];

    for(int i = 0; i < N; i++){
        int n;
        std::cout << "Enter the size of vector: ";
        std::cin >> n;
        std::cout << "Taking the value of vector: \n";
        for(int j = 0; j < n; j++){
            int x;
            std::cin >> x;
            v[i].push_back(x);
        }
    }

    for(int i = 0; i < N; i++){
        std::cout << "Elements of v[" << i << "]: ";
        for(int j = 0; j < v[i].size(); j++){
            std::cout << v[i][j] << ' ';
        }
        std::cout << std::endl;
    }

}

void vectorOfVector(){

    std::vector <std::vector <int>> v; //declared a vector of vector
    int N;
    std::cout << "Enter the size of main vector: ";
    std::cin >> N;

    for(int i = 0; i < N; i++){

        int n;
        std::cout << "Enter the size of " << i << "th subvector: ";
        std::cin >> n;
        std::vector <int> temp;
        std::cout << "Enter the elements: ";

        for(int j = 0; j < n; j++){
            int x;
            std::cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    std::cout << "Printing vector of vectors: \n";

    for(int i = 0; i < v.size(); i++){
        std::cout << "Elements of v[" << i << "]: ";
        for(int j = 0; j < v[i].size(); j++){
            std::cout << v[i][j] << ' ';
        }
        std::cout << std::endl;
    }

}