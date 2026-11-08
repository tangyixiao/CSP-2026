#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
    long long a[2000005];
long long f(long long t) //这里表示m 
{
//	cout<<t;
	if(t==1)
	{
	//	cout<<a[1];
		return a[1];
	}
	
	
	return a[t]&f(t-1);
}

long long cmp(int a,int b)
{
	return a>b;
}


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;

    for(int i=0;i<n;i++)
    {
    	cin>>a[i]; 
	}
	sort(a,a+n,cmp);
	cout<<f(m-1);
	return 0;
}
