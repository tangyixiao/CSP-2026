#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[500005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w" ,stdout);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	
	}
	for(int cnt=1;cnt<=n;cnt++){
	
	for(int i=1;i<=n;i++){
	for(int j=1;j<i;j++){
		if(a[j]==a[i]){
			a[j]=0;
			a[j+1]=0;
		}
	}
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=0){
			b[a[i]]++;
					}
	}}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
