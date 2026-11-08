#include<bits/stdc++.h>//¹Ø×¢_sandspiel_club_fun_Ð»Ð»ß÷ 
using namespace std;
long long sum,ans,now;
int l,r,n,mid,midz;
struct node
{
	int len;
	char zifu;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n,l=1,r=n;
	for(int i=1;i<=n;i++) cin>>a[i].len>>a[i].zifu,sum+=a[i].len;
	while(now*2<sum) mid++,now+=a[mid].len;
	now=sum;
	while(l<=mid&&r>=mid)
	{
		if(a[l].len>a[r].len&&a[l].zifu!=a[r].zifu) ans+=a[r].len,a[l].len-=a[r].len,r--;
		if(a[l].len<a[r].len&&a[l].zifu!=a[r].zifu) ans+=a[l].len,a[r].len-=a[l].len,l++;
		if(a[l].len==a[r].len&&a[l].zifu!=a[r].zifu) ans+=a[l].len,l++,r--;
		if(a[l].zifu==a[r].zifu)
		{
			if(a[l].len>a[r].len) a[l].len-=a[r].len,r--;
			else if(a[l].len<a[r].len) a[r].len-=a[l].len,l++;
			else l++,r--;
		}
	}
//	while(l==mid&&a[r].zifu!=a[l].zifu&&r>mid) ans+=a[r].len,a[r];
//	if(r==mid&&a[r].zifu!=a[l].zifu) ans+=a[l].len;
	cout<<ans;
	return 0;
}
