//cerner_2tothe5th_2022
//cerner_2^5_2022

/*
    Problem Statement: We have been given an integer n which shows that there are n stairs. 
    A person can take 1 or 2 stairs only at a time to reach at nth stair from ground.
    We need to find out the number of such ways.
*/
#include <iostream>
using namespace std;

int findSteps(int n) {
    if (n==0 || n==1) 
        return 1;
    return findSteps(n-1) + findSteps (n-2);
}
int main()
{
    cout<<"Enter the number of stairs\n";
    int n;
    cin>>n;
    cout<<"Number of way/ways to reach at nth stair is/are: "<<findSteps(n);
    
    return 0;
}
