#include<bits/stdc++.h>
using namespace std;
long long a[5005],c[5005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		long long b[5005]={0};
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]=j;
			}else if(b[a[j]]!=0){
				for(int k=b[a[j]];k<j;k++){
					b[a[k]]=0;
				}
				b[a[j]]=j;
			} 
		}
		int sum=0;
		for(int j=1;j<=m;j++){
			if(b[j]!=0){
				c[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
