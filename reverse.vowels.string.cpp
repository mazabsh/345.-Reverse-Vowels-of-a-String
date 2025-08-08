#include<iostream> 
#include<vector>
#include<unordered_set> 

using namespace std; 

class Solution{
public: 
     string reverseVowels(string s) {
       unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'}; 
       int l=0; 
       int r= s.size()-1; 
       while(l<r){
         while(l<r && vowels.count(tolower(s[l]))==0) ++l; 
         while(l<r && vowels.count(tolower(s[r]))==0) --r; 
         if(l<r) {
           swap(s[l], s[r]); 
           ++l; 
           --r; 
         }
       }
       return s; 
     }
};
int main(){
  string s = "IceCreAm"; 
  Solution sol; 
  cout << sol.reverseVowels(s) <<endl; 
  return 0; 
}
