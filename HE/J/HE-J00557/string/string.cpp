#include<bits/stdc++.h>
using namespace std;

long long ans;
struct sr
{
	int size;
	char c;
}str[200010];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> str[i].size >> str[i].c;
	}
	int i = 1, j = n;
	while(i <= j)
	{
		//cout << i << " "<< j<< " ";
		if(str[i].c != str[j].c) 
		{
			ans += min(str[i].size, str[j].size);
			//cout << str[i].size << " " << str[j].size<< "\n";
		}
		
		if(str[i].size > str[j].size) str[i].size -= str[j].size, j--;
		else if(str[i].size < str[j].size) str[j].size -= str[i].size, i++;
		else i++, j--;
	}
	cout << ans;
} 
