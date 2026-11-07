#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

bool f(char a,char b){
    char c=min(a,b),d=max(a,b);
    if((c=='A'&&d=='B')||(c=='B'&&d=='C')||(c=='D'&&d=='F'))
        return 1;
    return 0;
}

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2)
        cout<<"1";
    else{
        cout<<"0000";
        return 0;
    }
    if(s1.substr(0,2)==s2.substr(0,2))
        cout<<"1";
    else{
        cout<<"000";
        return 0;
    }
    if(((s1[2]>='A'&&s1[2]<='C') && (s2[2]>='A'&&s2[2]<='C')) ||
       ((s1[2]>='D'&&s1[2]<='F') && (s2[2]>='D'&&s2[2]<='F')))
        cout<<"1";
    else{
        cout<<"00";
        return 0;
    }
    if(f(s1[2],s2[2]))
        cout<<"1";
    else
        cout<<"0";

    return 0;
}
