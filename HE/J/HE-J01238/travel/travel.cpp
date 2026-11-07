#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string chexiang1,chexiang2,zuoweihao1,zuoweihao2;
int main(){
    freopen("traval.in","r",stdin);
    freopen("traval.out","w",stdout);
    cin>>chexiang1>>zuoweihao1>>chexiang2>>zuoweihao2;
    if(chexiang1==chexiang2){
        cout<<'1';
    }
    else{
        cout<<"0000";
        return 0;
    }
    if(zuoweihao1.substr(0,2)==zuoweihao2.substr(0,2)){
            cout<<'1';
    }
    else{
        cout<<"000";
        return 0;
    }
    if((zuoweihao1[2]<='B'&&zuoweihao2[2]<='B')||(zuoweihao1[2]>='C'&&zuoweihao2[2]>='C')){
        cout<<'1';
    }
    else{
        cout<<"00";
        return 0;
    }
    if((zuoweihao1[2]=='A'&&zuoweihao2[2]=='B')||(zuoweihao1[2]=='B'&&zuoweihao2[2]=='A')){
        cout<<'1';
    }
    else if((zuoweihao1[2]=='C'&&zuoweihao2[2]=='D')||(zuoweihao1[2]=='D'&&zuoweihao2[2]=='C')){
        cout<<'1';
    }
    else if((zuoweihao1[2]=='D'&&zuoweihao2[2]=='E')||(zuoweihao1[2]=='E'&&zuoweihao2[2]=='D')){
        cout<<'1';
    }
    else{
        cout<<'0';
        return 0;
    }
    return 0;
}
