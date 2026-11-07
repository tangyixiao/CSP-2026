#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    long long a[100000],b,k;
    cin>>k>>b;
    for(int i=1;i<=k;i++)
    {
    	cin>>a[i];
	}
	sort(a+1,a+k+1);
    cout<<a[k];
    fclose(stdin);
    fclose(stdout);
    return 0;
 } 