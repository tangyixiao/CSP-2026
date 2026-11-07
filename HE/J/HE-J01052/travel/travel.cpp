#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1!=c2){
        cout<<"0000";
        return 0;
    }
    else{
        cout<<1;
    }
    int tep1 = 0,tep2=0;
    tep1 = (s1[0] - '0') *10 + s1[1]- '0';
    tep2 = (s2[0] - '0')* 10 + s2[1]- '0';
    if(tep1!=tep2){
        cout<<0;
    }
    else{
        cout<<1;
    }
    if('A'<=s1[2]||s1[2]>='C' && 'A'<=s2[2]||s2[2]>='C'){
        cout<<1;
    }
    else if('E'==s1[2]&&s2[2]=='D'||'D'==s1[2]&&s2[2]=='E'){
        cout<<11;
        return 0;
    }
    for(int i = 1;i<=4;i++){
        if(s1[2] + i == s2[2]) {
           if(s1[2] + 1 == 'D' && i==1 )
            {
            cout<< 0;
            return 0;
           }
           else
           {
            cout<<1;
            return 0;
           }
           }
        else if(s2[2] + i == s2[2]){
            if(s2[2] + 1 == 'D' && i != 1){
            cout<< 0;
            return 0;
           }
           else
            {
                      cout<<1;
                      return 0;
            }
           }
        else
        {
            cout<<0;
            return 0;
        }


    }



}
