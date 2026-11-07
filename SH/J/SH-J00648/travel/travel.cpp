#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin.tie(0)->sync_with_stdio(false);

	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;

	string col1 = s1.substr(0, 2);
	char alp1 = s1[2];
	string col2 = s2.substr(0, 2);
	char alp2 = s2[2];

	bool f1 = false, f2 = false, f3 = false, f4 = false;

	if (c1 == c2)
	{
		f1 = true;
		if (col1 == col2)
		{
			f2 = true;
			if (((alp1 == 'A' || alp1 == 'B' || alp1 == 'C') && (alp2 == 'A' || alp2 == 'B' || alp2 == 'C'))
			 || ((alp1 == 'D' || alp1 == 'F')                && (alp2 == 'D' || alp2 == 'F'))) // same side
			 {
			 	f3 = true;
			 	
			 	// divide 
			 	if ((alp1 == 'A' && alp2 == 'B') ||
				    (alp1 == 'B' && alp2 == 'A') ||
					(alp1 == 'B' && alp2 == 'C') ||
				   	(alp1 == 'C' && alp2 == 'B') ||
				 
				 	(alp1 == 'D' && alp2 == 'F') ||
				 	(alp1 == 'F' && alp2 == 'D'))
				{
				 	f4 = true;
				}
			 }
		}
	}

	cout << f1 << f2 << f3 << f4 << endl;

	return 0;
}

