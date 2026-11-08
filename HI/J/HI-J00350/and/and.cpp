#include <bits/stdc++.h>
using namespace std;

int wand(int numa,int numb){
	int era =0,erb =0;
	while(numa>0){
		era *= 10;
		era += numa % 2;
		numa /= 2;
	}
	while(numb>0){
		erb *= 10;
		erb += numb % 2;
		numb /= 2;
	}
	int numand = 0,wq = 1;
	while(era>0 && erb>0){
		numand += ((era%10) && (erb%10))*wq;
		era /= 10;erb /= 10;
		wq *= 2;
	}
	return numand;
};

int a[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	int wmaxn = -1;
	if(m==1){
		sort(a+1,a+n+1);
		wmaxn = a[n];
	}
	else if(m==2){
		for(int i=1;i <= n;i++){
			for(int j=1;j <= n;j++){
				if(i!=j){
					wmaxn = max(wmaxn,wand(a[i],a[j]));
				}
			}
		}
	}
	else if(m==n){
		for(int i=1;i <= n;i++){
			wmaxn = wand(a[i],wmaxn);
		}
	} 
	cout << wmaxn;
} 
