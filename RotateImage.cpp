//cerner_2tothe5th_2022
//cerner_2^5_2022
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<3;i++){
            for(int j=i;j<3;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<3;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
int main()
{
    vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
    int degree;
    cout<< "Enter the degree by which you want to rotate the image(in multiple of 90): ";
    cin>>degree;
    int count = degree/90;
    for (int i=0; i<count; i++)
        rotate(matrix);
    cout<<"\nHere is your rotated image:\n\n";
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
