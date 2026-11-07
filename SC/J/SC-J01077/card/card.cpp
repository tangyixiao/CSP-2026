#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
stack <long long> s, k;
int rec[N], cnt[N];
int main(){
	freopen("card.in","r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int t[N];
	for(int i = 1;i <= n;i++){
		cin >> t[i];
	}	
	int l = n;
	while(l--){
		int temp = 0;
		for(int i = n;i >= n - l;i++){
			s.push(t[i]);
		} 
		int tp = s.size();
		while(temp != tp){
			memset(rec, 0, sizeof(rec));
			int t = s.top();
			if(rec[t]) {
				while(k.top() != t){
					rec[k.top()] = 0;
					k.pop();
				}
			} else {
				k.push(t);
				s.pop();
				rec[t]++;	
			}
			temp++;
		}	
		while(k.size() != 0) {
			cnt[k.top()]++;
			k.pop();
		}
		while(s.size() != 0){
			s.pop();
		}
	}
	for(int i = 1;i <= m;i++){
		cout << cnt[i];
	}
	return 0;
}