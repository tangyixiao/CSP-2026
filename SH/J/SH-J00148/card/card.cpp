#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],num[300005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		int bs=1;
		memset(b,0,sizeof b);
		for(int j=i;j<=n;j++,bs++){
			for(int r=1;r<=bs;r++){
				if(a[j]==b[r]){
					for(int h=r;h<=bs;h++){
						b[h]=0;			
					}
				}
			}b[bs]=a[j];	
		}for(int t=1;t<=bs;t++){
			num[b[t]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0; 
}
