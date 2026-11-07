#include<iostream>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,p,max=-1;
	cin>>n>>m;
	int a[200000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max){
			max=a[i];p=i;
		}
	}
	if(m==1) {cout<<max;return 0;}
	if(m==n){
		int sum=a[0];
		for(int i=1;i<n;i++)
		sum=sum&a[i];
		cout<<sum;return 0;
	}
	a[p]=0;
	for(int j=1;j<m;j++)
	{
		int i=0,max1=-1;
		for(;i<n;i++)
		{
			if((max&a[i])>max1){max1=max&a[i];p=i;
		}
		}
		a[p]=0;
		max=max1;
	}
	cout<<max;
}