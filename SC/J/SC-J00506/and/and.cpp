#include<bits/stdc++.h>
using namespace std;
int zt,mx=-1,y,n,m,ls,a[200006],b[200006],c[200006][36];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int s=a[i],j=30;
		while(s!=0){
			c[i][j]=s%2;
			j--;
			s/=2;	
		}
	}
	for(int i=1;i<=30;i++){
		y=0,ls=0;
		for(int j=1;j<=n;j++){
			if(c[j][i]==1) y++,ls=i;
		}
		if(y>=m){
			for(int j=1;j<=n;j++){
				if(c[j][ls]==1){
					b[j]=1;
				}
			}
			zt=1;
		}
		if(zt==1) break;
	}
	for(int i=1;i<=n;i++) if(b[i]==1) mx=max(mx,a[i]);	
	cout<<mx;
	return 0;
}