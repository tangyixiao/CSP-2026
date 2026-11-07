#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll n, m;
ll arr[500005], ans[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	for(int k=0;k<n;k++) {
		vector<ll> vec;
		for(int i=k;i<n;i++) {
			ll flag=-1;
			for(int j=0;j<vec.size();j++) {
				if(vec[j] == arr[i]) {
					flag = j;
					break;
				}
			}
			if(flag!=-1) {
				//cout << "flag" << flag << endl;
				while(vec.size()>flag) {
					//cout << "popped" << vec.back() << endl;
					vec.pop_back();
				}
			}
			vec.push_back(arr[i]);
			//cout << "pushed" << vec.back() << endl;
		}
		while(vec.size()) {
			ll num = vec.back();
			ans[num]++;
			//cout << num << "++\n";
			vec.pop_back();
		}
		//cout << "=====\n";
	}
	for(int i=1;i<=m;i++) cout << ans[i] << ' ';
}
