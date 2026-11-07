#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
string c[200005];
string S;
int f(long long ans){
    bool b = true;
    for (int i = 0; i < S.length() / 2; i++){
        if (S[i] != S[S.length() - 1 - i]){
            b = false;
            ans++;
        }
    }
    return ans;
}
int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i] >> c[i];
    }
    for (int i = 0;i < n; i++){
        for (int j = 0; j < a[i]; j++){
            S += c[i];
        }
    }
    long long ans = 0;
    cout << f(ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
