#include<bits/stdc++.h>
using namespace std;

const int mn=2e5+2,ma=1073741823;
int n,m;
int a[mn];

int dfs(int k,int ans,int mi){
	if(k>=m){
		return ans;
	}
	int cnt=ans;
	for(int i=mi+1;i<=n;i++){
		cnt=max(cnt,dfs(k+1,ans&a[i],i));
	}
	return cnt;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	int M=0;
	for(int i=1;i+m-1<=n;i++)M=max(M,dfs(2,a[i],i));
	printf("%d",M);
	return 0;
}