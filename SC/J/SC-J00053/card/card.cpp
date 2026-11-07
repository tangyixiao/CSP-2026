#include<bits/stdc++.h>
using namespace std;
const int N=500050,M=300050;
long long a[N][N];
long long b[N];
long long num[M]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>b[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			a[i][j]=b[j];
		}
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			for(long long k=1;k<j;k++){
				if(a[i][k]==a[i][j]){
					for(long long l=k;l<j;l++){
						a[i][l]=0;
					}
				}
			}
		}
	} 
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			num[a[i][j]]++;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}