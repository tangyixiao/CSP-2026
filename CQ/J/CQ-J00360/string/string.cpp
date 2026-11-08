#include <bits/stdc++.h>
using namespace std;
long long int n,ans;
struct ff{
	long long int m;
	char s;
}a[200005];
void dfs(long long int i,long long int j,long long int s1,long long int s2,long long int anss){
	if(i==j||i>j){
		ans=anss;
		return ;
	}
	if(a[i].s ==a[j].s ){
		if(s1>s2)dfs(i,j-1,s1-s2,a[j-1].m ,anss);
		else if(s1<s2)dfs(i+1,j,a[i+1].m ,s2-s1,anss);
		else dfs(i+1,j-1,a[i+1].m ,a[j-1].m ,anss);
	}
	else {
		if(s1>s2)dfs(i,j-1,s1-s2,a[j-1].m ,anss+s2);
		else if(s1<s2)dfs(i+1,j,a[i+1].m ,s2-s1,anss+s1);
		else dfs(i+1,j-1,a[i+1].m ,a[j-1].m ,anss+s1);
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].m >>a[i].s ;
	dfs(1,n,a[1].m ,a[n].m ,0);
	cout<<ans;
	return 0;
} //RP++
