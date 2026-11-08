#include<bits/stdc++.h>
using namespace std;
long long n,m,n1[500005],m1[300005],p[500005],k,km;
bool b; 
int main(){
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>n1[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			k++;
			p[k]=n1[j];
			b=0;
			km=k;
			for(long long l=1;l<=km;l++){
				if(b){
					p[l]=0;
					k--;	
				}
				if(p[l]==p[k]&&l!=k)b=1;
			}
		}
		for(long long j=1;j<=k;j++){
			m1[p[j]]++;
			p[j]=0;
		}
		k=0;
	}
	for(long long i=1;i<=m;i++){
		cout<<m1[i]<<' ';
	}
	return 0;
} 
