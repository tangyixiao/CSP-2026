#include<bits/stdc++.h>

using namespace std;

int n,m;
long long a[200005];
bool k[200005];
long long ans;

void f(int i,int c){
	if(i>n)return;
	if(c>=m){
		bool ok=1;
		long long s=0;
		for(int j=1;j<=n;++j){
			if(k[j]){
				if(ok) s=a[j];
				else s&=a[j];
				ok=0;
			}
		}
		ans=max(ans,s);
		return;
	}
	k[i]=1;
	f(i+1,c+1);
	k[i]=0;
	f(i+1,c);
	return;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		scanf("%lld",&a[i]);
	}
	f(1,0);
	cout<<ans;
	return 0;
}

