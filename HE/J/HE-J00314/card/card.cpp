#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[20010];
int c[30010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int k=1;
	while(k<=n-1){
		int p=n-k;
		bool b[30010]={0};
		for(int i=k;i<=n;i++){
			if(b[a[i]]==0){
				b[a[i]]++;
			}
			else{
				for(int j=1;i<=m;j++){
					b[j]=0;
				}
			}
		}
		for(int i=1;i<=m;i++){
			if(b[i]==1) c[i]++;
		}
		k++;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
} 
