#include<bits/stdc++.h>
using namespace std;
string ax,ay,bx,by;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
    cin>>ax>>ay>>bx>>by;
    if(ax!=bx){
        cout<<"0000";
    }
    else{
        if(ay.substr(0,2)!=by.substr(0,2)){
            cout<<"1000";
        }
        else{
            if((ay[2]<='C'&&by[2]<='C')||(ay[2]>='D'&&by[2]>='D')){
                if(ay[2]>='D'||ay[2]=='B'||by[2]=='B'){
                    cout<<"1111";
                }
                else{
                	cout<<ay[2]<<" "<<by[2]; 
                    cout<<"1110";
                }
            }
            else{
                cout<<"1100";
            }
        }
    }
    return 0;
}
