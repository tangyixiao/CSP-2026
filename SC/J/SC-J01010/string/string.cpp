#include<bits/stdc++.h>
using namespace std;
vector <char> arr;
vector <char> arr1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long s,len=0,m=0,ans=0;
	char str1; 
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s>>str1;
		len=len+s;
		for(int j=m;j<m+s;j++)
		{
			arr[j]=str1;
			arr1[j]=str1;
		}
	}
	reverse(arr.begin(),arr.end());
	for(int i=0;i<len;i++)
	{
		if(arr[i]!=arr1[i])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;	
}  