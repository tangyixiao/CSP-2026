#include <bits/stdc++.h>
using namespace std;
int n,a[200010];
char s,t[100000010];
long long sum,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>s;
		sum+=a[i];
		for(int j=sum-a[i];j<sum;++j)
			t[j]=s; 
	}
	for(int i=0,j=sum-1;i<=j;++i,--j){
		if(!(t[i]==t[j]))
			++cnt;
	}
	cout<<cnt;
	return 0;
} 
