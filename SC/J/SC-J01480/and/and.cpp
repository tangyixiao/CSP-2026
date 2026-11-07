#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005];
long long ej[35][200005], idx[35]; 
void ycl(long long num) {
	long long len = 0, ls2 = num; 
	while (ls2 >= 1) {
		len++;
		if (ls2 % 2 == 1) {
			ej[len - 1][++idx[len - 1]] = num; 
		}
		ls2 /= 2;
	}
}
bool cmp(long long num,long long bj){
	long long len = 0, ls2 = num; 
	while (ls2 >= 1) {
		len++;
		if(len-1==bj){
			if(ls2%2==1) return true;
			return false;
		}
		ls2 /= 2;
	}
	return false;
}
long long poww(long long x,long long num){
	long long ans=1;
	for(int i=1;i<=num;i++){
		ans*=x;
	}
	return  ans;
}
long long ls1[200005],lsidx=0;
long long ls2[200005];
void print(long long num) { 
	long long ans = poww(2, num);
	lsidx=idx[num];
	for(int i=1;i<=lsidx;i++){
		ls1[i]=ej[num][i];
	}
	num--;
	while (num > -1) { 
		long long bj = num,cnt=0;
		for (int i = 1; i <= lsidx; i++) {
			if(cmp(ls1[i],bj)){
				cnt++;
				ls2[cnt]=ls1[i];
			}
		}
		if(cnt>=m){
			ans+=poww(2,num);
			for(int i=1;i<=cnt;i++){
				ls1[i]=ls2[i];
			}
			lsidx=cnt;
		}
		num--;
	}
	cout << ans;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ycl(a[i]);
	}
	for (long long i = 32; i >= 0; i--) {
		if (idx[i] >= m) { 
			print(i);
			return 0;
		}
	}
	cout << 0;
	return 0;
}
