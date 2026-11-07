#include<iostream>
#include<algorithm>
#include<cmath>
#include<stack>
#include<cstring>
#include<vector>
#include<deque>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
const int N=1e6+5;
int Times,l,a[N];
char c;
long long n=0,cnt=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>Times;
	for(int i=1;i<=Times;i++)
	{
		cin>>l>>c;
		for(int r=1;r<=l;r++)
			a[++n]=c-'a'+1;
	}
	int Mid=((n+1)>>1);
	if(!(n&1))
		for(int i=n+1;i>=Mid+2;i--)
			a[i]=a[i-1];
	int L=Mid-1,R=Mid+1;
	while(L>=1&&R<=n)
	{
		if(a[L]!=a[R]) cnt++;
		L--,R++;
	}
	cout<<cnt<<'\n';	
	return 0;
}