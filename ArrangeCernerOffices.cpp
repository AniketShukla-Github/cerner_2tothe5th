//cerner_2tothe5th_2022
//cerner_2^5_2022
#include <bits/stdc++.h>
using namespace std;
int main() {
    string nums[8] = {"IndiaCerner","USACerner","AusCerner","IndiaCerner","AusCerner","USACerner","IndiaCerner","AusCerner"};
    int start = 0;
    int end = 7;
    int mid = 0;
    while (mid<=end) {
        if (nums[mid] == "IndiaCerner") {
            swap(nums[start],nums[mid]);
            start++;
            mid++;
        }
        else if (nums[mid] == "USACerner") 
            mid++;
        else {
            swap(nums[mid],nums[end]);
            end--;
        }
    }
    cout<<"Arranged Cerner offices are: "<<endl;
    for (int i=0; i<8; i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}
