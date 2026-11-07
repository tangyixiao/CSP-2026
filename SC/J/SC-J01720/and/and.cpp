#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std; 
int n,m,flag1,flag2,a[200005];
bool check(int x){
	int k=x+1;
	while(k!=0){
		if(k%2!=0)return false;
		k/=2;
	}
	return true;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]==a[i-1]+1)flag1++;
		if(check(a[i])==true)flag2++;
	}
	sort(a+1,a+n+1);
	if(flag2==n){
		cout<<a[n-m+1];
		return 0;
	}
	if(flag1==n){
		if(m==1)cout<<a[n];
		int t=n-1;
		for(int i=n-1;check(i-1)!=true;i--)t--;
		if(n-t+1>m)cout<<0;
		else cout<<a[n-m+1];
	}
	if(m==1){
		cout<<a[n];
		return 0;
	} 
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++)ans=(ans&a[i]);
		cout<<ans;
		return 0;
	}
	if(m==2){
		int maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>maxn)maxn=(a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	return 0;
} 