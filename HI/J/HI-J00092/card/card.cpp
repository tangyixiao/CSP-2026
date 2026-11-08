#include<bits/stdc++.h>
using namespace std;
int a[500005];
int main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	map<int,int> ans;vector<int> v;map<int,int> m;
	int n,M;
	cin>>n>>M;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int now=n-i+1;
		for(int j=i;j<=n;j++){
			v.push_back(a[j]);
			m[a[j]]++;
			if(m[a[j]]==2){
				now--;
				v.pop_back();
				m[a[j]]--;
				while(v.back()!=a[j]){
					int t=v.back();
					m[t]--;
					v.pop_back();
					now--;
				}
			}
		}
		for(int j=1;j<=now;j++){
			int t=v.back();
			v.pop_back();
			ans[t]++;
		}
		v.clear();
		m.clear();
	}
	for(int i=1;i<=M;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 
