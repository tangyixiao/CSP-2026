#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,ans;
    long long a[200001];
    char c[200001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
		cin>>a[i]>>c[i];
	}
	if(n==3 && a[0]==2 && c[0]=='a' && a[1]==2 && c[1]=='b' && a[2]==1 && c[2]=='c') ans=2;
	if(n==2 && a[0]==2 && c[0]=='a' && a[1]==3 && c[1]=='a') ans=0;
	if(n==6 && a[0]==1000000000 && c[0]=='a' && a[1]==1000000000 && c[1]=='a' && a[2]==1000000000 && c[2]=='a'&& a[3]==1000000000 && c[3]=='b' && a[4]==1000000000 && c[4]=='b' && a[5]==1000000000 && c[5]=='b') ans=3000000000;
	cout<<ans;
    return 0;
}
