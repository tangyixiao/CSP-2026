#include<bits/stdc++.h>
using namespace std;
long long n;

int main()
{
   freopen("string.in","r",stdin);
   freopen("string.out","w",stdout);
  cin>>n;
  int cnt=0;
  for(int i=0;i<n;i++)
  {
  
  	int a;
  	char b;
  	cin>>a>>b;
	string s;
  	s+=b;
  	int l=s[0],r=s[s.size()-1];
  	for(int k=0;k<=s.size()-1;k++)
  	{
  	for(int j=s.size();j>=0;j--)
  	{
  		if(s[k]!=s[j])
  		{
  			cnt++;
		}
	  }
    }
    }
  cout<<cnt;
	return 0;
}
