#include<bits/stdc++.h> 
using namespace std;
int a[500005],b[500005],z[500005],c[500005],top;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) b[j]=0;
		top=i-1;
		for(int j=i;j<=n;j++){
			z[++top]=a[j];
			b[j]=0;
			if(b[z[top]]!=0&&b[z[top]]<top&&b[z[top]]>=i) top=b[z[top]];
			else b[z[top]]=top;
		}
		for(int j=i;j<=top;j++){
			c[z[j]]++;
		} 
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<' ';
	return 0;
}
//