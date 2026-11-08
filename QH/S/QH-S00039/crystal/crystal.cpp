#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100005;
int n,m,cmp = 0,sum = 0,sum1 = 0;
int a[N],step[N];
bool flag = false;

int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(a[i] == i){
			step[i] = n - i;
			flag = true;
		}
		else if(a[i] - a[i-1] == a[i-1] - a[i-2]){
			flag = false;
			sum = a[i] - a[i-1];
			step[i] = (n - i) * sum;
			
		}
	}
	if(flag == true){
		for(int i = 1;i <= n;i++)
			cmp += step[i];
		if(m >= cmp)
			cout << n; 
		else{
			for(int i = 0;i <= 1e8;i++){
				int b = 0;
				b += i;
				if(b >= m && b - i < m){
					cmp = b;
					sum = i;
					break;
				}
			}
			cout << sum;
		}
	}else{
		for(int i = 1;i <= n;i++)
			cmp += step[i];
		if(m >= cmp)
			cout << n; 
		else{
			for(int i = 0;i <= 1e8;i++){
				int b = 0;
				b += i * sum;
				if(b >= m && b - i * sum < m){
					cmp = b;
					sum1 = i * sum;
					break;
				}
			}
			cout << (sum1 + a[1])/sum;
		}
	}
	return 0;
}
