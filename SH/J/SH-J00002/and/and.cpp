#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200010],f[200010][50],we=0;
vector<int>v,w;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int t=a[i];
		for(int j=0;j<=30;j++){
			f[i][j]=t%2;
			t/=2;
		}
	}
	for(int j=30;j>=0;j--){
		int ans=0;
		v.clear();
		for(int i=1;i<=n;i++){
			if(f[i][j]==1){
				ans++;
				v.push_back(i);
			}
		}
		if(ans==m){
			int sum=a[v[0]];
//			cout<<v[0]<<' ';
			for(int i=1;i<m;i++){
//				cout<<v[i]<<' ';
				sum&=a[v[i]];
			}
			cout<<sum;
			return 0;
		}
		if(ans>m){
			we=j-1;
			break;
		}
	}
	if(v.size()==0){
		cout<<0;
		return 0;
	}
	int p,now=1;
	for(int i=1;i<=we;i++)now*=2;
	p=now*2;
	for(int j=we;j>=0;j--){
		int ans=0;
		w.clear();
		for(int i=0;i<v.size();i++){
			if(f[v[i]][j]==1){
				ans++;
				w.push_back(v[i]);
			}
		}
		if(ans==m){
			int sum=a[w[0]];
//			cout<<v[0]<<' ';
			for(int i=1;i<m;i++){
//				cout<<v[i]<<' ';
				sum&=a[w[i]];
			}
			cout<<sum;
			return 0;
		}
		if(ans>m){
			p+=now;
		}
		now/=2;
		w.clear();
	}
	cout<<p;
} 
/*
5 3
8 10 16 9 12
*/
