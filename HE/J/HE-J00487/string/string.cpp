#include<bits/stdc++.h>
using namespace std;
int n;
const int N=2*1e5+5;
struct ppp
{
	long long begin,end;
	char p;
	long long num;
}s[N];
long long ans;
signed main() {
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a;
		char b;
		cin>>a>>b;
		if(i==1) 
		{
			s[i].begin=1;
			s[i].end=a;
		}
		else
		{
			s[i].begin=s[i-1].end+1;
			s[i].end=s[i].begin+a-1;
		}
		s[i].p=b;
		s[i].num=a;
		//cout<<
	}
	long long sz=s[n].end;
	cout<<sz<<"\n";
//	if(sz%2==0)
//	{
		int l=1,r=n;
		
		while(l<=r)
		{
			if(l>r) break;
			long long tou=sz+s[l].begin-1;
			long long wei=sz+s[l].end-1;
			if(tou==s[r].begin)
			{
				if(wei==s[r].end)
				{
					if(s[l].p!=s[r].p) ans+=s[l].num;
					l++;
					r--;
				}
				else if(wei<s[r].end)
				{
					if(s[l].p!=s[r].p) ans+=s[r].num;
					r--;
				}
				else 
				{
					if(s[l].p!=s[r].p)
					{
						ans+=s[l].num;
					}
					l++;
				}
				cout<<"1\n";
			}
			else if(tou<s[r].begin)
			{
				if(wei==s[r].end)
				{
					if(s[l].p!=s[r].p) ans+=s[l].num;
					l++;
					r--;
				}
				else if(wei<s[r].end)
				{
					if(s[l].p!=s[r].p) ans+=tou-s[r].end+1;
					r--;
				}
				else
				{
					if(s[l].p!=s[r].p) ans+=s[l].num;
					l++;
				}
				cout<<"2\n";
			}
			else
			{
				if(wei>s[r].end)
				{
					if(s[l].p!=s[r].p) ans+=s[r].begin-wei+1;
					l++;
				}
				else if(wei==s[r].end)
				{
					if(s[l].p!=s[r].p) ans+=s[r].num;
					l++;
					r--;
				}
				else
				{
					if(s[l].p!=s[r].p) ans+=s[r].num;
					r--;
				}
				cout<<"3\n";
			}
			cout<<l<<"l\n"<<r<<"r\n";
		}
//	}
	cout<<l<<"\n"<<r<<"\n";
	cout<<abs(ans);
	return 0;
}
