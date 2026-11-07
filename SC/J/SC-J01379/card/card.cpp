#include<bits/stdc++.h>
using namespace std;
long long m,n;
long long a[500500];
long long b[300500]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)cin>>a[i];
	for(long long i=n;i>=1;i--){
		if(b[a[i]]==0) b[a[i]]=i;
		else{
			for(long long j=i+1;j<=n;j++){
				if(a[j]==a[i]&&j!=i)break;
				b[a[j]]-=i;
			}
		}
	}
	for(long long i=1;i<=m;i++)cout<<b[i]<<" ";
	return 0;
}





