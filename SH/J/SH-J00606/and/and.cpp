#include<bits/stdc++.h>
using namespace std;
long long n,m,k;
long long a[1000005];
long long mx=-10;
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
cin>>n>>m;
for(int i=1;i<=n;i++){
cin>>a[i];
k=a[i];
if(mx<k)mx=k;
}
cout<<mx;

return 0;
}

