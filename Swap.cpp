//cerner_2tothe5th_2022
//cerner_2^5_2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Insert value of a: ";
    cin>>a;
    cout<<"Insert value of b: ";
    cin>>b;
    
    // Logic to swap values of a and b. yes, but think how does it work????
    a^=b^=a^=b;
    
    cout<<"\n\nMagic happened!!! \n\n";
    cout<<"value of a became: "<<a<<"\nvalue of b became: "<<b<<endl;
    return 0;
}
