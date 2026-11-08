#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,a[10000],c[10000]={},p=1,d[10000]={},s;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int d[10000]={};
		for(int k=i;k<=n;k++){
			if(d[a[k]]!=0){
				for(int j=1;j<=10000;j++){
					d[j]=0;
				}
				d[a[k]]++;
			}else{
				d[a[k]]++;
			}
		}
		for(int k=1;k<=m;k++){
			if(d[k]!=0){
				c[k]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i];
		if(i!=m){
			cout<<" ";
		}
	}
	return 0;
}
