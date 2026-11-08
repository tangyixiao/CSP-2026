#include<bits/stdc++.h>
using namespace std;
long long n,m,x;
long long ans[300005],a[300005],b[300005];
stack<int> s;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
	}
	for(int i=1;i<=n;i++) {
		for(int y=i;y<=n;y++) { 
			x=a[y];
			if(!b[x]) {
	           s.push(x);
	           b[x]=1;
		    }
	    	else {
			   while(1) {
			     if(s.top()==x) {
			        break;
			     }
			     b[s.top()]=0;
			     s.pop();
			   }
		    }
		}
		for(int j=1;j<=m;j++) {
			if(b[j]==1) {
				b[j]=0;
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
