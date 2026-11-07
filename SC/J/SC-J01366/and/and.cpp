#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

const int N=2e5 + 5;
int a[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> p;
	for(int i=1;i <= n;i++){
		cin >> a[i];
		p.push_back(i);
	}
	int ans=0;
	for(int i=29;i >= 0;i--){
		int len=p.size();
		vector<int> temp;
		int cnt=0;
		for(int j=0;j <= len - 1;j++){
			if(a[p[j]] & (1 << i)){
				temp.push_back(p[j]);
				cnt++;
			}
		}
		if(cnt >= m){
			ans|=(1 << i);
			p=temp;
		}
	}
	cout << ans;
	return 0;
}