#include <iostream>
using namespace std;
string a;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int o=0;
	char p=0;
	a="";
	for(int x=0;x<n;x++)
	{
		cin>>o>>p;
		for(int y=0;y<o;y++)
		{
			a+=p;
		}
		
	}
	long long sum=0;
	int i=0,j=a.size()-1;
	while(i<j)
	{
		if(a[i]!=a[j])
		{
			sum++;
		}
		i++;
		j--;
	}
	cout<<sum;
	return 0;
}
