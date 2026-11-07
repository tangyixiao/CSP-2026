#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[n+5]={};
	int s[n+5]={};
	int p[m+5]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=a[i];
	}
	for(int i=0;i<n;i++){//ci
		for(int j=1+i;j<=n;j++){//fang
			for(int z=1+i;z<=j-1;z++){//zhao
				if(s[j]==s[z]){
					for(int x=z;x<=j-1;x++){//na
						s[x]==0;
					}
				}
			}
		}
		//jieguo
		//ce
		for(int u=1;u<=n;u++){
			cout<<s[u]<<" ";
		}
		cout<<endl;
		
		
		
		//
		for(int z=1;z<=n;z++){//shu
			for(int j=1+i;j<=n;j++){//zhao
				if(s[j]==z){
					p[z]++;
					break;
				}
			}
		}
		for(int r=1;r<=n;r++){
			s[i]=a[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<p[m]<<" ";
	}
	return 0;
}
