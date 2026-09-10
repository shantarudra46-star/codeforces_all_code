#include<bits/stdc++.h>
using namespace std;
int main () {

    int t;
    cin >> t;
    while(t--) {
        int n,f=1;
        cin >> n;
        int s[n];
        for (int i=0;i<n;i++) {
            cin >> s[i];
        }
        for (int i=0;i<n-1;i++) {

            if(i>=1 && (s[i]>s[i-1]) && (s[i]>s[i+1])) {

                cout << "YES" << endl <<  i-1 << " " << i << " " << i+1 << endl;
                f=0;
            }
        }
        if(f==1) {
            
                cout << "NO" << endl;
            
        }
    }
    return 0;
}
