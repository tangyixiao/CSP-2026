#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m,ans=0;
	cin >> n>> m;
	vector<int> v(1+n);
	for(int i=1;i<=n;i++)cin >>v[i];
	vector<int> h(m+1);
	for(int i=1;i<=n;i++){
		vector<int> f;
		unordered_map<int,int> mp, mp1;
		for(int j=i;j<=n;j++){
			f.push_back(v[j]);
			mp[v[j]]++;
			if(mp[v[j]]>=2){
				mp[v[j]]=1;
				f.pop_back();
				int k=f.size()-1;
				while(k>=0&&f[k]!=v[j]){
					mp[f[k]]--;
					f.pop_back();
					k--;
					ans++;
				}
			}ans++;
		}for(int j=0;j<f.size();j++)h[f[j]]++;
	}for(int i=1;i<=m;i++)cout << h[i]<< " ";
	cout <<ans;
	return 0;
}
