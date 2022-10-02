//cerner_2tothe5th_2022
//cerner_2^5_2022
#include <bits/stdc++.h>
using namespace std;
void solve(string s, int index) {
    if (index>=s.length()) {
        for (int i=0; i<s.length(); i++)
            cout<<s[i]<<" ";
        cout<<endl;
        return;
    }
    for (int i=index; i<s.length(); i++) {
        swap(s[i],s[index]);
        solve(s,index+1);
        swap(s[i],s[index]);
    }
}
int main()
{
    string s = "cerner";
    cout<<"Permuations of cerner are:\n";
    solve(s,0);
    return 0;
}
