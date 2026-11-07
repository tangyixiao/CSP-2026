#include <iostream>
using namespace std;
int main()
{
	int n,cnt;
	cin >> n;
	string s;
	for (int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin >> a >> c;
		for (int i=1;i<=a;i++)
			s+=c;
	}
	int l=s.size();
	s=' '+s;
	for (int i=1;i<=l;i++)
	{
		if (s[i]!=s[l+1-i])
		{
			cnt++;
			s[l+1-i]=s[i]; 
		}
	}
	cout << cnt;
	return 0;
}
