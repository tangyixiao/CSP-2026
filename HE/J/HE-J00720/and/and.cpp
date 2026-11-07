#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,a[100005],maxn=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	if(maxn<a[i])
    	{
    		maxn=a[i];
		}
	}
		cout<<maxn;
		fclose(stdin);
	    fclose(stdout);
		return 0;
}
