#include <bits/stdc++.h>
using namespace std;
long long n,ans;
string s,c[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++){
        int a;
        char b;
        cin >> a >>b;
        for(int j=1;j<=a;j++){
            c[i]+=b;
        }
        s+=c[i];
    }
    int j=s.length()-1;
    for(int i=0;i<=j;i++){
        if(s[i]!=s[j]){
            ans++;
        }
        j--;
    }
    cout << ans;
    return 0;
}
