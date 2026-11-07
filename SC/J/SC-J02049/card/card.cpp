#include<bits/stdc++.h>
using namespace std;
int a[500005],b[300005],d[300005];
bool c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,l=0,nx;
	cin>>n>>m;
	nx=n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int k=1;k<=nx;k++){
		for(int i=1;i<=n;i++){
			if(c[a[i]]!=0){
				for(int j=l;j>=1;j--)
					if(b[j]==a[i])	break;
					else {
						b[j]=0;
						l--;
					}
			}
			else{
				b[++l]=a[i];
				c[a[i]]=1;
			}
		}
		for(int i=1;i<=l;i++)
			d[b[i]]++;
		for(int i=1;i<=n;i++)
			a[i]=a[i+1];
		n--;
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
	}
	
	for(int i=1;i<=m;i++)
		cout<<d[i]<<" ";
	return 0;
} 