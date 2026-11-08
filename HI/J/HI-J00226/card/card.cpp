#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n+1],s[m+1]={0};
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		int x[n+1]={0};
		for(long long j=i,k=1;j<=n;j++,k++){
			long long y;
			bool f=0;
			for(long long l=1;l<k;l++){
				if(x[l]==a[j]){
					f=1;
					y=l;
					break;
				}
			}
			if(f){
				for(long long l=y;l<k;l++){
					x[l]=0;
				}
				x[y]=a[j];
				k=y;
			}
			else  x[k]=a[j];
		}
		for(long long j=1;j<=n;j++){
			s[x[j]]++;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}
