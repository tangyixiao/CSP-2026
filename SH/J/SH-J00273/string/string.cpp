#include<bits/stdc++.h>
using namespace std;
long long a[100010],c;
char z[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> z[i];
	}
	int l = 1,r = n;
	while(l < r){
		if(z[l] != z[r]){
			if(a[l] == a[r]){
				c += a[l];
				l++;
				r--;
			}else if(a[l] < a[r]){
				c += a[l];
				a[r] -= a[l];
				l++;
			}else{
				c += a[r];
				a[l] -= a[r];
				r--;
			}
		}else{
			if(a[l] == a[r]){
				l++;
				r--;
			}else if(a[l] < a[r]){
				a[r] -= a[l];
				l++;
			}else{
				a[l] -= a[r];
				r--;
			}
		}
	}
	cout << c;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
