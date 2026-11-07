#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],b[15],c;

	cin >>a[1] >>b[1];
	c=a[1]/2+1;
	for(int i = 2;i <= c;i ++)
	{
		cin >>a[i] >>b[i];
		
	}
	if(a[c] > b[c])
	{
		cout << b[c];
	}
	else
	{
		cout << a[c];
	}
	return 0;
	
}