#include<bits/stdc++.h>
using namespace std;
int rc,rl,xc,xl;
string rs,xs;
char rt,xt;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> rc >> rs >> xc >> xs;
	rl = (rs[0] - '0') * 10 + (rs[1] - '0');
	xl = (xs[0] - '0') * 10 + (xs[1] - '0');
	rt = rs[2];
	xt = xs[2];
	if(rc == xc)
	{
		if(rl == xl)
		{
			bool a = ('A' <= rt && rt <= 'C'),b = ('A' <= xt && xt <= 'C');
			if(a == b)
			{
				
				if(((int)(rt - xt) == 1 || (int)(xt - rt) == 1) || a == 0)
				{
					cout << 1111;
				}
				else
				{
					cout << 1110;
				}
			}
			else
			{
				cout << 1100;
			}
		}
		else
		{
			cout << 1000;
		}
	}
	else
	{
		cout << "0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 