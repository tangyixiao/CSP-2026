#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n],p[n],o[m],d[m];
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		p[i]=0;
	}
	for(long long i=1;i<=m;i++){
		o[i]=i;
		d[i]=0;
	}
	for(long long i=1;i<=n;i++){
		long long q=1;
		for(long long j=i;j<=n;j++){
			for(long long l=1;l<=m;l++){
				if(p[l]==a[j]) q=1;
			}
			p[q]=a[j];
			q++;
		}

		for(long long i=q;i>0;i--){
			for(long long j=1;j<=m;j++){
				if(p[i]==o[j]) d[j]++;
			}
		}	
	}
	for(long long i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
