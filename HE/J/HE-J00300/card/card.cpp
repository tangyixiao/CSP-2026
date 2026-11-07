#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005],cnt;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		vector<int>zm;
		for(int j=i;j<=n;j++){
			bool f = 0;
			for(int k=0;k<zm.size();k++){
				if(zm[k]==a[j]){
					int t = zm.size()-k;
					while(t--) zm.pop_back();
					f = 1;
					break;
				}
			}
			if(!f) zm.push_back(a[j]);
		}
		for(int j=0;j<zm.size();j++){
			if(zm[j]<=i){
				a[zm[j]]++;
				cnt = max(zm[j],cnt);
			}
		}
	}
	for(int i=1;i<=cnt;i++) cout<<a[i]<<' ';
	return 0;
}
