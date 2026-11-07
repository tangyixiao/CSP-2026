#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("crad.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	int num[n+1];
	for(long long i=1;i<=n;i++){
		cin>>num[i];
	}
	long long ans[m+1]={0};
	
	for(long long i=1;i<=n;i++){
		int example[n+1];
		for(long long idx=1;idx<=n;idx++){
			example[idx]=num[idx];
		}
		for(long long h=i+1;h<=n;h++){
			for(long long g=i;g<=h;g++){
				if(example[h]==example[g]){
					for(long long j=g;j<h;j++){
						example[j]=0;
					}
				}
			}
			if(h==n){
				for(long long x=i;x<=n;x++){
					ans[example[x]]++;
				}
			}
		}
	}
	ans[num[n]]++;
	for(long long i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}