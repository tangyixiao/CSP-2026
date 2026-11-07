#include <bits/stdc++.h>
using namespace std;
int n;
string total;
long long cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int num;
		char c;
		cin>>num>>c;
		for(int i=1;i<=num;i++)
			total+=c;
	}
	cout<<total<<endl;
	long long len=total.size();
	for(int i=0;i<len/2;i++)
	{
		if(total[i]!=total[len-1-i])
			cnt++;
	}
	cout<<cnt;
	return 0;
}
