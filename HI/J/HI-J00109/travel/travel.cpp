#include<bits/bitsc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int c[1],s[1],c[2],s[2];
    cin>>c[1]>>s[1]>>c[2]>>s[2];
    if(c[1]==c[2]&&s[1]==s[2]-18){
        cout<<1111;
    }else if(c[1]==c[2]&&s[1]-36==s[2]){
    cout<<1110;
    }else if(c[1]==c[2]&&s[1]==s[2]-18){
    cout<<1100;
    }else if(c[1]==c[2]&&s[1]!=s[2]){
    cout<<1000;
    }else {
    cout<<0000;
    }
return 0;
}
