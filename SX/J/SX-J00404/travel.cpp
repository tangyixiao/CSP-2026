#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r","stdin")
	freopen("travel.out","w","stdout")
	string s,c,ss,cc;
	cin >> c >> s >> cc >> ss;
	if(c == cc)
		cout << 1;
	else
		cout << 0;
	for(int i = 0;i <= 1;i++)
	{
		if(s[i] == ss[i])
			cout << 1;
		else
			cout << 0;
	}
	if(s[2] + 1 == ss[2]||s[2]-1 == ss[2])
		cout << 1;
	else
		cout << 0;
	return 0;
}