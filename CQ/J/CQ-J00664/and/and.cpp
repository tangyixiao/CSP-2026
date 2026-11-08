#include<bits/stdc++.h>
using namespace std;
int n , m;
int _n[200001];
int a[200001];
int a_nd(){
	int ans = pow(2,30);
	for(int j = 1;j <= n;j++){
		if(_n[j] == 1){
			ans &= a[j];
		}
	}
	return ans;
}
int main(){
	int h = 0;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= m;i++){
		_n[i] = i;
	}
	int max = 0;
	for(int i = 1;true;i++){
		if(a_nd() > max){
			max = a_nd();
		}
		cout << a_nd();
		int o;
		do{
			for(int j = 2;j <= n;j++){
				o = 0;
				_n[n]++;
				if(_n[j] = 2){
					_n[j] = 0;
					_n[j-i]++;
					if(j == n){
						h = 1;
						break;
					}
				}
				for(int w = 1;w <= n;w++){
					if(_n[w] = 1){
						o++;
					}
				}
			}
			if(h = 1){
				break;
			}
		}while(o != 2);
		if(h = 1){
			break;
		}
	}
	cout << max;
	return 0;
}
