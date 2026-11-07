#include<bits/stdc++.h>
using namespace std;
bool b[5005];
int a[5005],cnt[5005];
vector<int> v;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		v.clear();
		for(int j=i;j<=n;j++){
			if(b[a[j]]){
				int k=v.size()-1;
				while(v[k]!=a[j]){
					b[v[k]]=0;
					v.pop_back();
					k--;
				}
			}
			else {
				b[a[j]]=1;
				v.push_back(a[j]);
			}
		}
		for(int j=1;j<=m;j++) {
			cnt[j]+=b[j];
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
