#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin >> c1 >> c2 >> c3 >> c4;
	if(c1!=c3)
	{
		cout << "0000" << endl;
		return 0;
	} 
	if(c2[0]!=c4[0]||c2[1]!=c4[1])
	{
		cout << "1000" << endl;
		return 0; 
	}
	if(c2[2]>='A'&&c2[2]<='C'&&c4[2]>='A'&&c4[2]<='C')
	{
		if(c2[2]+1==c4[2]||c4[2]+1==c4[2])
		{
			cout << "1111" << endl;
			return 0;
		}
		cout << "1110" << endl;
		return 0;
	}
	if((c2[2]=='D'&&c4[2]=='E')||(c2[2]=='E'&&c4[2]=='D'))
	{
		cout << "1111" << endl;
		return 0;
	}
	cout << "1100" << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
