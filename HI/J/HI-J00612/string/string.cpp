#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
long long r[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;bool p=1,q=1;long long sum=0,num=0,m=0;r[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		r[i]=r[i-1]+a[i];
		if (i>=2&&b[i]!=b[i-1]) p=0;
		if (i>=2&&a[i]!=a[i-1]) p=0;
		m+=a[i];
	}
	if (q==1){
		int l=1,r=n;
		while(1){
			if (r<=l) break;
			if (b[l]!=b[r]){
				sum+=a[l];
			}
			l++;
			r--;
		}
		cout<<sum;
		return 0;
	}
	if (p==1){
		cout<<0;
		return 0;
	}
	string s;
	for(long long i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++) s+=b[i];
	}
	long long l=1,r=s.size();
	while(1){
		if (r<=l) break;
		if (s[l]!=s[r]){
			sum++;
		}
		l++;
		r--;
	}
	cout<<sum;
	return 0;
}
