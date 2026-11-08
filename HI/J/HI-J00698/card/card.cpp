#include<iostream> 
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[1000];
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		int num=0;
		num = a[0];
		if(a[1]==a[0])
		{
			num = a[1];
		}
		if(a[2]==a[1])
		{
			num = a[2];
		}
		cout << num;
	}
	return 0;
}
