#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
const int N = 2e5 + 5;
int n,cnt[N],m[N];
long long sum,ans,lpos,rpos,l,r;
char s[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++)
		cin >> cnt[i] >> s[i],sum += cnt[i];
	lpos = 1;
	rpos = n;
	l = 1,r = sum;
	while (l <= r)
	{
		int K = min(cnt[lpos],cnt[rpos]);
		if (s[lpos] != s[rpos])
			ans += K;
		cnt[lpos] -= K;
		cnt[rpos] -= K;
		l += K;
		r -= K;
		if (cnt[lpos] == 0)
			lpos ++;
		else
			rpos --;
	}
	cout << ans;
	return 0;	
 } 
