#include <bits/stdc++.h>
using namespace std;

struct chuan{
	int a;
	char c;
};

int n;
chuan hwc[200009];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>hwc[i].a>>hwc[i].c;
	}
	long long ans = 0;
	int li = 0,ri = n-1;                 // index
	int lr = hwc[0].a,rr = hwc[n-1].a;   // remain
	char lc = hwc[0].c,rc = hwc[n-1].c;  // char
	while (li < ri-1)
	{
		if (lr == 0)
		{
			li ++;
			lr = hwc[li].a;
			lc = hwc[li].c;
		}
		if (rr == 0)
		{
			ri --;
			rr = hwc[ri].a;
			rc = hwc[ri].c;
		}
		if (lc != rc)
		{
			ans += min(lr,rr);
			if (lr > rr)
			{
				lr -= rr;
				rr = 0;
			} else {
				rr -= lr;
				lr = 0;
			}
		}
		if (lc == rc)
		{
			if (lr > rr)
			{
				lr -= rr;
				rr = 0;
			} else {
				rr -= lr;
				lr = 0;
			}
		}
	}
	cout<<ans;
	return 0;
}
