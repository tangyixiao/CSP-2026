#include <iostream>
using namespace std;

int A = A,B = B,C = C,D = D,E = E;
int a,b,c;
int d,e,f; 
int main()
{
	cin >> a >> b >> c >> d >> e >> f;
	if(a == d)
	{
		cout << 1 ;
	}
	else
	{
		cout << 0;
	}
	if(b == e)
	{
		cout << 1 ;
	}
	else
	{
		cout << 0;
	}
	if(c != A && c != B && c != C)
	{
		if(f != A && f != B && f != C)
		{
			cout << 1;
		} 
		else
		{
			cout << 0;
		}
	}
	if(c != D && c != E)
	{
		if(f != D && f != E)
		{
			cout << 1;
		} 
		else
		{
			cout << 0;
		}
	}
	for(int i = 0;i < 1;i++)
	{
		if(c == A)
		{
			if(f == B)
			{
				cout << 1;
				break;
			} 
			else
			{
				cout << 0;
				break;
			}
		}
		if(c == B)
		{
			if(f == C)
			{
				cout << 1;
				break;
			} 
			else
			{
				cout << 0;
				break;
			}
		}
		if(c == C)
		{
			if(f == D)
			{
				cout << 1;
				break;
			} 
			else
			{
				cout << 0;
				break;
			}
		}
		if(c == D)
		{
			if(f == E)
			{
				cout << 1;
				break;
			} 
			else
			{
				cout << 0;
				break;
			}
		}
		if(c == B)
		{
			if(f == A)
			{
				cout << 1;
				break;
			} 
			else
			{
				cout << 0;
				break;
			}
		}
		if(c == C)
		{
			if(f == B)
			{
				cout << 1;
				break;
			} 
			else
			{
				cout << 0;
				break;
			}
		}
		if(c == D)
		{
			if(f == C)
			{
				cout << 1;
				break;
			} 
			else
			{
				cout << 0;
				break;
			}
		}
		if(c == E)
		{
			if(f == D)
			{
				cout << 1;
				break;
			} 
			else
			{
				cout << 0;
				break;
			}
		}
	}
	return 0;
}
