#include<bits/stdc++.h>
using namespace std;
long long n, ans;
struct node{
    char s;
    long long x;
}a[2000005];
int main(){
    freopen("string.in","r", stdin);
    freopen("string.out","w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].x >> a[i].s;
    }
    int j = n;
    for(int i = 1; i + 1 <= j; i++){
    	while(a[i].x > 0){
    		if(a[j].s != a[i].s){
    			if(a[j].x > a[i].x){
    				ans += a[i].x;
    				a[j].x -=a[i].x;
    				a[i].x = 0;
				}else{
					ans += a[j].x;
    				a[i].x -=a[j].x;
    				a[j].x = 0;
    				j--;
				}
			}else{
				if(a[j].x > a[i].x){
    				a[j].x -=a[i].x;
    				a[i].x = 0;
				}else{
    				a[i].x -=a[j].x;
    				a[j].x = 0;
    				j--;
				}
			}
		}
	}
    cout << ans;
    return 0;
}