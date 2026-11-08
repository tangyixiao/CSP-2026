#include <bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long n,e[N],s=0;
char a[N];
string sa;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>e[i]>>a[i];
		for(int j=1;j<=e[i];j++)sa.push_back(a[i]);
		s+=e[i];
	}
	long long l=sa.size();
	if(l%2==0)l=l/2;
	else l=l/2+1;
	for(int i=0;i<l;i++){
		if(sa[i+l]!=sa[i])s++;
	}
	cout<<s;
	return 0;
} 
