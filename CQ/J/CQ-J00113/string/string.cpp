#include<bits/stdc++.h>
using namespace std;
int n,j;
long long a[200001],siv[200001],sum;
char c[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	j=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		siv[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		while(siv[i]!=0){
			for(;j>=1;j--){
				if(c[i]==c[j]){
					siv[i]-=min(siv[i],siv[j]);
					siv[j]-=min(siv[i],siv[j]);
					if(siv[i]==0)break;
				}
				else{
					sum+=min(siv[i],siv[j]);
					siv[i]-=min(siv[i],siv[j]);
					siv[j]-=min(siv[i],siv[j]);
					if(siv[i]==0)break;
					
				}
			}
		}
	}
	cout<<sum;
	return 0;
} 
