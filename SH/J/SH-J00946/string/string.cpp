#include <bits/stdc++.h>
#define pii pair<int,char>
#define int long long
using namespace std;
int n;
pii a[200000+10];
int ans;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//存数据 
	cin >> n;
	for (int i=1;i<=n;i++) {
		int ai;
		char ci;
		cin >> ai >> ci;
		a[i].first=ai;
		a[i].second=ci;
	}
	//双指针
	int l=1,r=n,lcnt=a[1].first,rcnt=a[n].first;
	//先看不重合情况 
	while (l<r) {
		//判断两个指针对应的字符是否相等
		if (a[l].second == a[r].second) {
			//如果相等，少的一部分可以消除，多的减少的 
			//指针移向下一个
			if (lcnt<rcnt) {
				rcnt-=lcnt;
				l++;
				lcnt=a[l].first;
			}
			else if (lcnt==rcnt) {
				l++;
				r--;
				lcnt=a[l].first;
				rcnt=a[r].first;
			}
			else {
				lcnt-=rcnt;
				r--;
				rcnt=a[r].first;
			}
		}
		//如果不相等，答案加上不相等的这一部分，再消除 
		else {
			if (lcnt<rcnt) {
				ans+=lcnt; 
				rcnt-=lcnt;
				l++;
				lcnt=a[l].first;
			}
			else if (lcnt==rcnt) {
				l++;
				r--;
				ans+=lcnt;
				lcnt=a[l].first;
				rcnt=a[r].first;
			}
			else {
				lcnt-=rcnt;
				ans+=rcnt;
				r--;
				rcnt=a[r].first;
			}
		}
	}
	cout << ans;
	//有可能恰好两边相等，也有可能还剩余
	//还有可能中间剩一个完整的段，两边全消完了 
	//通过当前消除了多少个字符来判断 
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
