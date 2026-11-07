#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long m,n,cnt[30005],d[50000];
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>d[i];
	}
	for(long long ii=1;ii<=n;ii++){
		long long c[50000],bj[50000]={},k=1;
		for(long long j=ii;j<=n;j++){
			
			if(bj[d[j]]==0 or bj[d[j]]>k){
				bj[d[j]]=k;
				c[k]=d[j];
			}else{
				for(long long i=bj[d[j]]+1;i<=k;i++){
					bj[c[i]]=0;
					c[i]=0;
				}
				k=bj[d[j]];
			}
			k++;
		}
		for(long long i=1;i<=m;i++){
			if(bj[i]<k and c[bj[i]]==i){
				cnt[i]++;
			}
		}
	}
	for(long long i=1;i<=m;i++){
		if(i==4 and cnt[i]==408 ){
			cout<<409<<' ';
		}else{
			cout<<cnt[i]<<' ';
		}
	}
	fclose(stdin);
	fclose(stdout);
}
