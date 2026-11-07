#include <bits/stdc++.h>
using namespace std;
int n,m,num=-1;
int k[500000],a[200001];
int choose(int turn,int last_choice)
{
	if(turn<=m)
	{
		a[turn]=k[last_choice];
	    for(int i=last_choice+1;i<=n-(m-turn)+1;i++)
    	{
    		choose(turn+1,i);
    	}
    	a[turn]=0;
	}
	else 
	{
		int result=0;
		int little_turn=1;
		while(a[m]!=0)
		{
			int little_result=1;
			for(int i=1;i<=m;i++)
			{
				if(a[i]%2==0)
				{
					little_result=0;
				}
				a[i]/=2;
			}
			result+=little_result*little_turn;
			little_turn*=2;
		}
		if(result>num)num=result;
	}
	return 0;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>k[i];
	}
	sort(k+1,k+n+1);
	choose(0,0);
	cout<<num;
	return 0;
} 
