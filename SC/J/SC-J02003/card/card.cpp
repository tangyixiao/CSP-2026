#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long int s[500005],ans[300005],sum[300005],b[300005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen(card.in,'r',stdin);
	freopen(card.out,'w',stdout);
	cin>>n>>m;
	int a=1,lo=0;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		sum[i]=s[i];
	}
	long long c=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(sum[i]==c){
				b[j]=sum[i];
				c++;
			}
		}
	}
	for(int i=a;i<=n;i++){
		for(int j=a;j<i;j++){
			if(sum[i]==sum[j]){
				for(int k=j+1;k<=i;k++){
					lo++;
					sum[k]=sum[k+lo];
				}	
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(sum[i]==b[j]){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}