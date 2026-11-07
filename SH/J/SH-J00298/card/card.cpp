#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[300005];
bool v[300005];
vector<int> z;
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(v,0,sizeof(v));
		z.clear();
		for(int j=i;j<=n;j++){
			if(v[a[j]]){
				while(z[z.size()-1]!=a[j]){
					v[z[z.size()-1]]=0;
					z.pop_back();
				}
			}else{
				z.push_back(a[j]);
				v[a[j]]=1;
			}
		}
		for(int j=0;j<=z.size()-1;j++){
			ans[z[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m){
			cout<<' ';
		}
	}
	cout<<'\n';
	return 0;
}
