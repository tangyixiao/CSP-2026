#include<bits/stdc++.h> 
using namespace std;
int main()
{freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
long long n,a;
long long t=0;
string s="",r;
cin>>n;
for(long long i=0;i<n;i++)
{cin>>a>>r;
for(long long j=0;j<a;j++)s+=r;
}
long long l=s.size();
for(long long i=0;i<l/2;i++)
{if(s[i]!=s[l-i-1])t++;
}
cout<<t;
fclose(stdin);fclose(stdout);
return 0;
}
