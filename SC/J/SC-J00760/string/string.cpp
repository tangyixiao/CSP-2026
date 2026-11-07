#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
long long siz=0,n;
long long ans;
vector<char> cha;
vector<long long> in[2];
char find(int x)
{
	for(int xi=0;xi<cha.size();xi++) if(x>in[0][xi] && x<=in[1][xi]) return xi;
}
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++)
	{
		long long s1;
		char s2;
		cin>>s1>>s2;
		if(cha.size()!=0 && s2==cha[cha.size()-1])
		{
			siz+=s1;
			in[1][in[1].size()-1]=siz;
		}
		else
		{
			in[0].push_back(siz);
			siz+=s1;
			in[1].push_back(siz);
			cha.push_back(s2);
		}
		
	}
	long long l=0,r=siz,li=0,ri=cha.size()-1;
	while(l<r)
	{
		if(cha[li]!=cha[ri])
		{
			long long ll=in[1][li]-l,rl=r-in[0][ri];
			bool st=bool(ll>rl);
			if(st)
			{
				ans+=rl;
				for(int i=1;i<=ll-rl;i++)
				{
					if(cha[find(r-i)]!=cha[li]) ans++;
				}
				l+=ll;
				li++;
				r-=ll;
				ri=find(r);
			}
			else
			{
				ans+=ll;
				for(int i=1;i<=rl-ll;i++)
				{
					if(cha[find(l+i)]!=cha[ri]) ans++;
				}
				l+=rl;
				li=find(l);
				r-=rl;
				rl--;
			}
		}
		else
		{
			l++;
			r--;
			li=find(l);
			ri=find(r);
		}
	}
	cout<<ans;
	return 0;
}