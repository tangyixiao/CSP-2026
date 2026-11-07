#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;long long a[100002];char ch[100002];long long sum=0;string s="0";long long st=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i]>>ch[i];
		long long qj=a[i];
		while (qj!=0)
		{
			s+=ch[i];
			qj--;
		}
		sum+=a[i];
	}
	for (int i=1;i<(sum+1)/2;i++)
	{
		if(s[i]!=s[sum-i+1])st++;
	}
	cout<<st;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
