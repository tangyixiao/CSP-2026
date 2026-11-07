#include <bits/stdc++.h>
using namespace std;

long long n,m,a[210000],b,c,sum,sum2;
bool d=1;

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(((d>>1)<<1)!=d-1) d==0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			if(i==1) sum2=a[2];
			else sum2=a[1];
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				sum2&=a[j];
				sum=max(sum,sum2);
			}
		}
		cout<<sum;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				sum=max(sum,a[i]&a[j]);
			}
		}
		cout<<sum;
		return 0;
	}
	sort(a+1,a+n+1,greater());
	if(d){
		if(((d>>2)<<2)==d-3){
			sum=a[m];
			cout<<sum;
			return 0;
		}
	}
	if(a[1]<=4){
		for(int i=1;i<=n;i++){
			if(a[i]!=4){
				break;
			} 
			if(i>=m){
				cout<<'4';
				return 0;
			}
		}
		for(int i=c;i<=n;i++){
			if(a[i]<=2){
				c=i;
				break;
			} 
			if(i>=m){
				if(a[i]==3) cout<<'3';
				else cout<<'2';
				return 0;
			}
		}
		if(n-c>=m) cout<<'1';
		else cout<<'0';
		return 0;
	}
	for(int i=1;i<=m;i++){
		sum&=a[i];
	}
	cout<<sum;
	return 0;
}