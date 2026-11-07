#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[n],r[n];
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
		r[i] = 0; 
	}
	for (int i = 0;i < n;i++)
	{
		int j = 0;
		int b = 1;
		while(a[i] > 0)
		{
			r[i] += (a[i] % 2) * b << " ";
			a[i]=a[i]/2;
			j++;
			b*=10;
		}
	}
	int max = 0;
	for(int i = 0;i < n;i++)
	{
		if (max < (r[i] ^ r[i+1]))
		{
			max += a[i] + a[i + 1];
		}
	}
	cout << max;
	return 0;
}
