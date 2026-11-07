#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    char a[2],b[4],c[4],d[4];

    cin>>a>>b>>c>>d;
    if(a[1]==c[1]&&a[0]==c[0]){
        cout<<"1";
    }
    else{
        cout<<"0000";
        return 0;
    }
    if((b[0]-'0')*10+(b[1]-'0')==(d[0]-'0')*10+(d[1]-'0')){
        cout<<"1";
        if(((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F'))){
        cout<<"1";
        }
        else{
            cout<<"00";
            return 0;
        }
    }
    else{
        cout<<"000";
        return 0;
    }

    if(b[2]-d[2]<=1){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}
