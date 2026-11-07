#include<bits/stdc++.h>
using namespace std;
long long number(long long x,long long y){
	long long sum = 1, num = 0;
	while(1){
		if(x%2 == 1 && y%2 == 1){
			num += sum;
		}
		sum*=2;
		if(x == 1 || y == 1){
			break;
		}
		x /= 2;
		y /= 2; 
		
	}
	return num;
}
long long n, m, ma = 0;
const int maxn = 1e6+10;
int a[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];	
	}
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			ma = max(ma,number(a[i],a[j]));
		}
	}
	cout << ma;
	return 0;
}
