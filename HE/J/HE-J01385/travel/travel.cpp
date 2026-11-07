#include <bits/stdc++.h> 
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, s1u, s2u;
	if (c1 == c2)
	{	
		q1 = 1;
	    if (s1[0] == s2[0] && s1[1] == s2[1])
	    {
			q2 = 1;
			if (s1[2] == 'D' || s1[2] == 'F')
				s1u = 1;
			else 
				s1u = 0;
			if (s2[2] == 'D' || s2[2] == 'F')
				s2u = 1;
			else 
				s2u = 0;
			if (s1u == s2u)
			{	
				q3 = 1;
		        if (s1[2] == 'D' && s2[2] == 'F')
		        	q4 = 1;
		        if (s1[2] == 'F' && s2[2] == 'D')
		        	q4 = 1;
		        if (s1[2] == 'C' && s2[2] == 'B')
		        	q4 = 1;
		        if (s1[2] == 'C' && s2[2] == 'A')
		        	q4 = 0;
		        if (s1[2] == 'B' && s2[2] == 'C')
		        	q4 = 1;
		        if (s1[2] == 'B' && s2[2] == 'A')
		        	q4 = 1;
		        if (s1[2] == 'A' && s2[2] == 'B')
		        	q4 = 1;
				if (s1[2] == 'A' && s2[2] == 'C')
					q4 = 0;
	    	}
		}
	}
	cout << q1 << q2 << q3 << q4; 
	
		
}
