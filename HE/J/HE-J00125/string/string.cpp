#include<bits/stdc++.h>
using namespace std;
string s;
string a,m;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,b=0;
    int cnt=0;
    cin>>n;
    for(int i=1;i<=n*2;i++){
        cin>>s;
    }
    for(int i=1;i<=s.size();i++){
        if(s[i]>='1'&&s[i]<='9'){
            if(s[i]=='1'){
                b=1;
            }
            if(s[i]=='2'){
                b=2;
            }
            if(s[i]=='3'){
                b=3;
            }
            if(s[i]=='4'){
                b=4;
            }
            if(s[i]=='5'){
                b=5;
            }
            if(s[i]=='6'){
                b=6;
            }
            if(s[i]=='7'){
                b=7;
            }
            if(s[i]=='8'){
                b=8;
            }
            if(s[i]=='9'){
                b=9;
            }
            for(int j=a.size();j<=b;j++){
                a+=s[i];
            }
        }
    }
    for(int i=1;i<=a.size();i--){
        for(int j=a.size();i<=1;i--){
            m[i]=a[j];
            if(m[i]!=a[j]){
                cnt++;
            }
            continue;
        }
    }
    if(cnt%2==1){
        cout<<cnt/2+1;
    }else{
        cout<<cnt/2;
    }
    return 0;
}


