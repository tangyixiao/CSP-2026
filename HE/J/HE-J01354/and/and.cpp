#include <bits/stdc++.h>
using namespace std;

const long long _2e5=2e5+50;
long long N,M,A[_2e5];

long long dfs(long long be,long long cnt)
{
	if(cnt==M)
	{
		return -1;
	}
	if(be>N)
	{
		return -2;
	}
	long long D1=dfs(be+1,cnt+1),D2=dfs(be+1,cnt);
	if((D1==-2)&&(D2==-2))
	{
		return -2;
	}
	if(D1==-2)
	{
		return D2;
	}
	if(D2==-2)
	{
		return ((D1==-1)?(A[be]):(A[be]&D1));
	}
	long long A1=((D1==-1)?(A[be]):(A[be]&D1)),A2=D2;
	return max(A1,A2);
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>N>>M;
	for(long long a=1;a<=N;a++)
	{
		cin>>A[a];
	}
	cout<<dfs(1,0)<<endl;
	return 0;
}
/*

*/
