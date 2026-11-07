#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005],n,num,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}for(long long i=1;i<=m;i++){
		long long mx=-2e10,o;
		for(long long j=1;j<=n;j++){
			if(a[j]>mx&&!b[j]){
				mx=a[j];
				o=j;
			}
		}b[o]=1;
		if(i==1){
			num=mx;
		}else{
			num=(num&mx);
		}
	}cout<<num;
	return 0;
}
