#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+100;
//int a[maxn];
//char c[maxn];
vector<unsigned long long>a;//数量
//vector<unsigned long long>s;//前缀和
vector<char>c;//字符
unsigned long long len=0,sum=0;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	bool x=1;
	int n,tempa;
	char tempc,tc;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tempa>>tempc;
		len+=tempa;
		if(tempc==tc)
		{
			n--;
			i--;
			a[i]+=tempa;
//			s[i]+=tempa;
		}
		else
		{
			tc=tempc;
			a.push_back(tempa);
			c.push_back(tc);
//			if(i>0)
//				s.push_back(s[i-1]+tempa);
//			else
//				s.push_back(tempa);
		}
	}
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-i+1]||c[i]!=c[n-i+1])
		{
			x=0;
			break;
		}
	}
	if(x||n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		cout<<min(a[0],a[1]);
		return 0;
	}
	if(len<=int(1e7))
	{
		int k=0;
		for(int i=0;i<len;i++){
			a[k]--;
			s+=c[k];
			if(a[k]==0)
				k++;
		}
		for(int i=0;i<len/2;i++)
		{
			if(s[i]!=s[len-i+1])
				sum++;
		}
		cout<<sum;
		return 0;
	}
	cout<<len/2;
	return 0;
}