#include <bits/stdc++.h>
using namespace std;
const int N = 1e+4;
long long n,m;
long long arr[N];
long long maxx = 0;


int fanc(long long x,long long k) //±ä 
{
	long long num; //±ä 
	long long max_2 = -1;//±ä 
	for (long long i = k ; i < n ; i++) //µÝ¹é 
	{
		num = arr[k];
		if (x - 1 > 0) num = (arr[i] & (fanc(x-1,i+1)));
		max_2 = max(num,max_2);
	}
	return max_2;
}


int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (long long i = 1 ; i <= n ; i++)
	{
		cin >> arr[i];
		
	}
	
	long long num;
	for (long long i = 1 ; i <= n - m + 1 ; i++)
	{
		long long num = fanc(m,i);
		maxx = max(maxx,num);
	}
	cout << maxx;
	return 0;
}
