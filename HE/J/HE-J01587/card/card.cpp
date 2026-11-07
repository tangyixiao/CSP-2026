#include<bits/stdc++.h>
using namespace std;
long long a[200001],an[200002]={0};

int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int u=1;u<=n;u++){
		long long a1[200001];
		long long p=-1;
		for(int i=u;i<=n;i++){
			bool fa=0;
			for(int j=0;j<=p;j++){
				if(a[i]==a1[j]){
					p=p-j-1;
					fa=1;
				}
			}
			if(!fa){
				p++;
				a1[p]=a[i];
			}
		}
		
			for(int k=1;k<=m;k++){
				for(int j=0;j<=p;j++){
					if(a1[j]==k){
						an[k]++;
						break;
					}
				}
			}
	}
	for(int i=1;i<=m;i++){
		cout<<an[i]<<" ";
	}
	return 0;
} 
