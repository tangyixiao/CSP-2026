#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n,m,x,a[N][35],sum,ans;
queue<int> q,tmp;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> x;
		int res = 1;
		while(x > 0){
			a[i][res] = x % 2;
			x /= 2;
			res++;
		}
		sum = max(sum,res);
	}
	for(int i = sum;i >= 1;i--){
		int cnt = 0;
		while(!q.empty())q.pop();
		for(int j = 1;j <= n;j++){
			if(a[j][i] == 1){
				cnt++;
				q.push(j);
			}
		}
		if(cnt >= m){
			sum = i;
			break;
		}
	}
	for(int i = sum;i >= 1;i--){
		int len = q.size(),cnt = 0;
		for(int j = 1;j <= len;j++){
			if(a[q.front()][i] == 1){
				cnt++;
				tmp.push(q.front());
			}
			q.push(q.front());
			q.pop();
		}
		if(cnt >= m){
			ans += pow(2,i - 1);
			while(!q.empty())q.pop();
			while(!tmp.empty()){
				q.push(tmp.front());
				tmp.pop();
			}
		}
	}
	cout << ans << endl;
	return 0;
}
