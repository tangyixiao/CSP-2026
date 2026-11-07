#include<iostream>
#include<string>
using namespace std;
int cnt = 0;
string a;
int main()
{
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	int n;
	cin >> n;
	string k;
	int sum = -1;
	for(int i = 1;i <= n;i++) 
	{
		cin >> cnt >> a;
		for(int i = 0;i < cnt;i++) k += a;
	};
	long long gs = 0;
	for(int i = 0;i < k.size();i++)
	{
		if(k[i] != k[k.size() - i - 1]) gs++;
	}
	gs /= 2;
	cout << gs;
	return 0;
}