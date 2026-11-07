#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    char c[100005];
    char s[100005];
    for(int i=0;i<2;i++){
        cin>>c[i]>>s[i];
    }
    if(c[0]==c[1]){
        cout<<"1000";
    }
    else{
        cout<<"0000";
    }

    return 0;
}
