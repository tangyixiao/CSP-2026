#include<bits/stdc++.h>
using namespace std;
string c1,s1;
string c2,s2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1!=c2){
        cout<<"0000\n";
        return 0;
    }
    char D1=s1[2];
    char D2=s2[2];
    if(s1[0]!=s2[0]||s1[1]!=s2[1]){
        cout<<"1000\n";
        return 0;
    }
    if((D1<='C'&&D2>'C')||(D1>'C'&&D2<='C')){
        cout<<"1100\n";
        return 0;
    }
    if((D1=='A'&&D2=='C')||(D1=='C'&&D2=='A')){
        cout<<"1110\n";
        return 0;
    }
    cout<<"1111\n";
    return 0;
}