#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0;
struct add{
	long long i;
	char c;
}a[200005];
long long s[200005]={0};
char read(long long x){
	for(long long j=1;j<=n;j++){
		if(x<=s[j]) return a[j].c;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long j=1;j<=n;j++){
		cin>>a[j].i>>a[j].c;
		s[j]=s[j-1]+a[j].i;
	}
	long long k=s[n]/2;
	for(long long j=1;j<=k;j++){
		if(read(j)!=read(s[n]+1-j)){
			cnt++;
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
