#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ls[100005] = {0};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int maxx = 0; 
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> ls[i];
	}
	if(m == 1){
		for(int i = 0;i < n;i++){
			if(ls[i] > maxx){
				maxx = ls[i];
			}
		}
	}
	if(m == 2){
		for(int i = 0;i < n;i++){
			for(int j = i+1;i < n;j++){
				int g = i & j;
				if(g > maxx){
					maxx = g;
				}
			}
		}
	}
	cout << maxx;
	return 0;
}
