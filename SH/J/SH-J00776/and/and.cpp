#include<bits/stdc++.h>
using namespace std;
int a[200010],a2[200010];
int v[200010];
int n,m;
long long ans=0;
void dfs(int m,long long k){
	if(m==0){
		ans=max(ans,k);
	}
	for(int i=1;i<=n;i++){
		if(!v[i]){
			
			v[i]=1;
			dfs(m-1,k&a[i]);
			v[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
/*
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	a2[i]=a[i];
	}
	sort(a+1,a+n+1);
	long long t=0;
	for(int i=1;i<=n;i++){
		long long t2=1;
		while(a2[i]!=0){
			pre[t2++]+=a2[i]&1;
			a2[i]>>=1;

		}
		t=max(t,t2);
	}
	long long ans=0,p=1;
	for(int i=1;i<t;i++){
		p*=2;
	}
	int t2=m;
	for(int i=t-1;i>=1;i--){
		if(pre[i]>=m){
			ans+=p;
			t2--;
			
		}
		p/=2;
		if(t2==0){
			break;
		}
	}
	cout<<ans;
	*/
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	dfs(m,2147483647);
	cout<<ans;
	return 0;
}
