#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[6000000];
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
cin>>n>>m;
int b=0;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
sort(a+1,a+n+1);
b=a[n];
if(m==1){
	cout<<b;
}
if(m==2){
	cout<<(a[n]&a[n-1]);
}
return 0;
}
