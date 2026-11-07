#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int pw[30];
vector<int> l,r={};
int ans=0;
void solve(int k){
	if(k<0){
		cout<<ans<<endl;
		return;
	}
	for(int i=0;i<l.size();i++){
		if(l[i]>=pw[k]){
			r.push_back(l[i]);
		}
	}
	if(r.size()<m){
		r={};
		solve(k-1);
	}
	else if(r.size()==m){
		int ans1=r[0];
		for(int i=0;i<r.size();i++){
			ans1=ans1&r[i];
		}
		cout<<ans+ans1<<endl;
		return;
	}
	else{
		ans+=pw[k];
		l=r;
		r={};
		for(int i=0;i<l.size();i++){
			l[i]-=pw[k];
		}
		solve(k-1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int maxm=0;
		for(int i=1;i<=n;i++){
			maxm=max(maxm,a[i]);
		}
		cout<<maxm<<endl;
	}
	else if(m==n){
		int ansx=a[1];
		for(int i=1;i<=n;i++){
			ansx=ansx&a[i];
		}
		cout<<ansx<<endl;
	}
	else if(m==2&&n<=2000){
		int maxm=0;
		for(int i=2;i<=n;i++){
			for(int j=1;j<i;j++){
				maxm=max(maxm,a[i]&a[j]);
			}
		}
		cout<<maxm<<endl;
	}
	else{
		pw[0]=1;
	for(int i=1;i<30;i++){
		pw[i]=pw[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		l.push_back(a[i]);
	}
	solve(29);
	}
	return 0;
}
