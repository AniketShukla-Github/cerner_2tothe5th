//cerner_2tothe5th_2022
//cerner_2^5_2022
#include<bits/stdc++.h>
using namespace std;
void solve(string digits, string phoneBook[], int index, string curr, vector<string>& ans) {
        if (index >= digits.length()) {
            ans.push_back(curr);
            return;
        }
        int number = digits[index]-'0';
        string numStr = phoneBook[number];
        for (int i=0; i<numStr.length(); i++) {
            curr.push_back(numStr[i]);
            solve(digits,phoneBook,index+1,curr,ans);
            curr.pop_back();
        }
    }
vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) return ans;
        string phoneBook[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits,phoneBook,0,"",ans);
        return ans;
    }
int main() {
  string digits;
  cout<<"Enter the number:\n";
  cin>>digits;
  cout<<"These are the combinations:\n";
  vector<string> ans = letterCombinations(digits);
  for (int i=0; i<ans.size(); i++) { cout<<ans[i]<<" ";}
  return 0;
}
