#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen ("string.in","r",stdin);
    freopen ("string.out","w",stdout);
    int n;
    cin>>n;
    int a1,a2;
    char b1,b2;
    cin>>a1>>b1>>a2>>b2;
    string a="";
    string duibi="";
    for (int i=1;i<=a1;i++){
        a+=b1;
    }
    for (int j=1;j<=a2;j++){
        a+=b2;
    }
    if(b1==b2){
        cout<<0;
    }
    if(n==1){
        cout<<0;
    }

    return 0;
}
