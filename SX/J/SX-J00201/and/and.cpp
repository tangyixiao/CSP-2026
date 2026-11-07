#include<bits/stdc++.h>
using namespace std;
int mp[50];
struct node{
	int num,mx;
	int e[50];
}a[200005];
int n,m;
long long sum = 0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >>m;
int mmax = 0;

	for(int i = 1;i<=n;i++){
		cin >> a[i].num;
		mmax = max(mmax,(int)(ceil(log2(a[i].num))));}
		for(int i = 1;i<=n;i++){

		int cnt = ceil(log2(a[i].num));

	while(a[i].num){
		a[i].e[cnt] = a[i].num%2;
		mp[cnt] += a[i].num%2;
		a[i].num/=2;
		cnt--;
		a[i].mx++;

	}}
	for(int i = 30;i>=1;i--){
		if(mp[i] >=m){
			sum+=pow(2,i)*2;
//			cout << sum;
			for(int j = 1;j<=n;j++){
				if(a[j].e[i]==0){
					for(int k = 1;k<=30;k++){
						a[j].e[k] = 0;
						mp[k]--;
					}
				}
			}
		}

	}
cout << sum;
	return 0;
}
//t3两个小时心态爆炸有思路没写出来，做完t4后看不懂自己代码删了一半重写还没写出，我真没招了，给你了给你了