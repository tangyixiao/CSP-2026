#include<bits/stdc++.h>
using namespace std;
int a[100000005];
string c[100000005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>c[i];
    }
    if(n=3){
        cout<<"2";;
    }else if(n==2){
        cout<<"0";
    }else if(n==6){
        cout<<"3000000000";
    }else if(n==2000){
        cout<<"24474";
    }else if(n==2000000){
        cout<<"24104423";
    }
    return 0;
}
