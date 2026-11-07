#include<bits/stdc++.h>
using namespace std;
int a[5005],b[5003],c[3003];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		int x=1;
		for(int j=1;j<=5000;j++){
			b[j]=0;
		}b[1]=a[i];
		for(int j=i+1;j<=n;j++){
			int t=1;
			for(int k=1;k<=x;k++){
				if(b[k]==a[j]){
					t--;
					for(int o=k+1;o<=x;o++){
						b[o]=0;
					}x=k;
					break;
				}
			}if(t){
				x++;
				b[x]=a[j];
			}
		}for(int j=1;j<=x;j++){
			c[b[j]]+=1;
		}
	}for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
} 
