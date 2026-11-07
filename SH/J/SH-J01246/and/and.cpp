#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
const int N=2e5+7;
using namespace std;

int a[N],st[N];
vector <int> res;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	priority_queue<int> q;
	int n,m,mx=-INF;
	cin>>n>>m;

	for(int i=1; i<=n; i++) {
		cin>>a[i];
		q.push(a[i]);
	}

	if(m==1) mx=q.top();//6
	else if(m==n) {//7
		int sum=a[1];
		for(int i=2; i<=n; i++) sum&=a[i];
		mx=sum;
	} else if(m==2) {//8-10
		for(int i=1; i<=n; i++) {
			for(int j=i+1; j<=n; j++) {
				mx=max(mx,a[i]&a[j]);
			}
		}
	} else if(n<=20) {//1-5
		do {
			int sum=a[1];
			for(int i=2; i<=m; i++) {
				sum&=a[i];
			}
			mx=max(sum,mx);
		} while(next_permutation(a+1,a+n+1));
	} else {//13,16-17
		int sum=q.top();
		q.pop();
		for(int i=2; i<=m; i++) {
			sum&=q.top();
			q.pop();
		}
		mx=sum;
	}

	cout<<mx<<endl;

	return 0;
}
