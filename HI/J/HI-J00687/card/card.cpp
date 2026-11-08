#include <bits/stdc++.h>
using namespace std;
int n,m,a[100000005],tj[100000005];
vector<int>v;
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		if (i>1){
			for (int j=0;j<v.size();j++){
				if (v[j]==a[i]){
					for (int k=j;k<v.size();k++) v.erase(v.begin()+k);
					break;
				}
			}
			
		}
		v.push_back(a[i]);
		for (int j=0;j<v.size();j++) tj[v[j]]++;
	}
	for (int i=1;i<=m;i++) cout<<tj[i]<<' ';
	return 0;
}
