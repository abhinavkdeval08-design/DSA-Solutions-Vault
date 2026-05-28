#include<bits/stdc++.h>
using namespace std;
int main(){    
  string s;    
  cin >> s;    
  string s1 = "";        
  for(int i=0; i < s.length(); i++){        
    s1.push_back(s[i]);    
  }    
  s1[0]=toupper(s[0]);    
  cout << s1 << endl;    
  return 0; }
