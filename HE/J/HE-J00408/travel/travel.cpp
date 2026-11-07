#include<iostream>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    char c1[4],s1[4],c2[4],s2[4];
    int c_1,s_1,c_2,s_2;
    cin>>c1>>s1>>c2>>s2;
    c_1=2*(c1[0]-'0')+(c1[1]-'0');
    c_2=2*(c2[0]-'0')+(c2[1]-'0');
    if(c_1==c_2){
        cout<<'1';
    }else{
        cout<<"0000";
        return 0;
    }
    s_1=2*(s1[0]-'0')+(s1[1]-'0');
    s_2=2*(s2[0]-'0')+(s2[1]-'0');\
    if(s_1==s_2){
        cout<<'1';
        if((s1[3]>='D'&&s2[2]>='D')||(s1[2]<='C'&&s2[2]<='C')){
            cout<<'1';
            if(s1[2]-s2[2]==1||s1[2]-s2[2]==-1){
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
    return 0;
}
