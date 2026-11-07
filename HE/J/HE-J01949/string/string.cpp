#include<bits/stdc++.h>
using namespace std;
long long n,a=0,l=0,ans=0,bh;
char b,c;
string s1;
inline long long  moni(){
	ans=0;
	for(long long i=1;i<=l/2;i++){
		if(s1[i]!=s1[l+1-i])ans++;
	}
	return ans;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
	     bh=l;
		 cin>>a>>b;
		 l+=a;
		 for(long long j=bh+1;j<=bh+a;j++){
		 	s1[j]=b;
		 }
	}
   cout<<moni();
	return 0;
}

