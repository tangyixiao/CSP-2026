#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100005],b[100005],c,d;
	cin >> c;
	for(int i = 1;i <= c;i ++)
	{
		cin >>a[i] >>b[i];
		
	}
	for(int i = 1;i <=c;i ++)
	{
		d+=a[i];
	}
	cout << d/2 + d%2;
	return 0;
	
}