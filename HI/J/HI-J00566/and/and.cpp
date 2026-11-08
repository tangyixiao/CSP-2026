#include<bits/stdc++.h>
using namespace std;
long long a,b;
int c[10000000000],p[10000000000],u,j;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=1;i<=a;i++){
		int u;
		cin>>u;
		c[i]=u;
		for(int j=0;j<=a-j;j++)
		int p;
		p[j]=c[i]&c[j];
        for(int u=0;u<=j/2;u++)
		if(p[u]>=p[u+1])
		cout<<p[u];
		else
		cout<<p[u+1];	
	}
	cout<<p[u];
	return 0;
}
