#include<bits/stdc++.h>
using namespace std;
int n , m , a[500005] , ans[300005] , b[500005];
bool isempty(int x[]){
	for(int i=1;i <= n;i++)
		if(x[i] != 0)
			return false;
	return true;
}
bool isnumber(int x[] , int y){
	for(int i=1;i <= n;i++)
		if(x[i] == y)
			return true;
	return false;
}
int wherenumber(int x[] , int y){
	for(int i=1;i <= n;i++)
		if(x[i] == y)
			return i;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
	for(int l = 1;l <= n;l++){
		int cnt = 1;
		for(int i = l;i <= n;i++){
			if(isnumber(b,a[i]) == false)
				b[cnt++] = a[i];
			else{
				for(int j=wherenumber(b,a[i])+1;j<=cnt;j++)
					b[j] = 0;
				cnt = wherenumber(b,a[i])+1;
			}
		}
		for(int i = 1;i <= m;i++)
			if(isnumber(b,i) == true)
				ans[i]++;
		for(int i = 1;i <= n;i++)
			b[i] = 0;
	}
	for(int i = 1;i <= m;i++)
		cout << ans[i] << ' ';
	return 0;
} 
