#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("string.in","r",stdin);
    //freopen("string.out","w",stdout);
    int n;
    cin >> n;
    int a[n+10] = {0};
    string c[n+10] = {};
    long long cnt = 0;
    long long cnt2 = 0;
    for(int i=1;i <= n;i++){
    	cin >> a[i] >> c[i];
    	cnt += a[i];
	}
	int x = 0,t=0;
	while(1){
		if(a[n-x] <= a[t] && c[n-x] != c[t]){
			cnt2 += a[n-x]; 
			cnt -= a[n-x] * 2;			
			a[t] -= a[n-x];
			a[n-x] = 0;
		}
		else if(a[n-x] > a[t] && c[n-x] != c[t]) {			
			cnt2 += a[t];
			cnt -=a[t]*2;			
			a[n-x] -= a[t];
			a[t] = 0;
		}
		else if(a[n-x] <= a[t] && c[n-x] == c[t]){
			cnt -= a[n-x]*2;			
			a[t] -= a[n-x];
			a[n-x] = 0;
		}
		else{
			cnt -=a[t]*2;			
			a[n-x] -= a[t];
			a[t] = 0;
		}
		if(a[n-x] == 0){
			x++;
		}
		if(a[t] == 0){
			t++;
		}
		if(cnt == 0){
			break;
		}
	}
	cout << cnt2;
	return 0;
}
