#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[300005];
ap<iint,int> mp;
vector<int> p;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = n;i > 0;i--)
	cin >> a[i];
	for(int i = 1;i <= n;i++){
		if(mp[a[i]]){
			while(p.size() && p[p.size()-1] != a[i])
				mp[p[p.size()-1]] = 0,p.pop_back();
		}else mp[a[i]] = p.size(),p.push_back(a[i]);
		for(auto j : p)
			cnt[j]++;
	}for(int i = 1;i <= m;i++)
		cout << cnt[i] << ' ';
}
