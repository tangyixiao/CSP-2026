#include<bits/stdc++.h>
using namespace std;
int n,cnt;
string s,s1;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i = 0;i < n;i++){
        long long x;
        char c;
        cin >> x >> c;
        for(int i = 0;i < x;i++){
            s += c;
        }
    }
    int l = 0,r = s.size() - 1;
    while(l <= r){
        if(s[l++] != s[r--]){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
