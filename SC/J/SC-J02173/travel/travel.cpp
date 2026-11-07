#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1!=c2)puts("0000");
    else{
        if(s1.substr(0,2)!=s2.substr(0,2))puts("1000");
        else{
            if(!(((s1[2]<='C')&&(s2[2]<='C'))||((s1[2]>'C')&&s2[2]>'C')))puts("1100");
            else{
                if(abs(s1[2]-s2[2])!=1)puts("1110");
                else puts("1111");
            }
        }
    }
    return 0;
}