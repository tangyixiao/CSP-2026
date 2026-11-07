#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long n,m,cnt;
long long a[N],b[N][35],ans[35],c[35],zg,aans = 0;
bool k[N],flag = true;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i ++)
		cin>>a[i];
	for(int i = 1; i <= n; i ++){
		cnt = 1;
		k[i] = true;
		while(a[i] > 0){
			b[i][cnt] = a[i] % 2;
			a[i] /= 2;
			c[cnt] += b[i][cnt];
			cnt ++;
		}
	}
	for(int i = 33; i >= 0; i --){
		if(c[i] >= m){
			ans[i] = 1;
			zg = i;
			break;
		}
	}
	while(flag){
		flag = false;
//		for(int i = n; i >= 1; i --){
//			cout<<ans[i];
//		}
//		cout<<endl;
		for(int i = 1; i <= 35; i ++){
			c[i] = 0;}
		for(int i = 1; i <= n; i ++){
			if(b[i][zg] == 1 and k[i]){
				for(int j = zg-1; j >= 0; j --){
					c[j] += b[i][j];}}
			else if(k[i]){
				k[i] = false;}}
		for(int i = zg - 1; i >= 0; i --){
			if(c[i] >= m){
				ans[i] = 1;
				zg = i;
				flag = true;
				break;
		}
	}
	}
	for(int i = 33; i >= 1; i --){
		aans = 2 * aans;
		aans += ans[i];}
	cout<<aans;
}
