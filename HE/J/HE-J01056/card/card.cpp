#include<bits/stdc++.h>
using namespace std;
char a[500005];
int vis[500005];
int sum[500005];
int ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		string s="";
		memset(vis,0,sizeof(vis));
		for(int j=i;j<n;j++){
			if(vis[ a[j]-'0' ]==0){
				vis[ a[j]-'0' ]=1;
				s+=a[j];
			}
			else{
				int p=s.find(a[j]);
				for(int k=p;k<n;k++){
					vis[ a[k]-'0' ]=0;
					s[k]=' ';
				}
				s+=a[j];
				vis[ a[j]-'0' ]=1;
			}
		}
		for(int j=0;j<s.size();j++){
			if(s[j]==' ') continue;
			ans[ s[j]-'0' ]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
