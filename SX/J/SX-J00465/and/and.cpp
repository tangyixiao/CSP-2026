#include <bits/stdc++.h>
using namespace std;

struct jntm {
	long long num;
	string s = "";
};

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n;
	cin >> n;
	int m;
	cin >> m;
	long long d = 0;
	jntm a[n + 3];
	for (int i = 1; i <= n; i++) {
		cin >> a[i].num;
		d = max(d, a[i].num);
	}
	if (m == 1) {
		cout << d;
		return 0;
	}
//
//	for (int i = 1; i <= n; i++) {
//		if (a[i].num == 0) {
//			a[i].s += '0';
//		} else {
//			while (a[i].num > 0) {
//				a[i].s += (a[i].num % 2 + '0') ;
//				a[i].num /= 2;
//			}
//		}
//
////		for (int j = a[i].s.size() - 1; j >= 0; j--) {
////			cout << a[i].s[j];
////		}
////		cout << endl;
//
//	}
//	int sum=0;
//	for(int i=1;i<=n-m+1;i++){
//		string a1='';
//		int sum1=0;
//		for(int j=i;j<=j+m-2;){
//	//		if(j==i) {
//				for(int k=0;k<min(a[j].s.size(),a[j+1].s.size());k++){
//				if(a[j].s[k]==a[j+1].s[k]){
//					a1+='1';
//				}
//				else a1+='0';
//			}
//	//		}
////			else{
////					for(int k=0;k<min(a[j].s.size(),a[j+1].s.size());k++){
////				if(a[j].s[k]==a[j+1].s[k]){
////					a1+='1';
////				}
////				else a1+='0';
////			}
//		//	}
//
//		}
//		for(int j=a[].size()-1;j>=0;j--){
//			int pow(2,a[i])
//			if(a[i].s[j]!='0'){
//
//			}
//		}
//	}

	return 0;
}
