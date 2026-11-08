#include<bits/stdc++.h>
using namespace std;

int a[500005],n,m,b[500005],r,l,c[500005];

void sdf(){
	for(int i=0;i<n;i++){
		int k=-1;
		for(int j=0;j<i;j++){
			if(a[j]==a[i]){
				k=a[j];
				r=j;
				l=i;
				break;
			}
		}
		if(k==a[i])
			break;
	}
	for(int i=r;i<l;i++){
		a[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=m;j++){
			if(a[i]==j){
				c[j]+=1;
			}
		}
	}
	for(int i=0;i<500005;i++){
		b[i]=b[i+1];
		a[i]=b[i];
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		sdf();
	}
	for(int i=0;i<=n;i++){
		cout<<c[i];
	} 
	return 0;
}
