#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200011],p[42];
int book[42],book2[42][200011];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	p[0]=1;
	for(int i=1;i<=40;i++)p[i]=p[i-1]*2;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		long long b=a[i];long long j=0;
		while(b){
			if(b%2)book2[j][i]=1,book[j]+=1;
			b/=2;j+=1;
		}
	}
	long long j=0;
	for(int i=40;i>=0;i--){
		if(book[i]>=m){
			j+=p[i];
			for(int k=i;k>=0;k--){
				for(int p=1;p<=n;p++){
					if(book2[k][p]&&book2[i][p]==0){
						book[k]-=1;book2[k][p]=0;
					}
				}
			}
		}
	}
	cout<<j;
}
/*
5 3
31 3 1 15 7
*/