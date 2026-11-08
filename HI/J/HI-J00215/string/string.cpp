#include <bits/stdc++.h>
using namespace std;
struct node {
	long long a;
	char c;
};
deque <node> q;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,a,b;
	string s="";
	char c,x,y;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a>>c;
		q.push_back({a,c});
	}
	while(!q.empty()) {
		if(q.size()==1) {
			break;
		}
		a=q.front().a;
		b=q.back().a;
		x=q.front().c;
		y=q.back().c;
		if(x!=y) {
			sum+=min(a,b);
		}
		if(a>b) {
			q.front().a-=b;
			q.pop_back();
		} else {
			if(a==b) {
				q.pop_back();
				if(!q.empty()) {
					q.pop_front();
				}
			} else {
				q.back().a-=a;
				q.pop_front();
			}
		}
	}
	cout<<sum;
	return 0;
}

