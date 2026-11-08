#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int sum=0;
int liu(int a,int b){
	int c[1000000000],d[1000000000],i=0,e[1000000000];
	while(a!=0){
		c[i++]=a%2;
		a/=2;
	}
	while(b!=0){
		d[i++]=b%2;
		b/=2;
	}
	for(int i=0;i<1000000000;i++){
		if(c[i]==d[i]){
			e[i]==1;
		}
		else{
			e[i]==0;
		}
	}
	for(int i=0;i<1000000000;i++){
		
		sum+=c[i]*2^i;
	}
	return sum;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	if(m==1){
		for(int i=1;i<=n;i++){
			max(a[i],sum);
			if(a[i]>sum){
				sum=a[i];
			}
		}
		cout<<sum;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			max(liu(a[i],a[i+1]));
			if(a[i]>a[i+1]){
				sum=a[i];
			}
			else{
				sum=a[i+1];
			}
		}
		cout<<sum;
		
	}
	return 0;
} 
