#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b,c[10009],d[10009];
	cin>>a>>b;
	for(int i=0;i<a;i++)
		cin>>c[i];
	for(int i=0;i<a;i++)
		d[c[i]]++;
	d[c[a-1]]=a;
	for(int i=1;i<=b;i++)
		cout<<d[i]<<" ";
	return 0;
}
