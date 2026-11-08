#include<bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
int n;
long long sn=0,sc;
long long s[200005];
long long ans=0;
int find(int l,int r,long long k){
	while(l<r){
		int mid=(l+r)>>1;
		if(s[mid]>=k)r=mid;
		else l=mid+1;
	}
	return r;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sn+=a[i];
		s[i]=s[i-1]+a[i];
	}
	sc=sn/2;
	
	for(long long i=1;i<=sc;i++){
		int x=find(1,n,i);
		int y=find(1,n,sn-i+1);
		if(c[x]!=c[y])ans++;
	}
	cout<<ans;
	return 0;
} 
