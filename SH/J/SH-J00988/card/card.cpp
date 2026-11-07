#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],z[M],l,c[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bool flag=0;
			int gg=0;
			for(int o=1;o<=l;o++){
				if(a[j]==z[o]){
					flag=1;
					gg=o;
					break;
				}
			}if(flag==1) l=gg;
			else l++;
			z[l]=a[j];
		}for(int k=1;k<=l;k++) c[z[k]]++;
		l=0;
	}for(int i=1;i<=m;i++) cout<<c[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
