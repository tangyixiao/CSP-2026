#include<bits/stdc++.h>
using namespace std;
int ans=-0x3f3f3f3f;
int n,m;
vector<int> a(n+1);
vector<bool> s(n+1,0);
void dfs(int cnt,int an){
	if(cnt==m+1){
		ans=max(ans,an);
		cout<<an<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!s[i]){
			s[i]=1;
			if(cnt==1){
				an=a[i];
				dfs(cnt++,an);
			}else{
				dfs(cnt++,(int)(an&a[i]));
			}
			s[i]=0;
		}
	}
	return;
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dfs(1,0);
	cout<<ans;
	return 0;
}
