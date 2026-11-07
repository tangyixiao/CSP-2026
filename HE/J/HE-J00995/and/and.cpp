#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1],b[n+1],max=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[n];
		if(a[n]>max)
		{
			max=a[n];
		}
	}
	srand(time(NULL));
    printf("%d",rand()%max+1);
	return 0;
}
