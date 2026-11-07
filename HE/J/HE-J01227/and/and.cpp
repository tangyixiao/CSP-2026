#include <bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,p;
	int f=0;
	cin >> n >> m;
	cin >> a[1];
	if(a[1]>=4) f=1;
	p=a[1];
	for(int i=2;i<=n;i++){
		cin >> a[i];
		p&=a[i];
		if(a[i]>=4) f=1;
	}
	if(m==1){
		long long maxn=0;
		for(int i=1;i<=n;i++){
			if(a[i]>maxn) maxn=a[i];
		}
		cout << maxn;
		return 0;
	}
	else if(m==n){
		cout << p;
	}
	else if(n<=2000&&m==2){
		long long maxn=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>maxn) maxn=(a[i]&a[j]);
			}
		}
		cout << maxn;
		return 0;
	}
	else if(m==(n-1)){
		long long maxn=0;
		for(int i=1;i<=n;i++){
			long long t;
			if(i==1) t=a[2];
			else t=a[1];
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				t&=a[j];
			}
			if(t>maxn) maxn=t;
		}
		cout << maxn;
		return 0;
	}
	else if(f==0){
		sort(a+1,a+n+1);
		int x=-1,b=-1,c=-1,d=-1;
		for(int i=1;i<=n;i++){
			if(a[i]==1&&x==-1){
				x=i-1;
			}
			if(a[i]==2&&b==-1){
				b=i-1;
			}
			if(a[i]==3&&c==-1){
				c=i-1;
				break;
			}
		}
		d=n-c;
		c=c-b;
		b=b-x;
		if(m<=d) cout << 3;
		else if(m<=(d+c)) cout << 2;
		else if(m<=(d+b)) cout << 1;
		else cout << 0;
		return 0;
	}
	else{
		int t=m;
		sort(a+1,a+n+1);
		long long maxn=a[n];
		for(int i=n;m>=1;i--){
			maxn&=a[i];
			m--;
		}
		cout << maxn;
	}
	return 0;
}
