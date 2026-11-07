#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],s[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	for(int i = 1;i <= n;i++){
		vector<int> v;
		for(int j = i;j <= n;j++){
			v.push_back(a[j]);
			int t,f = 0;
			for(int k = 0;k < v.size()-1;k++){
				if(v[k] == a[j]){
					t = k;
					f = 1;
				}
			}
			if(f == 1){
				for(int k = t;k < v.size()-1;k++){
					v[k] = 0;
				}
				f = 0;
			}
			
		}
		for(int j = 0;j < v.size();j++) s[v[j]]++;
	}
	for(int i = 1;i <= m;i++) cout<<s[i]<<' ';
	return 0; 
}