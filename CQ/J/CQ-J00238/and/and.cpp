//枚举做法，用来对排 

#include<bits/stdc++.h>
using namespace std;
const int R=2*1e5+5;
int n,m,arr[R],ans=-1;
int awy(int a,int b){
	string s="";
	while (a!=0 or b!=0){
		if (a%2==1 and b%2==1)
			s="1"+s;
		else
			s="0"+s;
		a=a>>1;
		b=b>>1;
	}
	int ans=0;
	for (int i=0;i<s.size();++i)
		ans=ans+((s[i]-'0')<<(s.size()-i-1));
	return ans;
}
void dfs(int idx,int num,int cnt){
	if (cnt==m){
		ans=max(num,ans);
		return ;
	}
	for (int i=idx+1;i<=n;++i){
		if (cnt<m){
			dfs(i,awy(num,arr[i]),cnt+1);
		}
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;++i){
		scanf("%d",&arr[i]);
	}
	for (int i=1;i<=n-m+1;++i){
		dfs(i,arr[i],1);
	}
	printf("%d",ans);
	return 0;
}

