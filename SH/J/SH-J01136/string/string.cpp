#include<bits/stdc++.h>
using namespace std;
long long n,sum=0,ans=0;
struct node{
	long long num,s,e;
	char c;
}a[200005];
int check(int num){
	for(long long i=1;i<=n;i++){
		if(a[i].e>=num) return i;
	}
}
string s;
void case2(){
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i].num;j++){
			s+=a[i].c;
		}
	}
	for(long long i=0;i<=(sum-1)/2;i++){
		if(s[i]!=s[sum-1-i]) ans++;
	}
	cout<<ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	bool f=1;
	for(long long i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		a[i].s=sum;
		sum+=a[i].num;
		a[i].e=sum-1;
		if(a[i].c!=a[i-1].c&&i!=1){
			f=0;
		}
	}
	if(f){
		cout<<0;
		return 0;
	}
	if(n>=3e4){
		case2();
		return 0;
	}
	for(long long i=1;i<=n;i++){
		long long nums=check(sum-a[i].s-1),nume=check(sum-a[i].e-1);
		for(long long j=nume;j<=nums;j++){
			if(a[j].c!=a[i].c){
				ans+=abs(min(a[j].e,sum-a[i].s-1)-max(a[j].s,sum-a[i].e-1)+1);
			}
		}
	}
	cout<<ans/2;
	return 0;
}
