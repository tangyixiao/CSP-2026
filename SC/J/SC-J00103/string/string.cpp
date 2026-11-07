#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int N;
	cin>>N;
	string a = "";
	for(int i = 0;i<N;++i)
	{
		int t;
		cin>>t;
		char c;
		cin>>c;
		for(int i = 0;i<t;++i)
		{
			a.push_back(c);
		}
	}
	
	int n = a.size();
	int middle = 0;
	
	if(n%2)
	{
		middle = n/2+1;
		
	}
	else
	{
		middle = a.size()/2;
	}
	
	int ans = 0;
	
	for(int i = 0;i<middle;++i)
	{
		char first = a[i];
		char last = a[n-1-i];
		if(first != last) ans++;
	}
	cout<<ans<<endl;
	
	
	return 0;
}