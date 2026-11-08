#include <bits/stdc++.h>
using namespace std;
int a[200005];
char ch[200005];
long long idxa[200005];
long long idxb[200005];
char cha[200005];
char chb[200005];
long long gh[800005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	long long sumer = 0;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> ch[i];
		sumer += a[i];
	}
	long long jx = sumer / 2;
	long long sum1 = 0,sum2 = 0;
	int p1 = 0,p2 = 0;
	for(int i=1;i<=n;i++)
	{
		sum1 += a[i];
		if(sum1 >= jx)
		{
			p1++;
			idxa[p1] = jx;
			cha[p1] = ch[i];
			break;
		}
		else
		{
			p1++;
			idxa[p1] = sum1;
			cha[p1] = ch[i];
		}
	}
	for(int i=n;i>=1;i--)
	{
		sum2 += a[i];
		if(sum2 >= jx)
		{
			p2++;
			idxb[p2] = jx;
			chb[p2] = ch[i];
			break;
		}
		else
		{
			p2++;
			idxb[p2] = sum2;
			chb[p2] = ch[i];
		}
	}
	int p = 0;
	for(int i=1;i<=p1;i++)
	{
		p++;
		gh[p] = idxa[i];
	}
	for(int i=1;i<=p2;i++)
	{
		p++;
		gh[p] = idxb[i];
	}
	sort(gh+1,gh+p+1);
	long long ans = 0;
	for(int i=0;i<=p;i++)
	{
		long long l = gh[i] + 1,r = gh[i+1];
		if(l > r) continue;
		int idx_a = lower_bound(idxa+1,idxa+p1+1,l) - idxa;
		int idx_b = lower_bound(idxb+1,idxb+p2+1,l) - idxb;
		if(cha[idx_a] != chb[idx_b])
		{
			ans += r - l + 1;
		} 
	}
	cout << ans;
	return 0;
}
