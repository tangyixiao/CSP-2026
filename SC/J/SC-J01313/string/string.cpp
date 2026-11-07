#include<bits/stdc++.h>
using namespace std;
const int Nax = 2e5+5;
int N;
int A[Nax+5];
long long S[Nax+5];
long long ans;
char c[Nax+5];
long long Query(long long l,long long r,char x)
{
	// cout << endl << l << ' ' << r << ' ' << x << endl;
	int Blol = lower_bound(S+1,S+N+1,l)-S;
	int Blor = lower_bound(S+1,S+N+1,r)-S;
	if(Blol == Blor)
	{
		// cout << Blol << ' ' << Blor << endl;
		if(c[Blol] != x) return 0;
		else return r-l+1;
	}
	long long ans = 0;
	if(c[Blol] == x) ans += S[Blol]-l+1;
	for(int i = Blol+1;i <= Blor-1;i++)
		if(c[i] == x) ans += A[i];
	if(c[Blor] == x) ans += r-S[Blor-1];
	return ans;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&N);
	for(int i = 1;i <= N;i++) scanf("%d %c",A+i,c+i),S[i] = S[i-1]+A[i];
	for(int i = 1;i <= N;i++)
	{
		// cout << c[i] << endl;
		long long l = S[i-1]+1,r = S[i];
		long long tr = S[N]-l+1,tl = S[N]-r+1;
		if(tl < r)
		{
			if(tr < l) break;
			long long mid = (tl+r)>>1;
			if(S[N]&1) tl = r = mid;
			else r = mid,tl = mid+1;
			// cout << l << ' ' << r << ' ' << tl << ' ' << tr << ' ' << Query(tl,tr,c[i]) << endl;
			ans += r-l+1-Query(tl,tr,c[i]);
			break;
		}
		// cout << l << ' ' << r << ' ' << tl << ' ' << tr << ' ' << Query(tl,tr,c[i]) << endl;
		ans += r-l+1-Query(tl,tr,c[i]);
	}
	cout << ans;
	return 0;
}