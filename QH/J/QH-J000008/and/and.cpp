#include <bits/stdc++.h>
using namespace std;
struct node{
	int c;
	int num;
};
bool cmp(node x,node y){
	return x.c > y.c;
}
int n,m;
int a[200005];
int cnt[200005];
vector< vector<int> > s;
vector<node> ans;

int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin >> n >> m;
	int maxn =0;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		maxn = max(a[i],maxn);
		int b = a[i];
		while(b>0){
			s[i].push_back(b%2);
			b/=2;
		}
	}
	if(m==1){
		cout << maxn;
		return 0;
	}
	for(int i = 1;i<=n;i++){
		for(int j = 0;j<=s[i].size();j++){
			if(s[i][j]==1){
				cnt[i]++;
			}
		}
	}
	for(int i = 1;i<=n;i++){
		ans.push_back({cnt[i],a[i]});
	}
	sort(ans.begin(),ans.end(),cmp);
	for(int i =0;i<m;i++){
		cout << ans[i].num << ' ';
	}
	return 0;
} 
