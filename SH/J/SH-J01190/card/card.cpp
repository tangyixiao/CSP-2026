#include<bits/stdc++.h>
using namespace std;
std::ifstream fin("card.in");
std::ofstream fout("card.out");
const int maxn = 500000 + 5;
int a[maxn];
long long cnt[maxn];
struct node{
	bool f;
	int po;
}flag[maxn];
int main(){
	int n, m;
	fin >> n >> m;
	for (int i = 1; i <= n; i++){
		fin >> a[i];
	} 
	for (int i = 1; i <= n; i++){
		for (int j = i; j <= n; j++){
			if (flag[a[j]].f != true){
				flag[a[j]].f = true;
				flag[a[j]].po = j;
			}
			else{
				for (int k = j; k >= flag[a[j]].po; k--){
					flag[a[k]].f = false;
				}
				flag[a[j]].f = true;
			}
		}
		
		for (int j = 1; j <= n; j++){
			if (flag[a[j]].f == true){
				cnt[a[j]]++;
				flag[a[j]].f = false;
			} 
		} 
//		for (int i = 1; i <= m; i++){
//			cerr << cnt[i] << " ";
//		}
//		cout << "\n";
	}
	for (int i = 1; i <= m; i++){
		if (cnt[i] != 0){
			fout << cnt[i] << " ";
		}
	}
	return 0;
}
