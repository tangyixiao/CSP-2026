#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[200005];
int ans;

bool cmp(int x,int y){
	return x>y; 
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
    if(m == 1){
    	sort(a+1,a+n+1,cmp);
    	cout << a[1];
	}else if(m == 2){
		int maxn = 0;
		for(int i = 1;i < n;i++){
			for(int j = i+1;j <= n;j++){
				maxn = max(maxn,(a[i]&a[j]));
			}
		}
		cout << maxn;
	}else if(m == n){
		int sum = a[1];
		for(int i = 2;i <= n;i++)    sum &= a[i];
	}else{
	    sort(a+1,a+n+1,cmp);
	    int flag = 0;
	    for(int i = 1;i <= n;i++){
	    	if(a[i] % 2 != 0){
	    		flag = 1;
	    		break;
			}
		}
		int flag2 = 1;
		for(int i = 1;i <= n;i++){
			if(a[i] > 4){
				flag2 = 0;
				break;
			}
		}
		int x = n,flag3 = 1;
		while(x){
			int tmp = x%2;
			if(tmp == 0){
				flag3 = 0;
				break;
			}
		}
		if(flag2 && !flag3 && !flag){
			int cnt3 = 0,cnt2 = 0;
			for(int i = 1;i <= n;i++){
				if(a[i] == 2)    ++cnt2;
				if(a[i] == 3)    ++cnt3;
			}
			if(cnt2+cnt3 >= m){
				cout << 2;
			}else{
				cout << 0;
			}
		}else if(flag){//B
			cout << (a[m]&a[m-1]);
		}else{//A
			cout << a[1];
		}
	}
	return 0;
}
