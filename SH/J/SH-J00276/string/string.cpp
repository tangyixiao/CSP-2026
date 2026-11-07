#include <iostream>
#include <cstdio>
#include <string>
#define ll long long
using namespace std;

const int N=2e5+5;

ll n,len,res,a[N]/*,s[N]*/;
//ll l1,r1,l2,r2;
//ll id1,id2,pos1,pos2;
char c[N];

void solve()
{
	ll l=1,r=len;
	string s="#";
	
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
	} 
	
	while (l<=r)
	{
		if (s[l++]!=s[r--])
		{
			res++;
		}
	}	
	
	cout << res;
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	 
	cin >> n;
	
	for (int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
		len+=a[i];	
//		s[i]=s[i-1]+a[i];
	} 
	
	solve();
//	l1=1,r2=len;
//	if (len%2==0)
//	{
//		l2=len/2;
//		r1=l2+1;
//	}
//	else
//	{
//		l2=len/2;
//		r1=l2+2;
//	}
//	
//	id1=1,id2=n;
//	pos1=1,pos2=len;
//	
//	while (pos1<pos2 && 1<=pos1 && pos1<=r1 && l2<=pos2 && pos2<=len)
//	{
//		cout << pos1 << " " << pos2 << " ";
//		cout << id1 << " " << id2 << " ";
//		cout << res << "\n";
//		
//		if (s[id1]+1-pos1>=pos2-s[id2-1])
//		{
//			if (c[id2]!=c[id1])
//			{
//				res+=pos2-s[id2-1];
//			}
//			
//			pos1+=pos2-s[id2-1];
//			pos2=s[id2-1];
//			id2--;
//		}
//		else
//		{
//			if (c[id2]!=c[id1])
//			{
//				res+=s[id1]-pos1;
//			}
//			
//			pos2+=s[id1]-pos1-1;
//			pos1=s[id1]+1;
//			id1++;
//		}
//		
//		
//	}
//	
//	cout << pos1 << " " << pos2 << " ";
//	cout << id1 << " " << id2 << " ";
//	cout << res << "\n";
//	cout << res;
	return 0;
}

/*
要么后改前，要么前改后，算代价
哎，OI路长长

我常常追忆过去。 
生命瞬间定格在脑海，我将身后的时间裁剪，折叠，蜷曲，揉捻成天上朵朵白云。 

啊，其实就是前后的东西，差距多少 
*/
