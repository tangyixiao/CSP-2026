#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

long long n, a[200005], cnt;
char s[200005];
int main (){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> s[i];
	} 
	int left = 1, right = n;
	while(left <= right){
		if(s[left] == s[right]){
			if(a[left] > a[right]){
				a[left] -= a[right];
				right--;
			}
			else if(a[left] < a[right]){
				a[right] -= a[left];
				left++;
			}
			else{
				left++;
				right--;
			}
		}
		else{
			if(a[left] < a[right]){
				cnt += a[left];
				a[right] -= a[left];
				left++;
			} 
			else if(a[left] > a[right]){
				cnt += a[right];
				a[left] -= a[right];
				right--;
			}
			else{
				cnt += a[left];
				left++;
				right--;
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}