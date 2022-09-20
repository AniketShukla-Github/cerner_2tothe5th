//cerner_2tothe5th_2022
//cerner_2^5_2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // output will print CERNER. But just see the input characters (List). 
    // Using input chars, CERNER in UpperCase letters are printed. Here some new c++ features are used.
    
    std::vector<char> List = {'c','d','p','k','a','m'};
    int factor = 32;
    for_each(begin(List),end(List),[&factor](char &val) {
        val = val-factor--;
    });

    for(char val:List) {
        std::cout<<val;
    }
    return 0;
}
