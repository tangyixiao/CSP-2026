#include <bits/stdc++.h>
using namespace std;
string s;
string c;
string h;
int t=1;
int y=t;
int l=1;
const int N=2*10e6+5;
int a[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        cin >>c[i];

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a[i];j++)
            s+=c[i];
    }
    for(int i=s.size();i>=1;i--){
        h[l]=s[i];
        l++;
        if(h[l]==s[l]) t=1;
        else {t=0;
        y=0;}
    }
    int o=s.size();
    int ans=0;
    if(o%2==1) o++;
    if(y==0) {
        for(int i=1;i<=o/2;i++){
            if(h[i]!=s[i]){
                ans++;
            }
        }
    }
    if(y){ cout << 0;
    return 0;}
    cout << ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
