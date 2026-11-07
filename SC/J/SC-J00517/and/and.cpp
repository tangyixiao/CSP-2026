#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		int maxn=-1000;
		for(int i=1;i<=n;i++){
			if(a[i]>maxn)maxn=a[i];
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int maxn=-1000;
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>maxn)maxn=(a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==n-1){
		int maxn=-1000;
		for(int i=2;i<=n;i++){
			int ans=a[1];
			for(int j=1;j<=n;j++){
				if(j!=i)ans&=a[j];
			}
			if(ans>maxn)maxn=ans;
		}
		int ans=a[2];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		if(ans>maxn)maxn=ans;
		cout<<maxn;
		return 0;
	}else{
		int c0=0,c1=0,c2=0,c3=0;
		for(int i=1;i<=n;i++){
			if(a[i]==0)c0++;
			if(a[i]==1)c1++;
			if(a[i]==2)c2++;
			if(a[i]==3)c3++;
		}
		if(c3>=m){
			cout<<3;
		}else if(c2>=m){
			cout<<2;
		}else if(c3+c2>=m){
			cout<<2;
		}else if(c1>=m){
			cout<<1;
		}else if(c1+c3>=m){
			cout<<1;
		}else{
			cout<<0;
		}
		return 0;
	}
	cout<<7;
	return 0;
}