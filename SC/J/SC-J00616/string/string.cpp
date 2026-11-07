#include<bits/stdc++.h>
#define int long long
using namespace std;
struct S{
	int a,s;
	char c;
}a[200010];
string s1;
int n,y,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].a >> a[i].c;
		if(i==1)y=a[i].a;
		else {
			y=__gcd(y,a[i].a);
		}
	}
	int p=n;
	for(int i=1;i<=n;i++){
		a[i].a/=y;
		a[i].s=a[i].a;
	}
	for(int i=1;i<=n;i++){
		int j=a[i].a;
		while(j){
			if(a[p].c==a[i].c){
				if(a[p].s>j){
					a[p].s-=j;
					j=0;
				}else{
					p--;
					j-=a[p+1].s;
					a[p+1].s=0;
				}
			}else{
				if(a[p].s>j){
					a[p].s-=j;
					ans+=j;
					j=0;
				}else{
					p--;
					j-=a[p+1].s;
					ans+=a[p+1].s;
					a[p+1].s=0;
				}
			}
		}
	}
	cout << ans*y/2;
	return 0;
}
//1 a
//1 a 
//1 a
//1 b
//1 b
//1 b