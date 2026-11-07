#include<bits/stdc++.h>
using namespace std;
int n,m,a[500500],b[300300],c[500500],l[500500];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];c[i]=a[i];
		l[i-1]=i;
	}
	l[n]=n+10;
	for(int st=1;st<=n;st++){
		for(int i=st;i<=n;i++){
			for(int j=st;j<i;j=l[j]){
				if(c[i]==c[j]){
					l[j]=i+1;
				}
			}
		}
		for(int i=st;i<=n;i=l[i]){
			b[c[i]]++;
		}
		for(int i=1;i<=n;i++){
			c[i]=a[i];
			l[i-1]=i;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
