#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char a[5]={'1','1','1','1'};
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if((c1[1]=='0'&&c1[2]=='1')||(c1[1]=='1'&&c1[2]=='6')){
        a[1]='0';
    }
    for(int i=1;i<=2;i++){
        if(s1[i]!=s2[i]){
            a[2]='0';
            a[4]='0';
        }

    }
    if((s1[3]=='F'&&s2[3]!='D')||(s1[3]=='C'&&s2[3]!='B')||(s1[3]=='B'&&s2[3]!='A')||(s2[3]=='F'&&s1[3]!='D')||(s2[3]=='C'&&s1[3]!='B')||(s2[3]=='B'&&s1[3]!='A')){
            a[2]='0';
            a[4]='0';

    }
    if((c2[1]=='0'&&c2[2]=='1')||(c2[1]=='1'&&c2[2]=='6')){
        a[3]='0';
    }
    for(int i=0;i<4;i++){
        cout<<a[i];
    }
    return 0;
}

