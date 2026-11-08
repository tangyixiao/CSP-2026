#include <iostream> 
#include <string>
using namespace std;

long long n,kk;
string o,k;
long f;
int main()
{
	cin >> n;
	for(long long i = 0;i < n;i++)
	{
		long long a;
		string u;
		cin >> a >> u;
		k = u;
		for(long long l = 0; l < a;l++)
		{
			string p;
			p += u;
			o += p;
			if(u == k)
			{
				kk = 1;
			}
			else
			{
				f++;
			}
		}
	}
	if(kk >= 1)
	{
		cout << 0; 
	}
	else
	{
		cout << f/2;
	}
	return 0;
}
