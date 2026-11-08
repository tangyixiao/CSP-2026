#include <bits/stdc++.h>
using namespace std;
int n,m,a[200001],cnt[200001],ok[200001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool ok1=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]&&i!=1)
			ok1=false;
	}
	if(n<=500){
		for(int i=n;i>=1;i--){
			vector<int>b;
			for(int j=i;j<=n;j++){
				b.push_back(a[j]);
				for(int x=0;x<(int)b.size()-1;x++){
					if(b[x]==a[j]){
						b.erase(b.begin()+x,b.end()-1);
						break;
					}
				}
			}
			for(int j=0;j<(int)b.size();j++)
				cnt[b[j]]++;
		}
		for(int i=1;i<=m;i++)
			cout<<cnt[i]<<' ';
	}
	if(ok){
		for(int i=n;i>=1;i--){
			vector<int>b;
			for(int j=i;j<=n;j++){
				if(!b.empty()&&b.back()==a[j])
					continue;
				b.push_back(a[j]);	
			}
			for(int j=0;j<(int)b.size();j++)
				cnt[b[j]]++;
		}
		for(int i=1;i<=m;i++)
			cout<<cnt[i]<<' ';
	}
}
