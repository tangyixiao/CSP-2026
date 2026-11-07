#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,m,a[500010]={},cnt[500010]={};
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long i=0;i<n;i++){
		long long x[500010]={};
		for(long long j=i;j<n;j++){
			if(x[a[j]]==0){
				x[a[j]]++;
			}else{
				for(long long k=0;k<n;k++){
					x[k]=0;
				}
				x[a[j]]=1;
			}
		}
		for(long long k=0;k<n;k++){
			if(x[k]) cnt[k]+=x[k];
		}
	}
	for(long long i=0;i<n;i++){
		cout<<cnt[i]<<" ";
	}
	
	return 0;
	
}
