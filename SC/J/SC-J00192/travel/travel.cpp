#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    ll cx1,cx2,pai1,pai2;
    char wei1,wei2;
    cx1=(c1[0]-'0')*10+(c1[1]-'0');
    cx2=(c2[0]-'0')*10+(c2[1]-'0');
    pai1=(s1[0]-'0')*10+(s1[1]-'0');
    pai2=(s2[0]-'0')*10+(s2[1]-'0');
    wei1=s1[2],wei2=s2[2];
    if(cx1==cx2){
        cout<<'1';
        if(pai1==pai2){
            cout<<'1';
            if(((wei1=='A'||wei1=='B'||wei1=='C')&&(wei2=='A'||wei2=='B'||wei2=='C'))||((wei1=='D'||wei1=='F')&&(wei2=='D'||wei2=='F'))){
                cout<<'1';
                if(wei1>wei2)swap(wei1,wei2);
                if((wei1=='A'&&wei2=='B')||(wei1=='B'&&wei2=='C')||(wei1=='D'&&wei2=='F'))cout<<'1';
                else cout<<'0';
            }
            else cout<<"00";
        }
        else cout<<"000";
    }
    else cout<<"0000";

    return 0;
}