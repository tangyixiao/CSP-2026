#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1);
	vector<bool> choice(n+1,true);
	for(int i=1;i<=n;i++) cin>>a[i];
	int ans=0;
	for(int i=30;i>=0;i--){
		int pl=(1<<i);
		int cnt=0;
		vector<bool> nc=choice;
		for(int i=1;i<=n;i++){
			if(choice[i]){
				if(a[i]&pl) cnt++;
					else nc[i]=false;
			}
		}
		if(cnt>=m){
			ans+=pl;
			choice=nc;
		}
	}
	cout<<ans;
	return 0;
}
