#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],sum[300005];
vector<int> v;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int f=0;
			for(auto c:v){
				if(c==a[j]){
					v.clear();
					v.push_back(a[j]);
					f=1;
					break;
				}
			}
			if(f==0){
				v.push_back(a[j]);
			}
		}
		for(auto c:v){
			sum[c]++;
		}
		v.clear();
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}
