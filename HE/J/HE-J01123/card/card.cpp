#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[5000],b[5000]={},c[5000]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int h=n;
	for(int i=1;i<=h;i++){
		h=n;
	for(int i=1;i<=h;i++){
		int c=0,g;
		int j;
		for(j=1;j<=n;j++){
			g=j;
			if(a[i]==a[j])
			break;
			else
			c++;
		}
		if(c==n){
			n++;
			a[n]=a[i];
		}
		else
		n=g;
	}
	for(int v=1;v<=n;v++){
	b[a[v]]++;
	}
	n=h;	
	}
	
	for(int i=1;i<=n;i++){
		if(c[a[i]]==0)
		cout<<b[a[i]]<<" ";
		c[a[i]]++;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
