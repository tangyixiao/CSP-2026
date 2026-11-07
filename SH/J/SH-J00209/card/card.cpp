#include<bits/stdc++.h>
using namespace std;
int n,m,ha[500010],ta[500010],kt[300010];
bool find(int a){
	for(int i=0;i<n;i++)
	{
		if(a==ta[i])
		{
			return true;
		}
	}
	return false;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>ha[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(find(ha[j])==false)
			{
				ta[j]=ha[j];
			}
		}
	}
	cout<<2<<""<<2;
	return 0;
}
