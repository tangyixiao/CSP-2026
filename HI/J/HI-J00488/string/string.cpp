#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdin);
	int n,a=0,l=0,b[10000],c=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int ai,ci;
		cin>>ai>>ci;
		l+=ai;
		for(int j=0;j<ai;j++)
		{
			b[j+c]=ci;
		}
		c=ci;
	 } 
	 for(int k=0;k<l;k++)
	 {
	 	if(b[k]!=b[l+1-k])
	 	{
	 		a++;
		}
	 }
	 cout<<a;
	return 0;
}
