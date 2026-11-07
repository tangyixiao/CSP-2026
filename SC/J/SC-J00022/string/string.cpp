#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,w,cnt=0,q,sum,opqwopiw,djhklghj;
char ch;
struct qw{
	int qsdfghnj;
	char liyuhao;
}a[600008];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	q=n;
	while(q--)
	{
		cnt++;
		cin>>w>>ch;
		a[cnt].liyuhao=ch;
		a[cnt].qsdfghnj=w;
		sum+=w;
	}
	int x=(sum+1)/2;
	int l=1,r=cnt,tot=0;
	while(l<r)
	{
//		cout<<l<<' '<<r<<'\n';
		opqwopiw+=a[l].qsdfghnj;
		djhklghj+=a[r].qsdfghnj;
		char ch1=a[l].liyuhao,ch2=a[r].liyuhao;
		if(ch1==ch2)
		{
//			cout<<1<<"l:"<<l<<' '<<a[l].qsdfghnj<<' '<<"r:"<<r<<' '<<a[r].qsdfghnj<<'\n';
			if(a[l].qsdfghnj==a[r].qsdfghnj)
			{
				r--;
				l++;
				continue;
//				cout<<3<<"l:"<<l<<' '<<a[l].qsdfghnj<<' '<<"r:"<<r<<' '<<a[r].qsdfghnj<<'\n';
			}
			if(a[l].qsdfghnj<a[r].qsdfghnj)
			{
//				tot+=a[r].qsdfghnj-a[l].qsdfghnj;
				a[r].qsdfghnj-=a[l].qsdfghnj;
				a[l].qsdfghnj=0;
				l++;
				continue;
//				cout<<3<<"l:"<<l<<' '<<a[l].qsdfghnj<<' '<<"r:"<<r<<' '<<a[r].qsdfghnj<<'\n';
			}
			if(a[l].qsdfghnj>a[r].qsdfghnj)
			{
//				tot+=a[l].qsdfghnj-a[r].qsdfghnj;
				a[l].qsdfghnj-=a[r].qsdfghnj;
				a[r].qsdfghnj=0;
				r--;
				continue;
//				cout<<4<<"l:"<<l<<' '<<a[l].qsdfghnj<<' '<<"r:"<<r<<' '<<a[r].qsdfghnj<<'\n';
			}
		}
		else
		{
			if(a[l].qsdfghnj==a[r].qsdfghnj)
			{
				tot+=a[l].qsdfghnj;
				r--;
				l++;
				continue;
//				cout<<3<<"l:"<<l<<' '<<a[l].qsdfghnj<<' '<<"r:"<<r<<' '<<a[r].qsdfghnj<<'\n';
			}
			if(a[l].qsdfghnj<a[r].qsdfghnj)
			{
				tot+=a[l].qsdfghnj;
				a[r].qsdfghnj-=a[l].qsdfghnj;
				a[l].qsdfghnj=0;
				l++;
				continue;
//				cout<<1<<"l:"<<l<<' '<<a[l].qsdfghnj<<' '<<"r:"<<r<<' '<<a[r].qsdfghnj<<'\n';
			}
			if(a[l].qsdfghnj>a[r].qsdfghnj)
			{
				tot+=a[r].qsdfghnj;
				a[l].qsdfghnj-=a[r].qsdfghnj;
				a[r].qsdfghnj=0;
				r--;
				continue;
//				cout<<2<<"l:"<<l<<' '<<a[l].qsdfghnj<<' '<<"r:"<<r<<' '<<a[r].qsdfghnj<<'\n';
			}
		}
	}
	cout<<tot;
	return 0;
}