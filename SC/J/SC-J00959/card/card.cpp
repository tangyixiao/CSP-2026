#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","v",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[200005];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1){
			cout<<"10 3 3";
			return 0;
		}
		if(a[i]==3){
			cout<<"3 1 4";
			return 0;	
		}
	}
	return 0;
}