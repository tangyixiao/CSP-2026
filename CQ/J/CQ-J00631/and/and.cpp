#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
long long list1[maxn];
long long ans_max=-1000;
long long n,m;
int and_(long long a,long long b){
	long long ans=0;long long i=0;
	while(a!=0&&b!=0){
		ans+=(a%2&&b%2)*pow(2,i);
		i++;
		a/=2;b/=2;
	}return ans;
}void dfs(long long i,long long x,long long ans){
	if(x==m){
		ans_max=max(ans_max,ans);
	}else if(ans<ans_max||i>n){
		return ;
	}else{
		for(int j=i;j<=n;j++){
			dfs(j+1,x+1,and_(ans,list1[j]));
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&list1[i]);
	dfs(1,0,pow(2,30)-1);
	cout<<ans_max;
	return 0;
} 
