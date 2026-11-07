#include<bits/stdc++.h>
using namespace std;
long long n, m, t[5], a,as[5];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	queue<int>q;
	cin >> n >> m;
	if (m == 1) {
		cout << n;
	} else {
		for (int i = 1; i <= n; i++) {
			cin >> a;
			q.push(a);
			t[a]++;
		}
		for (int i = 1; i <= n; i++) {
			t[q.front()]++;
			if(q.front() !=q.back()){
				as[1]++;
				as[2]++;
			}
			else if(t[1]%2==0 && t[2]%2==0){
				as[q.front()]++;
			}
			else {
				as[q.back()]++;
			}
			q.pop();
		}
		cout<<as[1]<<" "<<as[2];
	}
	return 0;
}