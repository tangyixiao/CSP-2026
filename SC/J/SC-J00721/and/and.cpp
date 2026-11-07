#include<bits/stdc++.h>
using namespace std;
vector<int>num[30];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;cin>>n>>m;
	for(int i=1,a;i<=n;i++)
		{ cin>>a;num[29].push_back(a); }
	for(int k=29;k>=0;k--){
		int cnt=0,l=1<<k;
		for(int a:num[k])if(a&l){
			cnt++;if(k) num[k-1].push_back(a);
		}if(cnt>=m) ans+=l;
		else if(k) num[k-1]=num[k];
	}cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}