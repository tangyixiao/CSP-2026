#include <bits/stdc++.h>
using namespace std;
int k=0;
bool cando(vector<int> a){
	int L=a.size();
	for(int u=0;u<L/2;u++){
		if(a[u]==a[L-1]){
			k=L-u;
			return true;
		}
	}
	return false;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	vector<int> nowp;
	vector<int> ans(m+1);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(cando(nowp)&&nowp.size()>=3){
				for(int u=0;u<k-1;u++){
					nowp.pop_back();
				}
			}
			nowp.push_back(a[j]);
		}
		if(cando(nowp)&&nowp.size()>=3){
			for(int u=0;u<k-1;u++){
				nowp.pop_back();
			}
		}
		int l=nowp.size();
		for(int i=0;i<l;i++){
			ans[nowp[i]]+=1;
		}
		nowp.clear();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}