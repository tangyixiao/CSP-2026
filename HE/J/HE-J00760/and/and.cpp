#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1000;
int n,m,k,ans=INT_MAX;
int a[N];
vector<bool>v[33];
map<int,int>mp;
bool cmp(int d,int e) {
	return d>e;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	if(m==1) {
		for(int i=1; i<=n; i++) {
			k=max(a[i],k);
		}
		cout<<k;
		return 0;
	}
	if(m==2) {
		for(int i=1; i<=n; i++) {
			for(int j=i+1; j<=n; j++) {
				int sum=a[i]&a[j];
				if(sum!=0) {
					k=max(sum,k);
				}
			}
		}
		cout<<k;
		return 0;
	}
	if(m==n) {
		k=a[1];
		for(int i=1; i<=n; i++) {
			k&=a[i];
		}
		cout<<k;
		return 0;
	}
	for(int i=1; i<=n; i++) {
		queue<int>s;
		int z=a[i];
		while(z) {
			int x=z%2;
			s.push(x);
			z/=2;
		}
		while(!s.empty()) {
			v[i].push_back(s.front());
			s.pop();
		}
		int j=1;
		for(auto it:v[i]) {
//			cout<<it;
			mp[j]+=it;
			j++;
		}
//		cout<<'\n';
	}
	for(auto it=mp.begin(); it!=mp.end(); it++) {
		if(it->second>=m) {
			k=it->first;
//			cout<<k;
		}
	}
	vector<int>v2;
	for(int i=1; i<=n; i++) {
		if(v[i][k-1]==1&&v[i].size()>k-1) {
//			cout<<i;
			v2.push_back(i);
		}
	}
	int j=1;
	for(auto it:v2) {
		j++;
		ans&=a[it];
		if(j>m) {
			break;
		}
	}
	cout<<ans;
	return 0;
}
