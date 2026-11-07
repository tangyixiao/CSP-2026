#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    string ans;
    if(!(a==c)){
        cout<<"0000";
        return 0;
    }
    string zw,zw1;
    int len=b.size()-1;
    char w,w1;
    for(int i=0;i<=len-1;i++ ){
        zw+=b[i];
        zw1+=d[i];
    }
    w=b[len];
    w1=d[len];
    if(!(zw==zw1)){
        cout<<"1000";
        return 0;
    }
    if(!(w<='C'&&w1<='C'||(w>='D'&&w<='F')&&(w1>='D'&&w1<='F'))){
        cout<<"1100";
        return 0;
    }
    if(!((w-w1==1||w1-w==1)&&(w1!='C'&&w!='D'))){
        cout<<"1110";
        return 0;
    }
    cout<<"1111";
    return 0;
}
