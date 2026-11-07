#include<bits/stdc++.h>
using namespace std;
int n,a[100100],maxn;
long long l,ans;
long long b[100100];
char c[200100],s[200100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0); 
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		
		maxn = max(maxn,a[i]);
		l += a[i];
		b[i] = b[i-1]+a[i];
	}
	if(n<=2000 && maxn<=50 || n <= 200000 && maxn <= 1){
		long long ans=0;
		l=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				s[++l] = c[i];
			}
		}
		for(int i=1;i<=l;i++){
			if(s[i] != s[l+1-i]){
				ans++;
				s[i] = s[l+1-i];
			}
		}
		cout << ans ;
	}else{
		int L=0,R=n+1;
		a[n+1] = 2e9;
		while(L+1<R){
			int M = (L+R)/2;
			if(b[M] > 1.0 * l / 2) L=M;
			else R=M; 
		}
		int mid = L;
		int p1,p2;
		if(l % 2 == 0){
			for(int i=n+1;i>=mid+2;i++){
				a[i] = a[i-1];
				c[i] = c[i-1];
			}
			a[mid] = l/2-b[mid-1];
			a[mid+1] = b[mid]-l/2;
			c[mid+1] = c[mid];
			p1 = mid;
			p2 = mid+1;
		}
		else{
			for(int i=n+1;i>=mid+2;i++){
				a[i] = a[i-1];
				c[i] = c[i-1];
			}
			a[mid] = l/2-b[mid-1];
			a[mid+1] = b[mid]-l/2-1;
			c[mid+1] = c[mid];
			p1 = mid;
			p2 = mid+1;	
		}
		while(p1 > 1 || p2 < n){
			if(c[p2]!=c[p1]){
				if(a[p2] >= a[p1]) {
					ans += a[p1];
					a[p2]-=a[p1];
					p1--;
					if(a[p2] == 0) p2++;
				}else{
					ans += a[p2];
					a[p1] -= a[p2];
					p2++;
				}
			}else{
				if(a[p2] >= a[p1]){
					a[p2] -= a[p1];
					p1--;
					if(a[p2] == 0) p2++;
				}else {
					a[p1] -= a[p2];
					p2++;
				}
			}
			
		}
		cout << ans;
	}
}
