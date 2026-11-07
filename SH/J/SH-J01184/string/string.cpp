#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 100000 + 10;
int n;
vector < pair<long long,char> > v;
int now_id = 0;
long long sum = 0;
long long now_sum = 0;
long long ans = 0;
bool will_break = false;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	v.push_back({0,0});
	for(int i = 1;i <= n;i ++) {
		long long a;
		char c;
		cin >>a >>c;
		v.push_back({a,c});
		sum += a;
	}
	now_id = n;
	for(int i = 1;i <= n;i ++) {
		now_sum += v[i].first;
		if(v[i].first > sum / 2) {
			//cout <<"here1 " <<i;
			v[i].first = (sum - now_sum * 2);
			will_break = true;
		}else if(now_sum > sum / 2) {
			//cout <<"here2 " <<i;
			v[i].first = (sum - (now_sum - v[i].first) * 2);
			will_break = true;
		}
		//cout <<now_id <<endl;
		for(int j = now_id;j >= 1 && v[i].first > 0;j --) {
			//cout <<j <<" : ";
			if(v[i].second == v[j].second) {
				//cout <<"same ";
				if(v[i].first >= v[j].first) {
					v[i].first -= v[j].first;
					v[j].first = 0; 
					now_id --;
				}else {
					v[j].first -= v[i].first;
					v[i].first = 0;
				}
			}else {
				//cout <<"diff " <<v[i].first <<"  " <<v[j].first  <<" \n";
				if(v[i].first >= v[j].first) {
					//cout <<"i >= j ";
					ans += v[j].first;
					v[i].first -= v[j].first;
					v[j].first = 0;
					now_id --;
				}else {
					//cout <<"i < j ";
					ans += v[i].first;
					v[j].first -= v[i].first;
					v[i].first = 0;
				}
				//cout <<"ans : " <<ans;
			}
			//cout <<endl;
		}
		if(will_break == true) {
			break;
		}
	}
	cout <<ans;
	return 0;
}
