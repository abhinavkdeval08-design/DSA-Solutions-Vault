#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w; (//I didn't use long long due to space complexity)
    cin >> k >> n >> w; (//Taking input 'k,n&w)
    int x = (k*w*(w+1))/2;
    int cost = x-n; (//As cost is x-n)
    if(x>n){
    cout << cost << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
