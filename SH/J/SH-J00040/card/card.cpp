#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
const int M = 3e5 + 10;
int a[N];
struct node{
	int x,num;
};
vector<node> b;
vector<int> cd;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>> n >> m;
	for(int i = 1;i <= n;i++){
		cin>> a[i];
		bool isOK = true;
		for(int j = 0;j < b.size();j++){
			if(a[i] == b[j]){
				isOK = false;
			}
		}
		if(isOK){
			b.push_back({a[i],0})
		} 
	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			bool isOK = true;
			int idx;
			for(int k = 0;k < cd.size();k++){
				if(cd[k] == a[j]){
					isOK = false;
					idx = k;
					break;
				}
			}
			if(isOK){
				cd.push_back(a[j]);
			}
			else{
				int len = cd.size();
				for(int j = idx;j < len;j++){
					cd.pop_back();
				}
			}
		}
		bool judge = false;
		for(int j = 0;j < cd.size();j++){
			if(cd[j] == i){
				judge = true;
				break;
			}
		}
		if(judge){
			for(int j = 0;j < b.size();j++){
				if(b[j].x == cd[j]){
					b[j].num++;
				}
			}
		}
	}
	for(int i = 1;i <= m;i++){
		if(b[i] != 0){
			cout<< b[i] << ' ';
		}
	}
	return 0; 
}
