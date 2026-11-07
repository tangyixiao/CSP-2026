#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long n,m,ans=-1,tmp;
struct x{
	long long num,cnto=0;
} a[MAXN];
bool cmp(x a,x b){
	return a.cnto>b.cnto;
}
long long totwo(long long n){
	long long cnt=0;
	while(n>1){
		cnt+=n%2;
		n/=2;
	}
	cnt+=n;
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i].num;
	if(m==1){
		for(int i=1;i<=n;i++)
			ans=max(ans,a[i].num);
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1].num;
		for(int i=2;i<=n;i++)
			ans=ans & a[i].num;
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i].num & a[j].num);
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			if(i==1)
				tmp=a[2].num;
			else
				tmp=a[1].num;
			for(int j=2;j<=n;j++){
				if(i==j)
					continue;
				else
					tmp=tmp & a[j].num;
			}
			ans=max(ans,tmp);
		}
		cout<<ans;
		return 0;
	} 
	for(int i=1;i<=n;i++)
		a[i].cnto=totwo(a[i].num);
	sort(a+1,a+n+1,cmp);
	ans=a[1].num;
	for(int j=1;j<=m;j++)
		ans=ans & a[j].num;
	cout<<ans;
	return 0;
}
