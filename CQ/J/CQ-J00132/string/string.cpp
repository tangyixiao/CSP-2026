#include<bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];
int ans;
string c;
int n;
int main(){
    int l, r, hm;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=a[i];j++){
             c += b[i];
        }
    }
    hm = c.length() / 2;
    for(int i = 0;i<=hm;i++){
        l = i;
        r = n - 1 - i;
        if(c[r] != c[l]) ans++;
    }
    cout <<  ans;
    return 0;

}