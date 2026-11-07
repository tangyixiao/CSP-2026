#include<bits/stdc++.h>
using namespace std;
long long n,m,s[500005],ans[300005];
long long  is[300005];
vector<long long >z; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;i++)is[i]=-1;
	for(int i=1;i<=n;i++)cin>>s[i];
	for(int i=1;i<=n;i++){
		for(int i=1;i<=m;i++)is[i]=-1;
		z.clear();
		for(int j=i;j<=n;j++){
			if(is[s[j]]==-1){
				z.push_back(s[j]);
				is[s[j]]=z.size()-1;
			}
			else{
				while(z.size()>is[s[j]]+1){
					is[z[z.size()-1]]=-1;
					z.pop_back(); 
				}
			}
		}
		for(int j=0;j<z.size();j++)ans[z[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}