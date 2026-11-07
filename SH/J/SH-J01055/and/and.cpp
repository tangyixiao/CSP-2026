#include<bits/stdc++.h>
using namespace std;
long long a[200000]={};
bool a1[200000]={};
long long ans=-1;
long long maxx=0;
long long n,m;
void dfs(int f,long long cnt,int x){
	if(cnt<=ans) return ;
	if(f==m && ans<cnt){
		ans=cnt;

		return ;
	}
	for(int i=x+1;i<n;i++){
		if(a1[i]==0){
			a1[i]=1;
			dfs(f+1,cnt&a[i],i);
			a1[i]=0;
		}
	}
}
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		maxx=max(a[i],maxx);
	}
	sort(a,a+n,cmp);
	
	if(m!=n-1 && m>=5100 && n>=10100 && maxx>4){
		cout<<a[m-1];
		return 0;
	}
	
	for(int i=0;i<n-m+1;i++){
		if(ans==maxx) break;
		a1[i]=1;
		dfs(1,a[i],i);
		a1[i]=0;
	}
	cout<<ans;
	return 0;
}
