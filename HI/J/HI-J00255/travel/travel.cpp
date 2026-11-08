#include <bits/stdc++.h>
using namespace std;
int n[5] = {2,2,2,2,2};
string a,b,c,d;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a>>b>>c>>d;
    if(a==c){
        n[1]=1;
    }else{
        n[1]=3;
    }
    if(b[0]==d[0]&&b[1]==d[1]){
        n[2]=1;
    }else{
        n[2]=3;
    }
    if(b[2]=='A'){
        if(d[2]=='B'||d[2]=='C'){
            n[3]=1;
        }
    }
    if(b[2]=='B'){
        if(d[2]=='A'||d[2]=='C'){
            n[3]=1;
        }
    }
    if(b[2]=='C'){
        if(d[2]=='A'||d[2]=='B'){
            n[3]=1;
        }
    }
    if(b[2]=='D'&&d[2]=='F'){
        n[3]=1;
    }
    if(b[2]=='F'&&d[2]=='D'){
        n[3]=1;
    }else{
        n[3]=3;
    }
    if(b[2]=='A'||b[2]=='C'){
        if(d[2]=='B'){
            n[4]=1;
        }
    }
    if(b[2]=='B'){
        if(d[2]=='A'||d[2]=='C'){
            n[4]=1;
        }
    }
    if(b[2]=='D'&&d[2]=='F'){
        n[4]=1;
    }
    if(b[2]=='F'&&d[2]=='D'){
        n[4]=1;
    }else{
        n[4]=3;
    }
    for(int i = 1;i<=4;i++){
        if(n[i]==3){
            cout << 0;
        }
        if(n[i]==1){
            cout << 1;
        }
    }
}
