#include <bits/stdc++.h>
using namespace std;
struct ans{
	long long int a;
	long long int l;
	long long int r;
	char c;
}an[200001];
char aa[20000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int n;
	cin>>n;
	unsigned long long int k=0,t=0,l=0,r,li=1,ri=n;
	for(int i=1;i<=n;i++)
	{
		cin>>an[i].a;
		cin>>an[i].c;
		an[i].l=k+1;
		k+=an[i].a;
		an[i].r=k;
	}
	/*if(k<=10^9)
	{
		int kk=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=an[i].a;j++)
			{
				kk++;
				aa[k]=an[i].c;
				cout<<aa[k]<<endl;
			}
		}
		for(int i=1;i<=k;i++)
			cout<<aa[i];
		for(int i=1;i<=k/2;i++)
			if(aa[i]!=aa[k+1-i])
				t++;
		cout<<t;
		return 0;
	 } */
	long long int i=1;
	r=k;
	while(l<k/2&&li<ri&&r>k/2)
	{
		if(an[li].r>k-an[ri].l+1)
		{
			an[li].l+=an[ri].r-an[ri].l;
			if(an[ri].c!=an[li].c)
				t+=an[ri].r-an[ri].l+1;
			ri--;
			l+=an[ri].r-an[ri].l+1;
			r-=an[ri].r-an[ri].l+1;
		}
		if(an[li].r=k-an[ri].l+1)
		{
			if(an[ri].c!=an[li].c)
				t+=an[ri].r-an[ri].l+1;
			ri--;
			li++;
			l+=an[ri].r-an[ri].l+1;
			r-=an[ri].r-an[ri].l+1;
		}
		if(an[li].r<k-an[ri].l+1)
		{
			if(an[ri].c!=an[li].c)
				t+=an[li].r-an[li].l+1;
			an[ri].r+=an[li].r-an[li].l;
			li++;
			r-=an[li].r-an[li].l+1;
			l+=an[li].r-an[li].l+1;
		}
	}
	cout<<t;
	return 0;
}
