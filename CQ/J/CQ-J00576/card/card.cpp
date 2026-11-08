#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],ton[300001],f=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.in","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i!=0)
		if((a[i]==a[i-1]||a[i]-1==a[i-1])){
			f++;
		}
	}
	if(f==n){
		for(int i=0;i<n;i++){
			if(i!=0){
				if(a[i]-1==a[i-1])
				cout<<i+1<<" ";
			}
		}
	}
	int t=n;
	int i=0;
	while(t--){
		int b[300001],c=0;
		for(int j=i;j<n;j++){
			bool f=1;
			for(int k=0;k<c;k++){
				if(a[j]==b[k]){
					c=k+1;
					f=0;
					break;
				}
			}
			if(f){
				b[c]=a[j];
				c++;
			}
		}
		i+=1;
		for(int j=0;j<c;j++){
			ton[b[j]]++;
		} 
	}
	for(int j=1;j<=m;j++){
		cout<<ton[j]<<" ";
	} 
	return 0;
} 
