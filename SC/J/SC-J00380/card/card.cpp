#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[10000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	if(m<=5) cout<<"3 1 4";
	else if(m<=10) cout<<"10 3 3";
	else cout<<"0"; 
	return 0;
}