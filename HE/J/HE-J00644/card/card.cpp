#include<bits/stdc++.h>
using namespace std;
const int N=5e5+100;
long long n,m,a[N],ans[N],p[N],z,l,k[N];
bool fl=true;
vector<long long >f[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])fl=false;
		f[a[i]].push_back(i);
	}if(fl){
		for(int i=1;i<=n;i++){
			if(a[i]==a[i-1])continue;
			ans[a[i]]=n-i+1;
		}for(int i=1;i<m;i++){
			cout<<ans[i]<<" ";
		}cout<<ans[m]<<"\n";
		return 0;
	}
	for(int i=n;i>=1;i--){
		l=i;
		while(l<=n){
			ans[a[l]]++;
			l=1+f[a[l]][f[a[l]].size()-1];
		}
	}
	for(int i=1;i<m;i++){
		cout<<ans[i]<<" ";
	}cout<<ans[m]<<"\n";
	return 0;
}
