#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long ans=0;
long long c[200005][32];
int h=0;
void solve(int num,long long x){
	int k=1;
	while(x){
		c[num][k]=x%2;
		k++;
		x/=2;
	}
	h=max(h,k);
}
vector<int> v,w;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		solve(i,a[i]);
		v.push_back(i);
	}
	for(int i=h;i>=1;i--){
		int sum=0;
		for(int j=0;j<v.size();j++){
			int u=v[j];
			if(c[u][i]==1){
				sum++;
			}
		}
		if(sum>=m){
			for(int j=0;j<v.size();j++){
				int u=v[j];
				if(c[u][i]==1){
					w.push_back(u);
				}
			}
			v.clear();
			for(int j=0;j<w.size();j++){
				v.push_back(w[j]);
			}
			w.clear();
			ans+=pow(2,i-1);
		}
	}
	cout<<ans;
	return 0;
}
/*
5 3
31 3 1 15 7

4 2
3 15 12 12
*/
