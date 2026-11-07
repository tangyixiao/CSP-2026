#include <bits/stdc++.h>
using namespace std;

int n,m;
long long num[2 * 100000 + 5];
bool a[2 * 100000 + 5][31];
bool not_choose[2 * 100000 + 5];
int cnt[31];
vector <long long> ans;
int max_m = -1;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n >>m;
	for(int i = 1;i <= n;i ++) {
		cin >>num[i];
		for(int j = 0;j < 30;j ++) {
			if( (num[i] & (1 << j)) == (1 << j)) {
				a[i][j] = 1;
				cnt[j] ++;
			}else {
				a[i][j] = 0;
			}
		}
	}
	for(int i = 0;i < 30;i ++) {
		if(cnt[i] >= m) {
			max_m = i;
		}
	}
	if(max_m == -1) {
		cout <<0;
		return 0;
	}
	memset(not_choose,false,sizeof(not_choose));
	for(int i = 1;i <= n;i ++) {
		if(a[i][max_m] == 1) {
			ans.push_back(i);
		}
	}
	int now_size = ans.size();
	int now_djc = max_m - 1;
	while(now_size > m && now_djc >= 0) {
		int have_sl = 0;
		for(long long x : ans) {
			if(not_choose[x] == false && a[x][now_djc] == 1) {
				//for(int i = 29;i >= 0;i --) {
				//	cout <<a[x][i];
				//}
				//cout <<"  " << num[x] <<endl;
				have_sl ++;
			}
		} 
		if(have_sl >= m) {
			for(long long x : ans) {
				if(not_choose[x] == false && a[x][now_djc] == 0) {
					not_choose[x] = true;
					now_size --;
				}
			}
		}
		//cout <<endl <<"!!!\n"<<endl;
		now_djc --;
	}
	int final_answer = -1;
	int ci = 0;
	for(int x : ans) {
		if(not_choose[x] == false) {
			//cout <<num[x] <<endl;
			if(final_answer == -1) {
				final_answer = num[x];
			}else {
				final_answer = final_answer & num[x];
			}
			ci ++;
		}
		if(ci == m) {
			break;
		}
	}
	cout <<final_answer;
	return 0;
}
