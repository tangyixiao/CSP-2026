#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	long long l=log(a[n]);
	long long num=0,f,ans;
	l++;
	while(num<m){
		l--;
		num=0;
		int cmp=pow(2,l);
		for(int i=n;;i--){
			if(a[i]>=cmp){
				num++;
				f=i;
			}
			else break;
		}
	}
	long long s=pow(2,l);
	for(int i=f;i<=n;i++){
		b[i]=a[i]%s;
	}
	sort(b+1,b+n+1);
	ans=b[n];
	for(int i=n-1;i>=n-m+1;i--)ans=(ans&b[i]);
	cout<<s+ans;
	return 0;
} 