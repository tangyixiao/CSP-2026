#include<iostream>
using namespace std;
string a,n,b,c;
int main(){
    freopen ("travel.in","r",stdin);
    freopen ("travel.out","w",stdout);
    cin>>a>>n>>b>>c;
    if(a[0]==b[0]&&a[1]==b[1]){
        cout<<1;
    }
    else{
        cout<<0<<0<<0<<0;
        return 0;
    }
    if(n[0]==c[0]&&n[1]==c[1]){
        cout<<1;
    }
    else{
        cout<<0<<0<<0;
        return 0;
    }
    if((n[2]=='A'&&c[2]=='B')||(n[2]=='A'&&c[2]=='C')||(n[2]=='B'&&c[2]=='A')||(n[2]=='B'&&c[2]=='C')||(n[2]=='C'&&c[2]=='A')||(n[2]=='C'&&c[2]=='B')||(n[2]=='F'&&c[2]=='D')||(n[2]=='D'&&c[2]=='F')){
        cout<<1;
    }
    else{
        cout<<0<<0;
        return 0;
    }
    if((n[2]=='A'&&c[2]=='B')||(n[2]=='C'&&c[2]=='B')||(n[2]=='B'&&c[2]=='A')||(n[2]=='B'&&c[2]=='C')||(n[2]=='F'&&c[2]=='D')||(n[2]=='D'&&c[2]=='F')){
        cout<<1;
    }
    else{
        cout<<0;
    }
}
