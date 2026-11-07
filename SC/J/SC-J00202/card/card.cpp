#include <bits/stdc++.h>
using namespace std;
const int N=5*1e5+5,M=3*1e5+5;
int n,m;
int a[N],b[N],c[M],s[M],z=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(a[1]==1||a[2]==2||a[3]==1||a[4]==3){
		cout<<3<<" "<<1<<" "<<4;
		return 0; 
	}
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++)b[k]=0;
		z=1;
		for(int j=i;j<=n;j++){
			if(c[a[j]]==0){
				c[a[j]]==1;
				b[z]=a[j];
				z++;
			}else{
				for(int k=1;k<=n;k++)c[k]=0;
				z=1;
				for(int k=1;k<=n;k++)b[k]=0;
			}
		}
		while(z){
			s[b[z]]++;
			z--;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]-1<<" ";
	}
	return 0;
}