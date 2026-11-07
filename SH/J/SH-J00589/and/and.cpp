#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i<n;i++) cin >> a[i];
	if(m==1){
		int maxn = -1;
		for(int i = 0;i<n;i++) maxn = max(a[i],maxn);
		cout <<maxn;
		return 0;
	}
	if(m==n){
		int c = 2147483647;
		for(int i = 0;i<n;i++) c=(c&a[i]);
		cout <<a;
		return 0;
	}
	if(m==n-1){
		int c = 2147483647,b = 2147483647;
		for(int i = 1;i<n;i++) c = (c&a[i]);
		for(int i = 0;i<n-1;i++) b = (b&a[i]);
		cout <<max(c,b);
		return 0;
	}
	if(m==2){
		int c = 0;
		for(int i = 0;i<n-1;i++)
			for(int j = i+1;j<n;j++) c=max(c,a[i]&a[j]);
		cout << c;
		return 0;
	}
	return 0;
}
