#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;
const int MAXN = 2e5 + 5;

ll n;
struct node {
	ll sum;
	char c;
}arr[MAXN];
ll sum = 0;
ll asum[MAXN];
vector<node>temp;
ll idx,ans;

void build() {
	ll all = asum[n];
	bool flag = 0;
	for (int i=1;i<=n;i++) {
		if (!flag && asum[i] > all / 2) {
			if (!flag) {flag = 1,idx = temp.size();}
			bool other = all % 2 == 0 ? 0 : 1;
			temp.push_back({all/2 - asum[i-1],arr[i].c});
			temp.push_back({asum[i] - all/2 - other,arr[i].c});
		}
		else temp.push_back({arr[i].sum,arr[i].c});
	}
}

void solve() {
	ll left = 0,right = idx;
	int sum1 = 0,sum2 = 0; 
	while(left < idx && right < (int)temp.size()) {
		if (temp[left].c == temp[right].c) {
			if (temp[left].sum != temp[right].sum) {
				if (temp[left].sum > temp[right].sum) {
					temp[left].sum -= temp[right].sum;
					right++;
					continue;
				}
				else {
					temp[right].sum -= temp[left].sum;
					left++;
					continue;
				}
			}
			else {left++;right++;continue;}
		}
		else {
			if (temp[left].sum == temp[right].sum) {
				ans += temp[left].sum;
				left++;
				right++;
				continue;
			}
			else {
				ans += min(temp[left].sum,temp[right].sum);
				if (temp[left].sum < temp[right].sum){
					temp[right].sum -= temp[left].sum;
					left++;
					continue;
				}
				else {
					temp[left].sum -= temp[right].sum;
					right++;
					continue;
				}
			}
		}
	}
}

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for (int i=1;i<=n;i++) {
		cin>>arr[i].sum>>arr[i].c;
		asum[i] = asum[i-1] + arr[i].sum;
	}
	build();
	solve();
	cout<<ans<<endl;
	return 0;
}
