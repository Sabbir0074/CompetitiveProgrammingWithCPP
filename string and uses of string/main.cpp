#include <iostream>
#include <cstring>

void checkPalindrom(){

    std::string str;
    std::cin >> str;
    int n = str.size();
    int check = 0;

    for(int i = 0; i < n/2; i++){
        if(str[i] == str[n - i - 1]){
            check = 1;
        }else{
            check = 0;
            break;
        }
    }

    if(check = 0){
        std::cout << "It's not palindrom" << std::endl;
    }else{
        std::cout << "It's palindrom" << std::endl;
    }
}

void leargeNumder(){

    std::string str;
    std::cin >> str;

    int lastDigit = str[str.size() - 1] - '0';
    std::cout << lastDigit;
}

int main(){

    {
        std::string str = "Hello";;
        std::string str2;
        std::cin >> str2; // in case of string input we can't put space or enter using cin

        std::cout << str << ' ' << str2 << std::endl;
        std::cout << str2.size() << std::endl; // str2.size equetes the size of the string str2
    
        std::string str3;
        std::cin.ignore(); // some times due to some reason getline won't work , in that case for killing the reason we can use this line 
    
        getline(std::cin, str3); //can take string input with spaces
        std::cout << str3 << std::endl;
    }

    {
        // revare a string 
        std::string str;
        getline(std::cin, str);

        std::string strRev;

        for(int i = str.size() -1; i >= 0; --i){

            // strRev = strRev + str[i]; {we should not use it}
            strRev.push_back(str[i]);
        }

        std::cout << strRev <<std::endl;

        if(strRev == str){
            std::cout << "It's palindrom" << std::endl;
        }else{
            std::cout << "It's not palintrom" << std::endl;
        }
    }

    checkPalindrom();
    leargeNumder();

    return 0;
}