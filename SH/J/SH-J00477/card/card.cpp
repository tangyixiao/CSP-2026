#include<bits/stdc++.h> 
using namespace std;
int n,m,a[1111111],c[1111111],b[1111111];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int e=1;e<=n;e++){
		for(int i=e;i<=n;i++){
			for(int o=e;o<=i;o++){
				if(b[i]==b[o]){
				
					for(int j=o;j<=i-1;j++){
						b[j]=0;
					}
					break;
				}
			}
		}
		for(int i=e;i<=n;i++){
			c[b[i]]++;
		}
		for(int i=1;i<=n;i++){
			b[i]=a[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
} 
