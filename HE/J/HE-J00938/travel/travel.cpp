#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1;
	cin >> s1;
	cin >> c2;
	cin >> s2;
	if(c1 == c2)
	{
		cout << 1;
		if(s1[0] == s2[0])
		{
			cout << 1;
			string a,b;
			a = s1[2];
			b = s2[2];
			if(s1[0] == s2[0]&&s1[1] == s2[1]&&c1[0] == c2[0]&&c1[1] == c2[1])
			{
				if(a == "D"&&b == "F"||a == "F"&&b == "D"||a != "D"&&b != "F"||a != "F"&&b != "D")
				{
					cout << 1;
					if(s1[0] == s2[0]||s1[1] == s2[1]||c1[0] == c2[0]||c1[1] == c2[1])
					{
					   if(a == "D"&&b == "F"||a == "F"&&b == "D"||a != "D"&&b != "F"||a != "F"&&b != "D")
					   {
					   	  if(a == "A"&&b == "B"||a == "B"&&b == "C"||a == "C"&&b == "A"||a != "A"&&b != "B"||a != "B"&&b != "C"||a != "C"&&b != "A")
					   	  {
					   	    cout << 1;
						  }
						  else
	                      {
		                    cout << 1<< 1 << 1<< 0;
	                      }
					   }	
					}
					
				}
				else
	            {
		            cout << 1<< 1 << 0<< 0;
	            }
			}
			else
	        {
		        cout << 1<< 0 << 0<< 0;
	        }
		}
		else
	    {
		    cout << 1<< 0 << 0<< 0;
	    }
	}
	else
	{
		cout << 0<< 0 << 0<< 0;
	}
} 
