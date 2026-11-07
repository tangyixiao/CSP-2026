#include<bits/stdc++.h>
using namespace std;
const int N=3e5+7;
long long a[N],vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,i,j,cnt,ans=0;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a[i];
		vis[i]=1;
	}
	for(i=31;i>=0;i--){
		cnt=0;
		for(j=0;j<n;j++){
			if(a[j]&(1<<i))
				cnt+=vis[j];
		}
		if(cnt>=m){
			ans+=(1<<i);
			for(j=0;j<n;j++){
				if(!(a[j]&(1<<i)))
					vis[j]=0;
			}
		}
	}
	cout<<ans;
	return 0;
}

