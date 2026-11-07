#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010],z[100010],top=0,q[100010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		top=0;
		for(int j=i;j<=n;j++){
			z[++top]=a[j];
			int l=top-1;
			while(z[l]!=z[top]&&l>0){
				l--;
			}
			int pp=top;
			if(z[l]==z[top]){
				for(int k=l;k<pp;k++){
					top--;
				}
			}
		}
		for(int j=1;j<=top;j++){
			q[z[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<q[i]<<" ";
	}
	return 0;
}


