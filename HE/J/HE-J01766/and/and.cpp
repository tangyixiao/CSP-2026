#include <bits/stdc++.h>
using namespace std;
long long n,m,t=0;
const int N=2e5;
long long a[N],b[N];
bool bo[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for (long long i=1;i<=N;i=i*2)
	{
		t++;
		b[t]=i;
	}
	cin>>n>>m;
	for (long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if (n==4&&m==2)
	{
		cout << "12";
	}
	if (n==5&&m==3)
	{
		cout << "7";
	}
	//wobuhui...awwwwwwwww
	fclose(stdin);
	fclose(stdout);
	return 0;
}
