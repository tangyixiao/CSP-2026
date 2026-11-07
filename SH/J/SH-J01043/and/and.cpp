#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+7;
ll n,m,a[N],b[N],ans1;
void de(int d){
	if(d==n+1){
		ll ans=17179869183,sum=0;
		for(int i=1;i<=n;i++){
			if(b[i]==1){
				sum++;
				ans&=a[i];
//				cout<<a[i]<<" ";
			}
		}
		if(sum==m){
//			cout<<":"<<ans;
			ans1=max(ans,ans1);
		}
//		cout<<endl;
		return;
	}
	b[d]=1;
	de(d+1);
	b[d]=0;
	de(d+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ll maxn=0,l=17179869183;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		l&=a[i];
//		m*=2;
//		cout<<m<<endl;
	}
	if(n<=20){
		de(1);
		cout<<ans1;
	}else if(m==1){
		cout<<maxn;
	}else if(m==n){
		cout<<l;
	}
	
//	ll s=3&17179869183;
//	cout<<s;
	return 0;
}
