#include<iostream> 
using namespace std;
int main () 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1;
	int c2;
	char s1;
	char s2; 
	char a,b,c,d,e,f,g,h;
	cin >> c1;
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	cin >> c2;
	e = getchar();
	f = getchar();
	g = getchar();
	h = getchar();
	if(c1 == c2)
	{
		cout << "1";
	    if(b == f and c == g )
	    {
	    	cout << "1";
	    	if(((((d == 'A' and (h == 'B' or h == 'C')) or (d == 'B' and (h == 'A' or h == 'C'))) or (d == 'C' and (h == 'A' or h == 'B'))) or (d == 'D' and h == 'F')) or (d == 'F' and h == 'D')) 
	    	{
	    		cout << "1";	
	    		if ((d == 'A' and h== 'C') or (d == 'C' and h =='A'))
	    		{
	    			cout << "0";
				}
				else{cout << "1";
				}
			}
			else{cout << "00";};
		}
		else{cout << "000";};
	}
	if(c1 != c2)
	{
		cout << "0000";
	}
	return 0;
}
