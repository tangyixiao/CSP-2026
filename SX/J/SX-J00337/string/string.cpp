#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+10;
int n;
long long cnt,ans;
struct node {
	int ai;
	char ci;
} a[MAXN];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i].ai>>a[i].ci;
		cnt+=a[i].ai;
	}
	cnt=cnt/2;
	long long k=0,e=0;
	for(int i=1; i<=n; i++) {
		k+=a[i].ai;
		if(k<=cnt) {
			while(a[i].ai!=0) {
				if(a[i].ci!=a[n-e].ci) ans+=min(a[i].ai,a[n-e].ai);
				if(a[i].ai>=a[n-e].ai) {
					a[i].ai-=a[n-e].ai;
					e++;
				} else {
					a[n-e].ai-=a[i].ai;
					if(a[n-e].ai==0) e++;
					a[i].ai=0;
				}
			}
		} else {
			int w=cnt-(k-a[i].ai);
			while(w>0) {
				if(a[i].ci!=a[n-e].ci) ans+=min(w,a[n-e].ai);
				if(w>=a[n-e].ai) {
					w-=a[n-e].ai;
					e++;
				} else {
					w=0;
					a[n-e].ai=a[n-e].ai-a[i].ai;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}

