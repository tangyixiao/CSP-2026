#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
struct f{
	long long num;
	char c;
};
f a[N];
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++)cin>>a[i].num>>a[i].c;
	for(long long l=1,r=n;l<=r;){
		while(a[l].num>=a[r].num){
			if(a[l].c!=a[r].c)cnt+=a[r].num;
			a[l].num-=a[r].num;
			r--;
		}
		if(a[l].c!=a[r].c)cnt+=a[l].num;
		a[r].num-=a[l].num;
		l++;
	}
	cout<<cnt;
	return 0;
} 