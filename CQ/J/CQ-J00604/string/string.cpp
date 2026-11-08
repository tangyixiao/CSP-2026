//priority_queue<int, vector<int>, greater<int>>;
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=200005;
struct node{
	int num;
	char ch;
}e[N];
int n;
int cnt;
int last;
signed main(){
	//freopen("string4.in", "r", stdin);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	last = n;
	for (int i=1; i<=n; i++){
		cin >> e[i].num >> e[i].ch;
	}
	for (int i=1; i<=n; i++){
		if (e[i].num==0){
			break;
		}
		for (int j=last; j>=i; j--){
			if (e[i].ch != e[j].ch){
				cnt += min(e[i].num, e[j].num);
			}
			if (e[i].num >= e[j].num){
				e[i].num -= e[j].num;
				e[j].num = 0;
				last--;
			}else{
				e[j].num -= e[i].num;
				e[i].num = 0;
				break;
			}
			if (e[i].num==0){
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
} 
/*
6
1000000000 a
 1000000000 a
 1000000000 a
 1000000000 b
 1000000000 b
 1000000000 b
*/
/*
时间复杂度：O(?)可能约等于n 
*/
////预估得分：100
