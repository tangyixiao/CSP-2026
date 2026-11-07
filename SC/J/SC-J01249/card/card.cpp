#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> ans(m);
	vector<int> last(m,-1);
	for(int i = 0; i < n; i++){
		cin>>a[i];
		a[i]--;
		last[a[i]] = i;
	}
	vector<int> s(n,1);
	for(int i = 0; i < n; i++){
		if(last[a[i]] == i){
			ans[a[i]] += s[i];
			if(i+1 < n)s[i+1] += s[i];
		}
		else{
			s[last[a[i]]] += s[i];
		}
	}
	for(auto id: ans){
		cout<<id<<' ';
	}
}