#include<bits/stdc++.h>
using namespace std;
int n,m,a=1,sum;
string s[100005];
int maxn = 0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	
	int num;
	cin >> num;

	
	while(num!=0)
	{

		a = num%2+a*10;
		num/=2;
	}
	while(a!=0)
	{
		sum = sum*10+a%10;
		a/10;
	}
	cout << sum/10;
	
}
	
