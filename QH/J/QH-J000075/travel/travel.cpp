#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    bool x1=false,x2=false,x3=false;
    string s1,s2,c1,c2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        x1=true;
        cout<<1;
    }else{
        cout<<0;
    }
    if(x1&&s1[0]==s2[0]&&s1[1]==s2[1]){
        x2=true;
        cout<<1;
    }else{
        cout<<0;
    }
    if(x2&&((s1[2]>='A'&&s1[2]<='C'&&s2[2]<='C'&&s2[2]>='A')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'&&s1[2]!='E'&&s2[2]!='E'))){
        x3=true;
        cout<<1;
    }else{
        cout<<0;
    }
    bool x=s2[2]==char(int(s1[2])+1);
    bool y=s2[2]==char(int(s1[2])-1);
    bool z=(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D');
    if(x3&&(x||y||z)){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}
