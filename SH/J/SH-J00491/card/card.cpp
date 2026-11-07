#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n >>m; 
    int a[500005];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cout<<a[i];        
    }
    return 0;
}