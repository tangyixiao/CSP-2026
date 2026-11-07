# include <bits/stdc++.h>
# define int long long
# define endl "\n"
using namespace std;

const int N = 2e5 + 10;

struct Node{
	int num = 0;
	char c = '0';
} a[N];

int n, idx = 1;
// idx: 上一个输入位置 

inline int getl(int ii, int i){
	// 获取 ii(jj) 段中的剩余字符数
	return a[ii].num - i;
}

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	cin >> a[1].num >> a[1].c;

	for(int i=2;i<=n;i++){
		int x;
		char c;
		cin >> x >> c;
		if(a[idx].c == c){
			a[idx].num += x;
		} else {
			a[++idx].num = x;
			a[idx].c = c;
		}
	}

	int i = 0, j = 0,  // 当前段中已消耗的字符 
		ii = 1, jj = idx,  // 当前段
		ans = 0;
	
	while(ii < jj){
		const int minn = min(getl(ii, i), getl(jj, j));
		
//		cout << "i: " << i << " j: " << j << endl;
//		cout << "minn: " << minn << " ans: " << ans << endl;

		if(a[ii].c != a[jj].c){
			ans += minn;
//			cout << "ans += " << minn << endl;
		}

		i += minn;
		j += minn;
		
//		cout << "updated i to " << i << endl;
//		cout << "updated j to " << j << endl;
		
		// 处理边界
		if(i == a[ii].num){
			i = 0;
			ii ++;
		}
		if(j == a[jj].num){
			j = 0;
			jj --;
		}
		
//		cout << "updated i to " << i << endl;
//		cout << "updated j to " << j << endl;

	}
	
	cout << ans << endl;
	
	return 0;
}

