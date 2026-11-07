#include<bits/stdc++.h>
using namespace std;
int n,a[200005],c[200005],m,b[3005][3005],o;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i][0]++;
		b[i][b[i][0]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			if(b[a[j]][0]>=2){
				for(int p=j;p<=b[a[j]][b[a[j]][0]];p++){
					c[p]=-1;
				}
			}
			j=b[a[j]][b[a[j]][0]];
		}
		for(int j=i;j<=n;j++){
			if(a[j]==i)o++;
		}
	}
	cout<<o;
	return 0;
}
