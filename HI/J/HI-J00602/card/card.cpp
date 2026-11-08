#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+10;
int a[N],b[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		b[i]=n;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=j-1;k>=i;k--){
				if(a[j]==a[k]){
					for(int c=k;c<j;c++){
						b[a[c]]--;
						a[c]=0;
					}
				}
			}
		}	
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}

