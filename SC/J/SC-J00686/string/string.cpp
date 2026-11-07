#include <bits/stdc++.h>
using namespace std;

int n;
long long a[200005];
char c[200005];
long long ans = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
	}int i = 1,j = n;
	long long x = a[1],y = a[n];
	while(i < j){
		if(c[i] != c[j]){
			if(x == y){
				i++;
				j--;
				x = a[i];
				y = a[j];
				ans+=x;
			}else if(x > y){
				j--;
				ans += y;
				x -= y;
				y = a[j];
			}else{
				i++;
				ans+= x;
				y-=x;
				x = a[i];
			}
		}else{
			if(x == y){
				i++;
				j--;
				x = a[i];
				y = a[j];
			}else if(x > y){
				j--;
				x-=y;
				y = a[j];
			}else{
				i++;
				y-=x;
				x = a[i];
			}
		}
	}cout << ans;
	return 0;
}