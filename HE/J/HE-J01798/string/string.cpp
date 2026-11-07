#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,s2;
	int n,l=0,ans=0;
	cin>>n;
	int i[n];
	char a[n];
	for(int h=0;h<n;h++)
	{	cin>>i[h]>>a[h];
	for( int u=0;u<i[h];u++)
	s+=a[h];
	}
	for(int e=0;e<n;e++)
	l+=i[e];
	int g=0;
  for(int y=l-1;y>=0;y--)
  {
  s2[g]=s[y];
  }
  if(s2==s)
  cout<<0;
  int mid=l/2;
int q=mid+1;
	for(int d=mid;d>=0;d--)
	{
		if(s[d]==s[q])
		{
			q++;
			break;
		}
		else ans++;
	}
cout<<ans;


	
	return 0;
}
