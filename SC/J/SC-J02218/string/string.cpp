#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m=0;
	cin>>n;
	long long a[n];
	char c[n];
	for(long long i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}for(long long i=0;i<n;i++){
		for(long long j=n-1;j>i;j--){
			if(a[i]==0){
				break;
			}if(a[j]!=0){
				long long x=min(a[i],a[j]);
				if(c[i]!=c[j]){
					m+=x;
				}a[i]-=x;
				a[j]-=x;
			}
		}
	}cout<<m;
	return 0;
} 