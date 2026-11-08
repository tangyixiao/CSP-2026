#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    int c1,c2;
    string s1,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        cout<<"1";
    }else{
        cout<<"0";
    }

    for(int i=1;i<=3;i++){
        if(s1[i]==s2[i]){
            cout<<"1";
        }else if(s1[3]=='A'&&s2[3]=='B'){
            cout<<"1";
        }else{
            cout<<"0";
        }

    }

    return 0;
}
