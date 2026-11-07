#include<iostream>
using namespace std;
int a[500050];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	bool isok=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i+1])
			isok=0;
	}
	if(isok)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<"0 ";
		}
	}
	else{
		 
		
	}
	return 0;
}

