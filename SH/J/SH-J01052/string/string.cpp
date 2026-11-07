#include<bits/stdc++.h>
using namespace std;
const int N = 200000 + 666;


struct w{
    long long x;
    char s;
}a[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].x >> a[i].s;
	}
	long long ans = 0;
	int j = n;
	for(int i = 1;i <= n && i < j;){
		if(a[i].s == a[j].s){
			if(a[i].x == a[j].x){
				i++;
				j--;
			}else if(a[i].x > a[j].x){
				a[i].x -= a[j].x;
				j--;
			}else{
				a[j].x -= a[i].x;
				i++;
			}
		}else{
			if(a[i].x == a[j].x){
				ans += a[i].x;
				i++;
				j--;
			}else if(a[i].x > a[j].x){
				ans += a[j].x;
				a[i].x -= a[j].x;
				j--;
			}else{
				ans += a[i].x;
				a[j].x -= a[i].x;
				i++;
			}
		}
	}
	cout << ans;
	return 0;
} 
