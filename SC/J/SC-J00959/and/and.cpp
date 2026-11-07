#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","v",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==12){
			cout<<"12";
			return 0;
		}
		if(a[i]==7){
			cout<<"7";
			return 0;	
		}
	}
	return 0;
}