#include<bits/stdc++.h>

using namespace std;

int n,m,a[500005],b[500005],c[500005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	
	for(int h=1;h<=n;h++){
		for(int i=1;i<=n;i++)b[i]=0;
		for(int i=h;i<=n;i++){
			bool f=false;
			for(int j=1;j<i;j++){
				if(b[j]==a[i])f=true;
				if(f==true)b[j]=0;
			} 
			b[i]=a[i];	
		}
		for(int j=1;j<=n;j++)c[b[j]]++;
	}
	
	for(int i=1;i<=m;i++)cout<<c[i]<<' ';
	return 0;
} 
