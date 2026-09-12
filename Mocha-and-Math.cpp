#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int s[n];
        
        for (int i=0;i<n;i++) {
            cin >> s[i];
        }
        int x=s[0];
        for (int i=1;i<n;i++) {
            x=x&s[i];
        }    
           
        cout << x << endl;
    }
    return 0;
}
