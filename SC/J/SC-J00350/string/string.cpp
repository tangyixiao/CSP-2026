#include<bits/stdc++.h>
using namespace std;
string s;
int n, a, cnt;
char c;
int main(){
//    freopen("string.in","r", stdin);
//    freopen("string.out", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        cin >> c;
        for(int j=1; j<=a; j++)
            s[j]+=c;
    }
    int l=1, r=s.size()-1;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }else cnt++;
    }
    cout << cnt;
    return 0;
}
