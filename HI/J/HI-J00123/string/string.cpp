#include<bits/stdc++.h>
using namespace std;
int finds(string a){
	long long l=0,r=a.size()-1;
	int cnt=0;
	while(l<=r){
		if(a[l]!=a[r]){
			cnt++;
		}
		l++;
		r--;
	}
	return cnt;
}
int t;
string a;
long long n;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		cin>>c;
		while(n--){
			a+=c;
		}
	}
	printf("%d",finds(a));
	return 0;
}
