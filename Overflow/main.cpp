#include <bits/stdc++.h>

int main(){

    //-10^9 < int <10^9
    //-10^12 < long int < 10^12
    //-10^18 < long long int < 10^18

    int max = INT_MAX;
    std::cout << max + 1 << std::endl; //after max range it cout from begininge

    int a = 100000;
    int b = 100000;
    long int c = a * 1LL * b; // 1LL = here 1 is integer value and LL tells that the integer is long long int

    double d = 100000;
    double e = 100000;
    double f = d * e;

    std::cout << f <<std::endl; //show large values in scientific notation
    std::cout << std::fixed << f <<std::endl; //for std::fixed it shows values in normal decimal style

    f = 1e24/*means 10^24*/;
    std::cout << std::fixed << f << std::endl; //double and float shows inacurate values some times. So, we shouldn't use these if isn't needed. It's range is huge but shows inaccurate values 

    return 0;
}