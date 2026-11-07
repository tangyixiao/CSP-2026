#include<iostream>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >>n;
	int a [100000];
	char b [100000];
	for(int i = 1;i <=n;i++) 
	{
	    cin >> a[i];
	    cin >> b[i];
	}
	int y = 0;
	int g = 0;
	int cnt = 0;
	while (true)
	{
		if( (1+y) == (n-g) )
		{
			break;
		}
		if(b[1+y] != b[n-g])
		{
			if(a[1+y] <=a[n-g])
			{
				cnt += a[1+y];
				if(a[1+y] == a[n-g])
				{
					y+=1;
					g+=1;
				}
				if(a[1+y] < a[n-g])
				{
					y+=1;
					a[n-g] = a[n-g] - a[1+y];
				}
			}
			else
			{
				cnt += a[n-g];
				g+=1;
				a[1+y] = a[1+y] - a[n-g];
			}
		}
		else{
			y += 1;
			g+=1;
		}
	}
	cout << cnt + 1;
	return 0;
}
