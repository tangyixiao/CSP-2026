#include<bits/stdc++.h>
using namespace std;
struct AND{
	long long num;
	int count;
}a[200010];
int n,m;

bool check(AND x){
	for(int k = 0; k <= 30; k ++){
		if(x.num == pow(2,k)) return 1;
	}
	return 0;
}
bool check2(AND x){
	for(int k = 0; k <= 30; k ++){
		if(x.num == pow(2,k) - 1) return 1;
	}
	return 0;
}
int to_bin(AND x){
	if(x.num == 0) return 0;
	while(x.num != 0){
		if(x.num % 2 == 0){
			x.count ++;
		}
		x.num /= 2;
	}
	return x.count;
}
bool cmp(AND x,AND y){
	return x.count < y.count;
}
bool des(AND x,AND y){
	return x.num > y.num;
}
void s(){
	int count = 1,maxi = 0;
	for(int i = 1; i < n; i ++){
		if(a[i].num == a[i - 1].num) count ++;
		else{
			maxi = max(maxi,count);
			for(int j = 0; j < maxi; j ++){
				swap(a[j],a[i - j]);
			}
			count = 1;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	AND b;
	cin>>n>>m;
	b.num = n;
	bool flag1 = true;
	bool flag2 = true;
	for(int i = 0; i < n; i ++){
		cin>>a[i].num;
		if(check2(a[i]) == 0) flag1 = false;
		if(check(b) == 0 || a[i].num != i){
			flag2 = false;
		}
		a[i].count = 0;
		a[i].count = to_bin(a[i]);
	}
	int ans;
	if(flag1 = true){
		sort(a,a + n,des);
		ans = a[0].num;
		for(int i = 1; i < m; i ++){
			ans = ans & a[i].num;
		}
	}else if(flag2 = true){
		ans = a[n - 1].num;
		for(int i = n - 2; i >= 0; i --){
			ans = ans & a[i].num;
		}
	}else{
		sort(a,a + n,des);
		sort(a,a + n,cmp);
		s();
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
