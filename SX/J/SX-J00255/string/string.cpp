#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++){
        int a;
        char b;
        cin>>a>>b;
        for(int j=1;j<=a;j++) {
            s+=b;
        }
    }
    string s1=s;
    reverse(s.begin(),s.end());
    if(s==s1){
        cout<<0;
        return 0;
    }
    long long cnt=0;
 reverse(s.begin(),s.end());
 for(int i=0;i<=s.size()-1;i++){
    v.push_back(s[i]-'0');
 }
 for(int i=0,j=v.size()-1;i<=j;i++,j--){
    if(v[i]!=v[j]){
        cnt++;
    }
 }
 cout<<cnt;
    return 0;
}
