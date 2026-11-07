#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a,b,c,d[200009];
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>d[i];
		
	}
	for(int i=1;i<=a;i++)
	{
		
		for(int o=i+1;o<=a;o++)
		{
			c=max(d[i]&d[o],c);
		}
	}
	cout<<c;
				return 0;
} 
