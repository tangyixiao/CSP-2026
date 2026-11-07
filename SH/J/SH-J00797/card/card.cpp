#include<bits/stdc++.h>
using namespace std;
int a[500010];
int sum[300010];
vector<int> now;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		now.clear();
		for(int j=i;j<=n;j++){
			for(int k=0;k<now.size();k++){
				if(now[k]==a[j]){
					now.pop_back();
					while(k<=now.size()){
						now.pop_back();
						k++;
					}
				}
			}
			now.push_back(a[j]);
		}
		for(int j=0;j<now.size();j++) sum[now[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<sum[i]<<' ';
	return 0;
}
