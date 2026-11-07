#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s=n;
	while(s--){
		for(int y=s;y>=0;y--)
			b[y]=a[y];
		for(int i=0;i<n;i++){
			for(int j=1;j<n;j++){
				if(i!=j&&b[i]==b[j]){
					b[i]=-1;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]>0&&b[i]!=1)
			cout<<b[i]+1<<" ";
		else if(b[i]>0&&b[i]==1)
			cout<<b[i]<<" ";
	}
}
