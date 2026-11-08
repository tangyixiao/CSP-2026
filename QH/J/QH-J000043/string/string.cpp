#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n;
long long a,num,sum;
char b;
string ans;
int main()
 {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>b;
		for(int j=sum+1;j<=a+sum;j++)
		{
			ans[j]=b;
		}
		sum+=a;
	} 
	for(int i=1;i<=sum/2+1;i++)
	{
		if(ans[i]!=ans[sum+1-i])
	 	{
			num++;
	 	}
	}
	cout<<num;
	return 0; 
}
