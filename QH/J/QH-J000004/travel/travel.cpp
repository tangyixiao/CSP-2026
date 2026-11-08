#include <iostream>
#include <cstdio>
using namespace std;

int cti(char c[3])
{
	return (c[0]-'0')*10+(c[1]-'0');
}

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int c1,c2;
	char s1[3],s2[3];
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2)
	{
		cout << '1';
		if(cti(s1)==cti(s2))
		{
			cout << '1';
			char x=s1[2],y=s2[2];
			if((x=='F'&&y=='D') || (x=='D' && y=='F') || (x=='A' && (y=='B' || y=='C')) || (x=='B' && y=='C') || (y=='A' && (x=='B' || x=='C')) || (y=='B' && x=='C'))
			{
				cout << '1';
				if(x+1==y || x-1==y)
				{
					cout << '1';
				}
				else cout << '0';
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
