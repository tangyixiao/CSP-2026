#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,m,a[N],b[N],c[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[a[j]]++;
			if(c[a[j]]==2){
				long long sum=j-1;
				while(c[a[j]]==2){
					c[a[sum]]--;
					sum--;
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(c[j]>=0){
				b[j]+=c[j];
			}
			c[j]=0; 	
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
} 