#include <iostream>
using namespace std;

int main()
{
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int sn=(s1[0]-'0')*10+(s1[1]-'0');
	int sm=(s2[0]-'0')*10+(s2[1]-'0');
	char cn=s1[2];
	char cm=s2[2];
	if (c1==c2)
	{
		cout << 1;
		if (sn==sm)
		{
			cout << 1;
			if ((cn<='C'&&cm<='C')||(cn>='D'&&cm>='D'))
			{
				cout << 1;
				if (abs(cn-cm)==1)
					cout << 1;
				else cout << 0;
			}
			else cout << 0 << 0;
		}
		else cout << 0 << 0 << 0;		
	}
	else cout << 0 << 0 << 0 << 0;
	return 0;
} 
