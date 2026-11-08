#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,ma=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ma=max(ma,a[i]);
    }
    sort(a+1,a+n+1);
    if(m==1){
        cout<<a[n];
    }
	else{
        cout<<a[n-m+1];
    }
    return 0;
}
