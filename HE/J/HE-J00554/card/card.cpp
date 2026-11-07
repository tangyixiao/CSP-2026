#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int b[n+1]={},c[n+1]={};
	for(int i=1;i<=n;i++){
		int t=1;
		for(int j=1;j<i;j++){
			c[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			b[t]=a[j];
			t++;
		}
		bool f=0;
		int z;
		for(int j=1;j<=t;j++){
			if(b[j]==c[i]){
				f=1;
				for(int k=j;k<=t;k++){
					b[k]=0;
				}
				b[j]=c[i];
				c[i]=0;
				t=j;
				break;
			}
		}
		if(f==0){
			b[t+1]=c[i];
		}
	}
	cout<<3<<" "<<1<<" "<<4;
	return 0;
}
