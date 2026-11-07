#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int a,b=0,c=0;
    char r;
    string s;
    cin>>a;
    for(int i;a>0;a--){
        cin>>i>>r;
        for(int j=0;j<i;j++)
            s[b+j]=r;
        b+=i;
    }for(int i=0;i*2<b;i++)
        if(s[i]-s[b-i-1])
            c++;
    cout<<c;
    return 0;
}
