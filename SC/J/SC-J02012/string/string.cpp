#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2e5 + 10;

int n;
int l[N];//每段结束的位置， 
char s[N];//每一段对应的字符
ll ans;

bool is_same_char = true;
bool is_same_l = true;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	cin>>n;
	cin>>l[1]>>s[1];
	
	int mid = n/2 + 1;
	for(int i=2;i<=n;i++)
	{
		cin>>l[i]>>s[i];
		if(s[i] != s[i-1])
		   is_same_char = false;
		   
		if(i >= mid) 
			if(l[i] != l[n-i+1])
			{
			   is_same_l = false;
		    }
	}
	
	//全部相同
	if(is_same_char)
	{
		cout<<0;
		return 0;
	}
	
	//对应段段长度相同
	if(is_same_l)
	{
		int mid = (n + 1) >> 1;
		for(int i=1;i<=mid;i++)
			if(s[i] != s[n-i+1])
				ans += l[i];
		cout<<ans;
		return 0;
	}
	
	
	vector <char> v;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=l[i];j++)
		{
			v.push_back(s[i]);
		}
	}
	
	
//	for(int i=1;i<=mid;i++)
//	{
//		
//	}
	
	
	return 0; 
}