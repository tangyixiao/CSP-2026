#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=200005;
struct node{
	vector<int> num;
	int sum;
}e[35];
int pow1[35];
void zjz(int k){
	int cnt=0;
	int ind=k;
	while (ind!=0){
		int mul = ind % 2;
		if (mul){
			e[cnt].num.push_back(k);
			e[cnt].sum++;
		}
		ind /= 2;
		cnt++;
	}
}
void pre(){
	pow1[0] = 1;
	for (int i=1; i<=31; i++){
		pow1[i] = pow1[i-1] * 2;
	}
}
int n;
int m;
int a;
bool flag=true;
int ans;
int now;
int last;
int q=0;
map<int, int> mp;
bool bj(int now, int last, int q){
	int res=0;
	for (int i=0; i<e[now].sum; i++){
		if (mp[e[now].num[i]] == q){
			res++;
		}
		//cout << e[now].num[i] << " ";
	}
	//cout << res << " " << now << " " << q << endl;
	if (res>=m){
		for (int i=0; i<e[now].sum; i++){
			if (mp[e[now].num[i]] == q){
				mp[e[now].num[i]]++;
			}
		}
		return true;
	}else{
		return false;
	}
}
signed main(){
	//freopen("and3.in", "r", stdin);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	pre();
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		cin >> a;
		zjz(a);
	}
	for (int i=31; i>=0; i--){
		if (e[i].sum>=m&&flag){
			ans += pow1[i];
			flag = false;
			for (int j=0; j<e[i].sum; j++){
				mp[e[i].num[j]] = 1;
			}
			q++;
			//cout << i << endl;
			continue;

		}
		if (e[i].sum>=m&&!flag){
			if (bj(i, last, q)){
				//cout << i << endl;
				ans += pow1[i];
				q++;
			}
		}
	}
	cout << ans << endl;
	return 0;
} 
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
/*
思路：注意到这是按位与，考虑以下操作
1.思考：将每一个数进行二进制转化，时间复杂度O(30N)
2.恰好选出 m 个 ，则对于最后结果的二进制 k 位，必须全部为一才可，用数组存即可 
3.贪心取最大的有m个数的位，一直向后筛即可，这样时间复杂度 O(30N)可过 
4.思考，若最高位不止一个，该如何去重 
*/
//可能会卡 map 
////预估得分：95
