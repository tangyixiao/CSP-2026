#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
const int N=2e5+3;
int a[N];
char ch[N];
bool cmp(int p,int q)
{
	if(a[p]<=a[q])
	{
		a[q]-=a[p];
		a[p]=0;
		return 1;
	}
	else
	{
		a[p]-=a[q];
		a[q]=0;
		return 0;
	}
}
ll pos;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >>n;
	for(int i=1;i<=n;i++)
		cin >>a[i] >>ch[i];
	int l=1,r=n;
	while(l!=r)
	{
		if(ch[l]==ch[r])
		{
			if(cmp(l,r))
				l++;
			else
				r--;
		}
		else
		{
			pos+=min(a[l],a[r]);
			if(cmp(l,r))
				l++;
			else
				r--;
		}
	}
	cout <<pos;
	return 0;
 } 
