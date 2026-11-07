#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    char s1[5],s2[5];
    int a=0,b=0,c=0,d=0,c1,c2;
    cin>>c1>>s1>>c2>>s2;
    if(c1=c2){
        a++;
        if(s1[1]==s2[1]&&s1[2]==s2[2]){
            b++;
            if(s1[3]>'C'&&s2[3]<='C'){
                c++;
                if(s1[3]=='A'&&s2[3]=='B'){
                    d++;
                }
                else if(s1[3]=='B'&&s2[3]=='C'){
                    d++;
                }
                else if(s1[3]=='B'&&s2[3]=='A'){
                    d++;
                }
                else if(s1[3]=='C'&&s2[3]=='B'){
                    d++;
                }
                else{
                    d=0;
                }
            }
            else{
                c=0;
            }
        }
        else{
            b=0;
        }
    }
    else{
        a=0;
    }
    cout<<a<<b<<c<<d<<endl;;
    return 0;
}
