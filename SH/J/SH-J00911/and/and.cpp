#include <iostream>
using namespace std;
int n,m;
int a[200120];
int mxx;
void fd(int m,int s,int l,int mx)
{
	mx=mx&a[l];/*cout << m << " " << s << " " << l << " " << a[l] << " " << mx << endl;*/
	if(s==m){mxx=max(mxx,mx);return;} 
	for(int i=l+1; i<=n; i++)
	{
		
	    fd(m,s+1,i,mx);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	if(m==1)
	{
		int mx=-1;
		for(int i=1; i<=n; i++)
		{
			int x;cin >> x;mx=max(x,mx);
		}
		cout << mx << endl;
		return 0;
	}
	if(m==2)
	{
		int mx=-1;
		for(int i=1; i<=n; i++)
		{
			cin >> a[i];
		}
		for(int i=1; i<=n; i++)
		for(int j=i+1; j<=n; j++)
		{
			mx=max(a[i]&a[j],mx);
		}
		cout << mx << endl;
		return 0;
	}
	if(m==n)
	{
		int mx;
		cin >> mx;
		for(int i=2; i<=n; i++)
		{
			int x;cin >> x; mx=mx&x;
		}
		cout << mx << endl;
		return 0;
	}
	for(int i=1; i<=n; i++)cin >> a[i];
	for(int i=1; i<=n; i++)fd(m,1,i,a[i]);
	cout << mxx << endl;
	return 0;
} 
