#include<bits/stdc++.h>
using namespace std;
int n,m,l,r,ans,maxn;
long long a[200010];
bool x1[21];
bool y2[21];
int f(int x){
	int i=1;
	while(x){
		x1[i]=x%2;
		x/=2;
		i++;
	}
	return i-1;
} 
int o(int y){
	int i=1;
	while(y){
		y2[i]=y%2;
		y/=2;
		i++;
	}
	return i-1;
} 
int p(int x,int y){
	int ansm,q=1;
	for(int i=max(x,y);i>=0;i++){
		if(x1[i]==1&&y2[i]==1){
			for(int j=2;j<=i;j++){
				q*=2;
			}
			ansm+=q,q=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				l=o(a[i]);
				r=o(a[j]);
				ans=p(l,r);
				if(ans>maxn)maxn=ans;
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		for(int i=1;i<n;i++){
			l=f(a[i]);
			r=f(a[i+1]);
			a[i+1]=p(l,r);
		}
		cout<<a[n];
		return 0;
	}
}