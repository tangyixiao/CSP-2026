#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int main() {
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n;
    cin >> n;
    string s,z;
    for(int i=1; i<=n; i++) {
        long long a;
        char c;
        cin >> a >> c;
        for(long long j=1; j<=a; j++)
            s += c;
    }
    for(long long i=s.length()-1; i>=0; i--) {
        z += s[i];
    }
    if(s==z) {
        cout << 0;
        return 0;
    } else {
        for(long long i=0; i<=s.length(); i++) {
            if(s[i]!=z[i]) {
                ans++;
            }
        }
    }
    cout << ans/2;
    return 0;
}