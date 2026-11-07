#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,p=1,q;
long long ans;
struct node
{
	int a;
	char c;
}b[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	q=n;
	for(int i=1;i<=n;i++)
		cin>>b[i].a>>b[i].c;
	while(p!=q)
	{
		int x=min(b[p].a,b[q].a);
		b[p].a-=x;b[q].a-=x;
		if(b[p].c!=b[q].c)
			ans+=1ll*x;
		if(b[p].a==0) p++;
		if(b[q].a==0) q--;
	}
	cout<<ans<<endl;
	return 0;
 } 
