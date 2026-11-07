#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen(and.in,"r",stdin);
	freopen(and.out,"w",stdout);
	long long n,m,a[100],s1[100],s2[100],s3;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	for(int i=0;i<n;i++)
      for(int j=i;j<i*i;j++)
      {
      	s1[i]=a[i]%2;
      	a[i]/=2;
	  }
	if(s1[0]=='1'&&s1[1]=='1'&&s2[0]=='1'&&s2[1]=='1') 
	  s3=s1&&s2;
	cout<<s3;
	fclose(stdin);fclose(stdout);
}
