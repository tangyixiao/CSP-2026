#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],pos,maxx=-1,s[200010],ma;
bool f=0,rb=1;
void dfs(int pos,int cnt,int k,bool f){
	if(n-pos+cnt<m-1)return;
	if(cnt==m){
		maxx=max(maxx,k);
		return ;
	}
	if(pos>n+1)return;
	if(f){
	    dfs(pos+1,cnt,k,1);
	    dfs(pos+1,cnt+1,k&a[pos],1);
	}
	else{
		dfs(pos+1,cnt,k,0);
		dfs(pos+1,cnt+1,a[pos],1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m>>a[1];
	ma=a[1];
	s[1]=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		if(a[i]-a[i-1]!=1)rb=0;
		ma=max(ma,a[i]);
		s[i]&=s[i-1];
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	else if(m==n){
		cout<<s[n];
		return 0;
	}
	sort(a+1,a+n+1);
	if(rb){
		int cnt=1;
		maxx=a[n];
		for(int i=n-1;i>=1&&cnt<m;i--){
			cnt++;
			maxx&=a[i];
		}
		cout<<maxx;
		return 0;
	}
	pos=1;
	dfs(pos,0,0,0);
	cout<<maxx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
