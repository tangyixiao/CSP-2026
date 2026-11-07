#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x,y,cnt;
	cin >> a >> b >> c >> d;
	for (int i = 0;i <=1;i++)
	{
		x += b[i];
		y += d[i];
	}
	if (a == c)
	{
		cnt = "1";
	}
	else
		cnt = "0"
	if (x == y && cnt == "1")
	{
		cnt += "1";
	}
	else{
		cnt = "0"
	}
	if (b[2] == "A" || b[2]== "B" || b[2] == "C" && d[2] == "A" || d[2]== "B" || d[2] == "C" && cnt == "11"){
		cnt += "1";
	}
	else{
		cnt = "0"
	}
	if (b[2] == "D" || b[2]== "F" && d[2] == "D" || d[2]== "F" && cnt == "11"){
		cnt += "1";
	}
	else{
		cnt = "0"
	}
	if (b[2] - 1 == d[2] - 1 || b[2] + 1 == d[2] && cnt == "111"){
		cnt += "1";
	}
	else{
		cnt = "0"
	}
	cout << cnt;
}
