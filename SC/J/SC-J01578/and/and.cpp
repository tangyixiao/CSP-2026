#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans;
bool a1[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		memset(a1+1,0,1+n);
		long long h=a[i];
		for(long long f=1;f<=m;f++){
			for(long long j=i+1;j<=n;j++){
				if(!a1[j]){
					h&=a[j];
					a1[j]=1;
				}
			}
		}
		ans=max(h,ans);
	}
	cout<<ans;
	return 0;
}