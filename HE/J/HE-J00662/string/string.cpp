#include<bits/stdc++.h>
using namespace std;
long long n,l[200001],sum=0,mina,m=1;char cc;bool f=true;
struct duan{
	int b;
	char c;
}a[200001];
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
ios::sync_with_stdio(false);
cin.tie(0);	
cin>>n;
if(n==1){cout<<0;return 0;}
cin>>a[1].b>>a[1].c;
cc=a[1].c;l[1]=a[1].b; 
for(int i=2;i<=n;i++){
	cin>>a[i].b>>a[i].c;
	if(cc!=a[i].c)f=false;
l[i]=l[i-1]+a[i].b;
}
if(f==true){cout<<0;return 0;}
while(l[m]!=0){
	if(a[m].c!=a[n-m+1].c){	
	mina=min(l[m],(l[n-m+1]-l[m]));	
	sum+=mina;
	for(int j=m;j<=n;j++)l[j]-=mina;
	a[n-m+1].b-=mina;
	if(l[m]==0)m++;
}
	else{m++;continue;}
	if(m>=n/2)break;}
cout<<sum;
	return 0;
}
