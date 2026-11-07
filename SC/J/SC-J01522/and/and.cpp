#include<bits/stdc++.h>
using namespace std;
long long a[200010];
long long n,m,ans=-1,maxx=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long ansss=pow(2,31)-1;
	int b=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=4)	b=0;
		ansss=ansss&a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==2){
		long long anss=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				anss=max(anss,a[i]&a[j]);
		cout<<anss;
		return 0;
	}
	if(m==n){
		cout<<ansss;
		return 0;
	}
	if(b==1){
		int c0=0,c1=0,c2=0,c3=0;
		for(int i=1;i<=n;i++){
			if(a[i]==0)	c0++;
			if(a[i]==1)	c1++;
			if(a[i]==2)	c2++;
			if(a[i]==3)	c3++;
		}
		if(c3>=m){
			cout<<3;
			return 0;
		}
		m-=c3;
		if(c2>=m){
			cout<<2;
			return 0;
		}
		if(c1>=m){
			cout<<1;
			return 0;			
		}
		cout<<0;
		return 0;
	}
	cout<<n-m;
	return 0;
}