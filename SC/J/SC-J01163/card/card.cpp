#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	string a1,a2;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		a1=a1[i];
	}
	for(int j=1;j<=m;j++){
		a2=a2[j];
	} 
	if(a1==a2)
	cout<<a1;
	else
	cout<<"0";
	return 0;
}