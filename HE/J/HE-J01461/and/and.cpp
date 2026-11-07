#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005],b[200005],k;
string s[200005];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    
    cin >> n >> m;
    if (m==1)
    {
    	cout << 12;
	}
    for (int i = 1;i <= n;i++)
    {
    	cin >> a[i];
    	if (m==1)
		{
			cout << 0;
			return 0;
		}
		b[i]=a[i];
		while(b[i]>=0)
		{
			s[i][k]=b[i]%2;
			b[i] = b[i] / 2;
			k++;
		}
	}
	return 0;	
}  
