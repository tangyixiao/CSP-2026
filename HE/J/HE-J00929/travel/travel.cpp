#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("/home/noi/noip/HE-J00929/travel/travel.in","r",stdin);
    freopen("/home/noi/noip/HE-J00929/travel/travel.out","w",stdout);
    string c1,c2,s1,s2;
    cin>>c1>>c2>>s1>>s2;
    long long a=0,b=0,c=0,d=0;
    long long cline = (c2[0]-48)*10+c2[1];
    long long sline = (s2[0]-48)*10+s2[1];
    char cseat = c2[2];
    char sseat = s2[2];
    if(c1==s1)a = 1;
    else{
        cout<<0000;
        return 0;
    }
    if(cline==sline)b = 1;
    else{
        cout<<1000;
        return 0;
    }
    if((cseat=='A'&&sseat=='B')||(cseat=='B'&&sseat=='A')||(cseat=='C'&&sseat=='B')||(cseat=='B'&&sseat=='C')||(cseat=='E'&&sseat=='D')||(cseat=='E'&&sseat=='F')){
        cout<<1111;
        return 0;
    }
    else if((cseat=='A'&&sseat=='C')||(cseat=='C'&&sseat=='A')){
        cout<<1110;
        return 0;
    }
    else{
        cout<<1100;
        return 0;
    }
    return 0;
}
