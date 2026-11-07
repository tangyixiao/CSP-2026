#include<bits/stdc++.h>;
using namespace std;
int main()
{
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n;
	int ans=0;
	string c[100];
	int a[10000000];
	cin>>n;
	for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cin>>c[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==a[n-i+1]&&c[i]!=c[n-i+1])
        {
            ans=ans+a[i];
        }
        if(a[i]!=a[n-i+1]&&c[i]!=c[n-i+1])
        {
            ans=ans+min(a[i],a[n-i+1]);
        }
    }
    cout<<ans;

	return 0;
}
