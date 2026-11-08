#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,cc,ss;
	cin >> c >> s >> cc >> ss;
	string r="",rr="",rrr="",rrrr="";
	r = c[0] + c[1];
	rr = cc[0] + cc[1];
	if (r == rr) cout << 1;
	else
	{
		cout <<0<<0<<0<<0; return 0;	
	}
	rrr = s[0] + s[1];
	rrrr = ss[0] + ss[1];
	if (rrr == rrrr) cout << 1;
	else
	{
		cout <<0<<0<<0; return 0; 	
	} 
	string ddd = "ABCDF";int cnt=0;
	for (int i=0;i<ddd.size();i++)
	{
		if (s[2] == ddd[i]&&ss[2] == ddd[i+1])
		{
			if (s[2] != 'C') cout << 1;
			else if(s[2] == 'C')
			{
				cout << 0 << 0;break;
			}
			else cout << 0;
			cout << 1;
		}
		else if (s[2] == ddd[i]&&ss[2] == ddd[i-1])
		{
			if (s[2] != 'D') cout << 1;
			else if(s[2] == 'D')
			{
				cout << 0 << 0;break;
			}
			else cout << 0;
			cout << 1;
		}
		else if (s[2]==ddd[i] && ss[2]==ddd[i+2])
		{
			if (s[2]=='A')
			{
				cout << 1 << 0; break;	
			}else{
				cout << 0 << 0; break;
			}
		}
		else if (s[2]==ddd[i] && ss[2]==ddd[i-2])
		{
			if (s[2]=='C')
			{
				cout << 1 << 0; break;	
			}else{
				cout << 0 << 0; break;
			}
		}
		else if (s[2]==ddd[i] && ss[2]==ddd[i+3]) cout << 0 << 0;
		else if (s[2]==ddd[i] && ss[2]==ddd[i-3]) cout << 0 << 0;
		else if (s[2]==ddd[i] && ss[2]==ddd[i+4]) cout << 0 << 0;
		else if (s[2]==ddd[i] && ss[2]==ddd[i-4]) cout << 0 << 0;
		else cnt++;
		if (cnt == 5) cout << 0;
	}
	return 0;
}
