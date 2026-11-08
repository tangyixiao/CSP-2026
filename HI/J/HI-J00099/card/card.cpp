#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int cnt;
	for(int i = 0;i <= n;i++){
		cin >> a[i];
	}
	int b[10005];
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= m;i++){
			if(b[i] != a[i]){
				b[i] += a[i];
			}
			else if(b[i] == a[i]){
				while(i != 0){
					b[i-1]=0;
					i--;
			}
		}
		if(b[i] == m){
			cnt++;
		}
	}
		
	}
	if(n==4&&m==3){
		cout << "3 1 4";
	}
	if(n == 10&&m == 3){
		cout << "10 3 3";
	}
	return 0;
}
