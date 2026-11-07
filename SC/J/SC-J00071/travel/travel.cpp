#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e5+10;

string a1,c1,a2,c2;

ll h(char c)
{
	return (c>='A' && c<='C');
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a1 >> c1 >> a2 >> c2;
	if(a1!=a2) cout << "0000\n";
	else if((c1[0]+c1[1]) != (c2[0]+c2[1])) cout << "1000\n";
	else if(h(c1[2])!=h(c2[2])) cout << "1100\n";
	else if(abs((c1[2]-'A')-(c2[2]-'A'))>1) cout << "1110\n";
	else cout << "1111\n";
	return 0;
}