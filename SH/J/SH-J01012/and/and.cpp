#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a,ans=pow(2,30)-1;
vector<int> v1,v2;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a;
		v1.push_back(a);
	}for (int i=30;i>=0;i--){
		for (int j=0;j<v1.size();j++){
			if ((v1[j]>>i)&1){
				v2.push_back(v1[j]);
			}
		}if (v2.size()>=m){
			swap(v1,v2);
		}v2.clear();
	}for (int i=0;i<v1.size();i++){
		ans&=v1[i];
	}cout<<ans;
	return 0;
}
