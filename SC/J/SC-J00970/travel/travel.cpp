#include <bits/stdc++.h>
using namespace std;

bool cheek(char a, char b)
{
	if (a=='A' && b=='B')
		return 1;
	else if (a=='B' && b=='C')
		return 1;
	else if (a=='D' && b=='F')
		return 1;
	else
		return 0;
}

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	if (c1 == c2)
		cout << 1;
	else
		cout << "0000";
	
	int n1, n2;
	n1=n2=0;
	for(int i=0;i<2;i++)
	{
		n1 = n1*10 + int(s1[i]);
		n2 = n2*10 + int(s2[i]);
	}
	
	if (n1 == n2)
	{
		cout << 1;
		if ((s1[2]<'D'&&s2[2]<'D') || (s1[2]>'C'&&s2[2]>'C'))
		{
			cout << 1;
			if ( cheek(s1[2], s2[2]) )
				cout << 1;
			else
				cout << 0;
		}
		else
			cout << "00";
	}
	else
		cout << "000";
	
	cout << "\n";
	return 0;
}