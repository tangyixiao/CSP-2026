#include<bits/stdc++.h>
using namespace std;
string a1,b1,a2,b2,ans;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a1>>b1>>a2>>b2;
    bool n=1;
    for(int i=0;i<2;i++){
        if(a1[i]!=a2[i]){
            n=0;
        }
    }
    if(n){
        n=1;
        for(int i=0;i<2;i++){
            if(b1[i]!=b2[i]){
                n=0;
            }
        }
        if(n){
            if(b1[2]=='A'){
                if(b2[2]=='B'){
                        cout<<"1111";
                }else if(b2[2]=='C'){
                    cout<<"1110";
                }else{
                    cout<<"1100";
                }
            }else if(b1[2]=='B'){
                if(b2[2]=='A'||b2[2]=='C'){
                        cout<<"1111";
                }else{
                    cout<<"1100";
                }
            }else if(b1[2]=='C'){
                if(b2[2]=='B'){
                        cout<<"1111";
                }else if(b2[2]=='A'){
                    cout<<"1110";
                }else{
                    cout<<"1100";
                }
            }else if(b1[2]=='D'){
                if(b2[2]=='E'){
                        cout<<"1111";
                }else{
                    cout<<"1100";
                }
            }else if(b1[2]=='E'){
                if(b2[2]=='D'){
                        cout<<"1111";
                }else{
                    cout<<"1100";
                }
            }
        }else{
            cout<<"1000";
        }
    }else{
        cout<<"0000";
    }
    return 0;
}
