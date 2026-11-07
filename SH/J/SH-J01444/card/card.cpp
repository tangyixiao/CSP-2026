#include<bits/stdc++.h>
using namespace std;
bool ont[300020];
long long n,m,a[500020],ans[300020];
vector<long long> c;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(!c.empty())c.clear();
		memset(ont,false,sizeof(ont));
		for(int j=i;j<=n;j++){
			c.push_back(a[j]);
			if(ont[a[j]]==false){
				ont[a[j]]=true;
			}
			else{
				c.pop_back();
				while(c[c.size()-1]!=a[j]){
					ont[c[c.size()-1]]=false;
					c.pop_back();
				}
			}
		}
		for(int j=0;j<c.size();j++){
			ans[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
