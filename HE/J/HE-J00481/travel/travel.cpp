#include<bits/stdc++.h>
using namespace std;
string myc1,mys1,myc2,mys2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>myc1>>mys1>>myc2>>mys2;
    if(myc1==myc2){
        cout<<'1';
        if(mys1[0]==mys2[0]&&mys1[1]==mys2[1]){
            cout<<'1';
            if(mys1[2]<='C'&&mys2[2]<='C'||mys1[2]>'C'&&mys2[2]>'C'){
                cout<<'1';
                if(mys1[2]=='A'&&mys2[2]=='B'||mys1[2]=='B'&&mys2[2]=='A'){
                    cout<<'1';
                }else if(mys1[2]=='B'&&mys2[2]=='C'||mys1[2]=='C'&&mys2[2]=='B'){
                    cout<<'1';
                }else if(mys1[2]=='D'&&mys2[2]=='F'||mys1[2]=='F'&&mys2[2]=='D'){
                    cout<<'1';
                }else{
                    cout<<'0';
                }
            }else{
                cout<<"00";
            }
        }else{
            cout<<"000";
        }
    }else{
        cout<<"0000";
    }
}
