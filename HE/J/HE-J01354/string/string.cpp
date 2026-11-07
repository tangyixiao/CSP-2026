#include <bits/stdc++.h>
using namespace std;

const long long _2e5=2e5+50;
long long N,A[_2e5],A1[_2e5],A2[_2e5],L,ans;
char C[_2e5],C1[_2e5],C2[_2e5];

void mid(long long &cnt,long long &add)
{
	long long M=L/2,tem=0;
	for(long long a=1;a<=N;a++)
	{
		tem+=A[a];
		if(tem>=M)
		{
			cnt=a;
			tem-=A[a];
			add=M-tem;
			break;
		}
	}
	return ;
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>N;
	for(long long a=1;a<=N;a++)
	{
		cin>>A[a]>>C[a];
		L+=A[a];
	}
	//构建 
	long long cnt=0,add=0;
	mid(cnt,add);
	long long cnt2=0;
	for(long long a=1;a<=N;a++)
	{
		if(a<cnt)
		{
			A1[a]=A[a];
			C1[a]=C[a];
		}
		else if(a==cnt)
		{
			A1[a]=add;
			C1[a]=C[a];
			A2[a-cnt+1]=A[a]-add;
			C2[a-cnt+1]=C[a];
			cnt2++;
		}
		else if(a>cnt)
		{
			A2[a-cnt+1]=A[a];
			C2[a-cnt+1]=C[a];
			cnt2++;
		}
	}
	for(long long p1=1,p2=cnt2;p1<p2;(p1++,p2--))
	{
		swap(A2[p1],A2[p2]);
		swap(C2[p1],C2[p2]);
	}
	//识别
	long long p1=1,p2=1;
	while((A1[p1]!=0)&&(A2[p2]!=0))
	{
		if(C1[p1]==C2[p2])
		{
		}
		else
		{
			ans+=min(A1[p1],A2[p2]);
		}
		A1[p1]-=min(A1[p1],A2[p2]);
		A2[p2]-=min(A1[p1],A2[p2]);
		if(A1[p1]==0)
		{
			p1++;
		}
		if(A2[p2]==0)
		{
			p2++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
