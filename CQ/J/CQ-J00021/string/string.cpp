#include <bits/stdc++.h>
using namespace std;
long long a;
int n=0,cnt=0;
string s="", c="";
string fanzhuan(string s1){
    string s2="";
    for(int i=s1.size()-1;i>s1.size()/2;i--){
        s2+=s1[i];
    }
    return s2;
}

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a >> c;
        for(int j=1;j<=a;j++){
            s+=c;
        }
    }
    if(n==1){
        cout<<"0";
        return 0;
    }
    string s3=fanzhuan(s);
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s3[i])cnt++;
    }
    cout<<cnt;
    return 0;
}
