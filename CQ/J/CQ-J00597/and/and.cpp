#include <bits/stdc++.h>
#define int long long
using namespace std;
int num[200005];
int ym[32] = {0,1,2,4,8,16,32,64,128,256,512,1024,2048,8192,16384,32768,65536,131072,262144,524288,
1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
int check(int x,int y){
	if(x&ym[y]){
		return 1;
	}
	else{
		return 0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m;
	cin >> n >> m;
	queue<int> q;
	for(int i = 1;i<=n;i++){
		cin >> num[i]; 
		q.push(num[i]);
	}
	
	if(m == 1){
		cout << 0;
		return 0;
	}
	
	for(int i = 30;i>=1;i--){
		int cnt = 0;
		int longs = q.size();
		for(int j = 1;j<=longs;j++){
			int nows = q.front();
			q.pop();
			q.push(nows);
			cnt += check(nows,i);
		}
		
		if(cnt>=m){
			for(int j = 1;j<=longs;j++){
				int nows = q.front();
				q.pop();
				if(check(nows,i)){
					q.push(nows);
				}
			}
		}
	}
	int ans = q.front();
	q.pop();
	if(!q.empty()){
		int longs = q.size(); 
		for(int i = 1;i<=longs;i++){
			int o = q.front();
			q.pop();
			ans = ans&o;
		}
	}
	cout << ans;
	return 0;
} 

