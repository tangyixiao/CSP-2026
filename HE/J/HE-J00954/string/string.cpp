#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ant=0,cnt=0;
    cin>>n;
    int a;
    string c,s;
    for(int i=0;i<n;i++){
       cin>>a;
       cin>>c;
       for(int j=0;j<a;j++){
           s+=c;
       }
       ant+=a;
    }
    for(int i=0;i<ant/2;i++){
        if(s[i]!=s[n-i]){
           cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

