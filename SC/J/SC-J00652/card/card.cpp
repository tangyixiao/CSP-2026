#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,m;
vector <int> a;

vector <int> cnt;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	a.resize(n+1),cnt.resize(n+1);
	for (int i = 0;i < n;i ++)
		cin >> a[i];
	
	for (int i = 0;i < n;i ++){
		vector <int> t;
		for (int j = i;j < n;j ++){
			vector <int>::iterator it = find(t.begin(),t.end(),a[j]);
			if (it == t.end()){
				t.push_back(a[j]);
			} else {
				for (int k = it-a.begin()+1;k < t.size();k ++)
					if (t.size() != 0)
						t.pop_back();
				t.push_back(a[j]);
			}
		}
		int cc = 0;
		for (int j = 0;j < t.size();j ++)
			cc += t[j];
		if (cc > 0 && cc <= m)
			cnt[cc] ++;
	}
	
	for (int i = 1;i <= m;i ++)
		cout << cnt[i] << " ";
	
	return 0;
}