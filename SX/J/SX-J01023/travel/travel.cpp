#include<bits/stdc++.h>
using namespace std;

string a,b,c,d;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a>>b>>c>>d;
    if(a==c){
        if(b[1]==d[1]){
            if(((b[2]=='F'||b[2]=='D')&&(d[2]=='F'||d[2]=='D'))||((b[2]=='A'||b[2]=='C'||b[2]=='B')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))){
                if((b[2]=='F'&&d[2]=='D')||(b[2]=='D'&&d[2]=='F')||(b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='A')||(b[2]=='B'&&d[2]=='C')|(b[2]=='C'&&d[2]=='B')){
                    cout<<1<<1<<1<<1;
                }
                else{
                    cout<<1<<1<<1<<0;
                }
            }
            else{
                cout<<1<<1<<0<<0;
            }

        }
        else{
            cout<<1<<0<<0<<0;
        }

    }
    else{
        cout<<0<<0<<0<<0;
    }

    return 0;




}































