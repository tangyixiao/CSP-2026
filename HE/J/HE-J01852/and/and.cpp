#include<bits/stdc++.h>
using namespace std;
int num,mum,a[200003],s;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>num>>mum;
	for(int i=1;i<=num;i++)
	{
		cin>>a[i];
    }
	if(mum==1)
	{
        sort(a+1,a+num+1);
		cout<<a[num];
	}
	else if(num==mum)
	{
		for(int i=1;i<=num;i++)
		{
            a[i+1]=(a[i]&a[i+1]);
		}
		cout<<a[num];
	}
	return 0;
}
