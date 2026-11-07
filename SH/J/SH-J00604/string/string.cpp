#include <bits/stdc++.h>
using namespace std;
long long n=0;
long long lengt=0;
string strr;
long long checkk()
{
	long long cnnt=0;
	for(long long i=0;i<lengt/2;i++)
	{
		if(strr[i]!=strr[lengt-i-1])
		{
//			cout<<i<<strr[i]<<' '<<lengt-i-1<<strr[lengt-i-1]<<endl;
			cnnt++;
		}
	}
	return cnnt;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		long long bn;
		char ch;
		cin>>bn;
		cin>>ch;
		lengt+=bn;
		for(long long i=1;i<=bn;i++) strr+=ch;
	}
//	cout<<lengt<<endl;
//	for(int i=0;i<lengt;i++) cout<<strr[i];
//	cout<<endl;
	long long ansss=checkk();
	cout<<ansss;
	return 0;
}
