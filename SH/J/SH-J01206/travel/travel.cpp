#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
int a1,a2;
char b1,b2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        cout<<1;
    }else{
        cout<<"0000";
        return 0;
    }
    a1=(s1[0]-'0')*10+(s1[1]-'0');
    b1=s1[2];
    a2=(s2[0]-'0')*10+(s2[1]-'0');
    b2=s2[2];
    if(a1==a2){
        cout<<1;
    }else{
        cout<<"000";
        return 0;
    }
    if(b1<='C' && b2<='C'){
        cout<<1;
    }else if(b1>='D' && b2>='D'){
        cout<<"11";
        return 0;
    }else{
        cout<<"00";
        return 0;
    }
    if(b1=='A'){
        if(b2=='B'){
            cout<<1;
        }else{
            cout<<0;
        }
    }else if(b1=='B'){
        if(b2=='A' || b2=='C'){
            cout<<1;
        }else{
            cout<<0;
        }
    }else if(b1=='C'){
        if(b2=='B'){
            cout<<1;
        }else{
            cout<<0;
        }
    }
    return 0;
}
