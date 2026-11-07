#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        cout<<"1";
    }else{
        cout<<"0000";
        return 0;
    }
    bool a=true;
    for(long long i=0;i<s1.size()-1;i++){
        if(s1[i]!=s2[i]){
            a=false;
            break;
        }
    }
    long long num=s1.size();
    if(a==false){
        cout<<"00";
    }else{
        cout<<"1";
        if(((char)s1[num-1]>='A'&&(char)s1[num-1]<='C')&&((char)s2[num-1]>='A'&&(char)s2[num-1]<='C')){
            cout<<"1";
        }else{
            if(((char)s1[num-1]>='D'&&(char)s1[num-1]<='F')&&((char)s2[num-1]>='D'&&(char)s1[num-1]<='F')){
                cout<<"1";
            }else{
                cout<<"0";
            }
    }

    }
    if(((char)s1[num-1]=='A'&&(char)s2[num-1]=='B')||((char)s1[num-1]=='B'&&(char)s2[num-1]=='C')){
        cout<<"1";
    }else{
        if(((char)s1[num-1]=='D'&&(char)s2[num-1]=='F')||((char)s1[num-1]=='F'&&(char)s2[num-1]=='D')){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
    return 0;
}
