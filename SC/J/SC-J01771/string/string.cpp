#include <iostream>
using namespace std;
typedef long long ll;
const int N=2e5+5;
int n;
ll id,ans;
struct str
{
	ll l,r,fr,fl;
	char c;
	void read()
	{
		int res;
		cin>>res>>c;
		l=id+1,r=id+res;
		id+=res;
		return;
	}
	void chul()
	{
		fr=id-l+1;
		fl=id-r+1;
		return;
	}
	void print()
	{
		cout<<"l:"<<l<<" r:"<<r<<" fl:"<<fl<<" fr:"<<fr<<" c:"<<c<<"\n";
	}
}a[N];
int jiao(str a,str b)
{
	return min(a.r,b.fr)-max(a.l,b.fl)+1;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		a[i].read();
	for(int i=1;i<=n;i++)
		a[i].chul()/*,a[i].print()*/;
	// cout<<"输入没有问题\n";
	int lid=1,rid=n;
	while(lid<n||rid>1)
	{
		// cout<<"lid="<<lid<<"\n";
		// cout<<"rid="<<rid<<"\n";
		// cout<<a[lid].c<<a[rid].c<<"\n";
		if(a[lid].c!=a[rid].c)
		// {
		// 	cout<<"\nlid:";
		// 	a[lid].print();
		// 	cout<<"rid:";
		// 	a[rid].print();
		// 	cout<<"相交:"<<jiao(a[lid],a[rid]);
			ans+=jiao(a[lid],a[rid]);
		// }
		if(a[lid].r<a[rid].fr)
			lid++;
		else
			rid--;
	}
	// cout<<"指针没有问题\n";
	if(a[lid].c!=a[rid].c)
	// {
	// 	cout<<"\nlid:";
	// 	a[lid].print();
	// 	cout<<"rid:";
	// 	a[rid].print();
	// 	cout<<"相交:"<<jiao(a[lid],a[rid])<<"\n";
		ans+=jiao(a[lid],a[rid]);
	// }
	// cout<<"最后处理没有问题\n";
	cout<<ans/2<<"\n";
	return 0;
}