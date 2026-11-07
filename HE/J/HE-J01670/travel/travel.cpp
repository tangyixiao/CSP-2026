#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans=0;
void repeat(){
    for(int i=1;i<=ans;i++){
        cout<<1;
    }
    for(int i=1;i<=4-ans;i++){
        cout<<0;
    }
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1!=c2){
        repeat();
        return 0;
    }
    ans++;
    if(s1[0]+s1[1]!=s2[0]+s2[1]){
        repeat();
        return 0;
    }
    ans++;
    if((s1[2]<='C')!=(s2[2]<='C')){
        repeat();
        return 0;
    }
    ans++;
    if(abs(int(s1[2])-int(s2[2]))!=1){
        repeat();
        return 0;
    }
    ans++;
    repeat();
    return 0;
}
