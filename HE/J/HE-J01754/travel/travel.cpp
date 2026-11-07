#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	
	//Q1
	if (c1 == c2)
	{
    	cout << 1;
	}
	else
	{
	    cout << 0;
	}
	
	//Q2
    if (c1 == c2)
	{
        if (s1[0] == s2[0] and s1[1] == s2[1])
    	{
    		cout << 1;
        }
        else
        {
        cout << 0;
    	}
    }
    else
    {
    	cout << 0;
	}
    		
    //Q3
    if (c1 == c2)
	{
        if (s1[0] == s2[0] and s1[1] == s2[1])
    	{
    		if (((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || ((s1[2] == 'E' || s1[2] == 'F') && (s2[2] == 'E' || s2[2] == 'F')))
    		{
    			cout << 1;
			}
			else
			{
				cout << 0;
			}
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << 0;
	}
	
	//Q4
	if (c1 == c2)
	{
        if (s1[0] == s2[0] and s1[1] == s2[1])
    	{
			if ((s1[2]+1-1 >= 'A' && s1[2]+1-1 <= 'C') && (s2[2]+1-1 >= 'A' && s2[2]+1-1 <= 'C'))
			{
				if (((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || ((s1[2] == 'E' || s1[2] == 'F') && (s2[2] == 'E' || s2[2] == 'F')))
    	    	{
					if (s1[2]+1-1 == s2[2] + 1 || s1[2]+1-1 == s2[2] - 1)
					{
						cout << 1;
					}
		            else if ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))
                 	{
		           	cout << 1;
	                }
	               else
	                {
	               	cout << 0;
		            }
				}
				else
				{
					cout << 0;
				}
			}
		    else if ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))
        	{
		    	cout << 1;
	        }
	        else
	        {
	        	cout << 0;
			}
	    }
	    else
	    {
	    	cout << 0;
		}
    }
    else
    {
	    cout << 0;
	}
	
	return 0;
}
