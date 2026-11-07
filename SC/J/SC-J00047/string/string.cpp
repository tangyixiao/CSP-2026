#include <iostream>
using namespace std;

long long n,cnt,j;
struct node
{
	long long n;
	string s;
}ls[20005];
node fire[20005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ls[i].n>>ls[i].s;
		fire[i].n=ls[i].n;
		fire[i].s=ls[i].s;
	}
	node txt;
	txt.n=0;
	int i;
	
	i=1;
	j=n-i+1;
	
	while (i!=j)
	{
		if (fire[i].n>fire[j].n)
		{
			if (fire[i].s!=fire[j].s) cnt+=fire[j].n;
			fire[i].n-=fire[j].n;
			
			j--;
			
		}
		else if (fire[i].n<fire[j].n)
		{
			if (fire[i].s!=fire[j].s) cnt+=fire[i].n;
			fire[j].n-=fire[i].n;
			fire[j].n=0;
			
			
			i++;
		}
		else if (fire[i].n==fire[j].n)
		{
			if (fire[i].s!=fire[j].s) cnt+=fire[i].n;
			fire[j].n-=fire[i].n;
			fire[i].n=0;
			fire[j].n=0;
			fire[i].n=0;
			if (fire[i].s!=fire[j].s) cnt+=fire[i].n;
			i++;
			j--;
			
	
			if (i-j==1) break;
		}

	}
	cout<<cnt;
	return 0;
}