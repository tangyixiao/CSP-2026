#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a[1000000000000],b[100000000];
	int n,m;
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i <= n;i++)
	{
	    for(int i = 1;i <= m;i++)
	    {
		    b[a[i]]++;
	    	if(b[a[i]]==2)
		    {
			    for(int i = 1;i <= m;i++)
			    {
				    b[i]--;
		    	}
		    }
	    }
    }
    for(int i = 1;i <=m ;i++)
    {
    	cout<< b[i];
	}
    return 0;
}
