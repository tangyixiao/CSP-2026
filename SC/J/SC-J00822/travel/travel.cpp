#include<bits/stdc++.h> 
using namespace std;

string c,s,C,S,n,N;
char z,Z;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> c >> s >> C >> S;
	for(int i = 0;i < 3;i++) 
	{
		if(isdigit(s[i])) n += s[i];
		else z = s[i];
	}
	for(int j = 0;j < 3;j++) 
	{
		if(isdigit(S[j])) N += S[j];
		else Z = S[j];
	}
	if(c != C) 
	{
		cout << "0000";
		return 0;
	}
	else
	{
		cout << "1";
		if(n != N)
		{
			cout << "000";
			return 0;
		}
		else
		{
			cout << "1";
			if((z == 'D' || z == 'F') && (Z == 'D' || Z == 'F')) cout << "11";
			else if(z >= 'A' && z <= 'C' && Z >= 'A' && Z <= 'C')
			{
				cout << "1";
				if(z == 'B' || Z == 'B') cout << "1";
				else cout << "0";
			}
			else cout << "00";
		}
	}
	return 0;
}