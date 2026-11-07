#include<bits/stdc++.h>
using namespace std;
const int Nax = 2e5+5,Lax = 31;
int N,M;
int A[Nax+5];
bool del[Nax+5];
int ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&N,&M);
	for(int i = 1;i <= N;i++) scanf("%d",A+i);
	for(int i = Lax;i >= 0;i--)
	{
		int cnt = 0;
		for(int j = 1;j <= N;j++)
			if(!del[j] && ((A[j]>>i)&1)) cnt++;
		if(cnt >= M)
		{
			ans += (1<<i);
			for(int j = 1;j <= N;j++)
				if(((A[j]>>i)&1)^1) del[j] = true;
		}
	}
	cout << ans;
	return 0;
}