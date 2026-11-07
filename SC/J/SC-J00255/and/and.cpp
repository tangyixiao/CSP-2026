#include<bits/stdc++.h>
using namespace std;
bool read[200005];
long long cc[200005],n,m,a[200005],da=0;
void DFS(long long n,long long k,long long m){
	if(m<k){
		long long adds=cc[1];
		for(long long i=2;i<=m;i++){
			adds&=cc[2];
			cout<<cc[1]<<" ";
		}
		da=max(da,adds);
		cout<<da<<endl;
		return;
	}
	for(long long i=1;i<=n;i++){
		if(read[i]==0){
			read[i]=1;
			cc[k]=a[i];
			DFS(n,k+1,m);
			read[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
	}
	DFS(n,0,m);
	cout<<da;
	return 0;
}
