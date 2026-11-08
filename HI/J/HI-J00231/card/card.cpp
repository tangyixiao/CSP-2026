#include <bits/stdc++.h>
using namespace std;

int a[500001],zhuo[500001],num[300001];

int qing(){
	for (int i = 0;i < 500001;i++) {
		zhuo[i] = 0;
	}
	return 0;
}

int jisuan(int a){
	for (int i = 0;i < 500001;i++){
		if (zhuo[i] == a) return 1;
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for (int i = 0;i < n;i++){
		cin>>a[i]; 
	} 
	int sun = 0;
	for (int i = 0 ;i < n;i++){
		qing();
		sun = 0;
		for (int j = i;j < n;j++){
			zhuo[sun] = a[j];
			sun++;
			if (jisuan(a[j+1])){
				while(zhuo[sun] != a[j+1]){
					zhuo[sun] = 0;
					sun--;
				}
			}
		}
		for (int j = 1;j <= m;j++){
			num[j] += jisuan(j);
		}
	}
	for (int i = 1;i <= m;i++){
		cout<<num[i]<<' '; 
	}
	return 0;
}

