#include<iostream>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,start,end;
	cin>>n;
	long long a[200000],sum=0;
	char c[200000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>c[i];
	}
	start=0;end=n-1;
	while(1)
	{
		if(c[start]!=c[end]){
			if(a[start]>=a[end])
			{
			sum+=a[end];
			a[start]-=a[end];
			a[end]=0;}
			else{
			sum+=a[start];
			a[end]-=a[start];
			a[start]=0;
			}
		}
		else{if(a[start]>=a[end])
			{
			a[start]-=a[end];
			a[end]=0;}
			else{
			a[end]-=a[start];
			a[start]=0;
			}
		}
		if(a[start]==0) start++;
		if(a[end]==0) end--;
		if((start>=end)) break;
	}
	cout<<sum;
	return 0;
}