#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200005];
struct Node{
	int lens;
	string str;
}s[200005];
void change(int num,int id){
	string ans="";
	int cnt=0;
	while(num>=1){
		if(num%2==0) ans="0"+ans;
		else ans="1"+ans; 
		cnt++;
		num/=2;
	}
	s[id]={cnt,ans};
}
int maxl,k;
bool vis[200005];
int ans=-1;
void dfs(int tot){
	int cnt=0,ans=-1;
	for(int i=1;i<=n;i++){
		if(vis[i]==1 and s[i].str[tot]=='1'){
			cnt++;
			if(ans==-1) ans=a[i];
			else ans&=a[i];
		}
	}
	if(tot==maxl){
		if(cnt>=m){
			cout<<ans;
			exit(0);
		}
		return; 
	}
	if(cnt==m){
		cout<<ans;
		exit(0);
	}
	else if(cnt>m){
		for(int i=1;i<=n;i++){
			if(s[i].str[tot]=='0') vis[i]=0;
		}
		dfs(tot+1);
		cout<<ans;
		exit(0);
	}
	else{
		dfs(tot+1);
		return;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		change(a[i],i);
		maxl=max(maxl,s[i].lens); 
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=maxl-s[i].lens;j++){
			s[i].str="0"+s[i].str;
		}
		s[i].str="#"+s[i].str;
	}
	for(int i=1;i<=maxl;i++){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(s[j].str[i]=='1') cnt++;
		}
		if(cnt>=m){
			k=i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(s[i].str[k]=='1') vis[i]=1;
	}
	dfs(k);
	return 0;
} 