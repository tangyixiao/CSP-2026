#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;
const int MAXN = 2e5 + 5;

int n,m;
int arr[MAXN];

bool cmp(int a,int b) {
	return a > b;
}

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++) {
		cin>>arr[i];
	}
	sort(arr + 1,arr + 1 + n,cmp);
	int ans = 0;
	int left = 1,right = m;
	while(right <= n) {
		int temp = arr[left];
		if (arr[right] <= ans) break;
		for (int i=left;i<=right;i++) {
			temp &= arr[i]; 
		}
		ans = max(ans,temp);
		left++,right++;
	} 
	cout<<ans<<endl;
	return 0;
}
