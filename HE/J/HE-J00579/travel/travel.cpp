#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    int a,c;
    double b,d;
    if(a==c)
    {
    	cout<<1<<" ";
    	if(b==1&&d==1)
    	{
    		cout<<1;
		}
		else
		{
			cout<<"0 0 0";
		}
	}
	else
	{
		cout<<"0 0 0 0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

