#include<bits/stdc++.h>
using namespace std;
long long n,m;
const long long N=500050;
long long a[N],ans[N];
bool b[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)cin>>a[i];
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++)b[j]=1;
		for(long long j=i;j<=n;j++){
			for(long long k=j-1;k>=i;k--){
				if(a[j]==a[k]&&b[k]==1){
					for(long long l=k;l<=j-1;l++)b[l]=0;
				}
			}		
		}
		for(long long k=1;k<=m;k++){
			for(long long j=i;j<=n;j++){
				if(a[j]==k&&b[j]==1){
					ans[k]++;
					break;
				}
			}
		}
	}
	for(long long i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}