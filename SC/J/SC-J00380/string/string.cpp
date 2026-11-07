#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
char c[N]; 
int sum=0;
bool f=false;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1)
	{
		cout<<0;
		exit(0);
	}
	else{
		int x;
		char k;
		for(int i=1;i<=n;i++)
		{
			cin>>x>>k;
			for(int i=1;i<=x;i++)
			{
				s=s+k;
			}
		}
		for(int i=1;i<=s.size();i++)
		{
			if(i!=s.size()/2+1)
			{
				if(s[i]!=s[s.size()-i])
				{
					sum++;
				}
			}
		}
		cout<<sum-1;
	}
	return 0;
}