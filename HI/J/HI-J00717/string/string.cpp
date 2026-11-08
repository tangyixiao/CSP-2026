#include<bits/stdc++.h>
using namespace std;
const long long MAXN = 1000000005;
char m[MAXN];
long long n,ans=0;
long long a[MAXN];
void solve(){
	long long mini,head=1,tail=n;
	long long k=a[head];
	long long l=a[tail];
	while(head<tail){
		mini=min(k,l);
		if(m[head]!=m[tail]){
			ans+=mini;
		}
		if(k>l){
			tail--;
			l=a[tail];
			k-=mini;
			continue;
		}
		if(k<l){
			head++;
			k=a[head];
			l-=mini;
			continue;
		}
		if(k==l){
			head++;
			tail--;
			k=a[head];
			l=a[tail];
			continue;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		cin >> m[i];
    }
    if(n==1){
    	cout << "0";
    	return 0;
	}
	if(n==2){
		cout << "1";
		return 0;
	}
	solve();
	cout << ans;
	return 0;
}
