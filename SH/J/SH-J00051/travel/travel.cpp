#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string c1,s1,c2,s2;cin>>c1>>s1>>c2>>s2;
    bool a=false,b=false,c=false,d=false;
    char ch1,ch2;
    string str1,str2;
    ch1=s1[2];
    ch2=s2[2];
    if(c1==c2){
        a=true;
        if(s1[0]==s2[0]&&s1[1]==s2[1]){
            b=true;
            if(ch1>='A'&&ch1<='C'&&ch2>='A'&&ch2<='C'){
                c=true;
                if(ch1-ch2==1||ch2-ch1==1){
                    d=true;
                }
            }else if((ch1=='D'&&ch2=='F')||(ch2=='D'&&ch1=='F')){
                c=true;
                d=true;
            }
        }
    }
    cout<<a<<b<<c<<d;
    return 0;
}
