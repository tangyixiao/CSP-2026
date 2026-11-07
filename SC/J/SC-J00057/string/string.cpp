#include<bits/stdc++.h>
using namespace std;
long long n,sl,ans;
struct aaaaa{
	long long a;
	char c;
}b[200006];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>b[i].a>>b[i].c;
	}
	for(long long i=1,j=n;i<=j;){
		if(b[i].c!=b[j].c) ans+=min(b[i].a,b[j].a);
		if(b[i].a<b[j].a) b[j].a-=b[i].a,i++;
		else b[i].a-=b[j].a,j--;
	}
	cout<<ans;
	return 0;
}