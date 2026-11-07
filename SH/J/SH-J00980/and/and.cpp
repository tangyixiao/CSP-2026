#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
int a[N],n,m;
//string s[N];
/*
string check(int num)
{
	int n1 = num;
	string an = "";
	while(n1)
	{
		an += to_string(n1 % 2);
		n1 /= 2;
	}
	reverse(an.begin(),an.end());
}
*/
bool cmp(int x,int y)
{
	return x > y;
}
int ans;

int main()
{
	freopen("and1.in","r",stdin);
    freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i =  1;i <= n;i++)
	{
		cin >> a[i];
		//s[i] = check(a[i]);
		//cout << endl << s[i] << endl;
	}
	
	sort(a+1,a+n+1,cmp);
	
	for(int i = 2;i <= m;i++)
	{
		a[i] = a[i-1] & a[i];
	}
	cout << a[m];

return 0;
}

