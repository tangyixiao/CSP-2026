#include<bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];

long long s[40000005];
bool cmp(long long a, long long b){
	return a > b;
}

int main(){
	srand(time(0)); 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
    for	(int i = 1; i <= n; i++){
    	cin >> a[i];
	}
    sort(a+1, a+n+1, cmp);
    if(m == 1){
    	cout << a[1];
    	return 0;
	}
	else if(m == 2){
		int h = 1;
    for	(int i = 1; i <= n; i++){
    	for(int j = i+1; j <= n; j++){
    		long long p = a[i]&a[j];
    		s[h] = p;
    	
    		h++;
		}
	}
	
		sort(s+1, s+h+1, cmp);
	

	long long ans = -1;
	for(int i = 1; i <= m; i++){
		ans = max(s[i], ans);
		//cout << s[i][j] << ' ';
	}
	cout << ans;

	return 0;}
	else{
		cout << rand();
	}
}