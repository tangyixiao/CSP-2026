#include <bits/stdc++.h>
using namespace std;
long long n,m,a[1000000],cnt=0;
string b[1000000];
void e(long long s1,int s3){
	long long s2=0;
	while(s1 != 0){
		s2*=10;
		s2+=s1%2;
		s1/=2;
	}
	b[s3]=s2;	

}
void an(long long x,long long y){
	long long z=abs(x-y);
	long long o=0;
	while(z!=0){
		int i=1;
	}
	cnt=max(cnt,z);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n >> m;
	for(int i=1;i<=n;i++){
		cin >>a[i];
		e(a[i],i);
}
	cout << a[n];
	return 0;
}
