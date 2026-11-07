#include <bits/stdc++.h>
using namespace std;
int n,o,cnt;
string a,x;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> o >> a;
        x+=o * a;
        a = "";
        o = 0;
    }
    for (int j ==n;j<=n;j++){
        if(a[j] == a[-j]){
            cnt++;
    if(cnt == n){
        cout<<"0";
    }else{
        cout << (n-cnt)/2
    }

    return 0;
}
