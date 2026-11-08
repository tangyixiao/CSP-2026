#include<bits/stdc++.h>
using namespace std;
long long a,b,c[10005],p;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(long long i=1;i<=a;i++){
		cin>>c[i];
		p+=1;
	}
	long long q=-1;
	for(long long i=1;i<=a-1;i++){
		long long p=c[i]&c[i+1];
		if(p>=q) q=p;
	}
	cout<<q;
	return 0;
}
