#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a; 
int ans = 0;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		int x;
		cin>>x;
		a.push_back(x); 
	}
	vector<int>t = a;
	for(int i = 30;i>=0;i--){
		int mask = 1<<i;
		int cnt = 0;
		for(int j = 0;j<t.size();j++){
			if(t[j]&mask){
				cnt++;
			}
		}
		if(cnt<m) continue;
		vector<int>tmp;
		for(int j = 0;j<t.size();j++){
			if(t[j]&mask) tmp.push_back(t[j]);
		}
		t = tmp;
		ans+=mask;
	}
	cout<<ans<<endl;
	return 0;
}
