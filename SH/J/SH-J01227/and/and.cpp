#include<bits/stdc++.h>
using namespace std;
int n,m;
long long nn[100005],sum=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>nn[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			sum=max(sum,nn[i]);
		}
		cout<<sum;
	}else if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				sum=max(sum,nn[i]&nn[j]);
			}
		}
		cout<<sum;
	}else if(m==n){
		sum=nn[1]&nn[2];
		for(int i=3;i<=n;i++){
			sum&=nn[i];
		}
		cout<<sum;
	}
	return 0;
} 
