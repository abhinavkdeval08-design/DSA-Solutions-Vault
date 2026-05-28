#include<bits/stdc++.h>
using namespace std;
int main(){    
  string s;    
  int j;    
  int count = 0;    
  cin >> j >>  s;    
  for(int i=0;i<j; i++){    
      if(s[i] == s[i+1]){   
          count++;    }   
  }   
    cout << count;    
    return 0;
}
