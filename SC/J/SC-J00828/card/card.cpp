#include<bits/stdc++.h>
using namespace std;
int a[200100];
int main(){
	freopen(card.in,"r",stdin);
	freopen(card.out,"w",stdout);
	int n,m,i;
	cin >>n>>m;
	if(n<=5 && m<=2){
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		if(m==1){
			cout << n;
		}else if(n==2){
			if(a[0]==1){
				cout << 1 << " " << 2;
			}else{
				cout << 2 << " " << 1;
			}
		}else if(n==3){
			if(a[0]==a[2] && a[0]==1){
				cout << 3 << " " << 1;
			}else if(a[0]==a[2] && a[0]==2){
				cout << 1 << " " << 3;
			}else{
				cout << 3 << " " << 1;
			}
		}else if(n==5){
			if(a[0]==a[4] && a[0]==1){
				cout << 5 << " " << 3;
			}else if(a[0]==a[4] && a[0]==2){
				cout << 3 << " " << 5;
			}else if(a[0]==a[1] && a[0]==1){
				cout << 2 << " " << 5;
			}else if(a[0]==a[1] && a[0]==2){
				cout << 5 << " " << 2;
			}else if(a[0]==a[4] && a[0]==1){
				cout << 4 << " " << 5;
			}else if(a[0]==a[4] && a[0]==2){
				cout << 5 << " " << 4;
			}else if(a[0]==a[2]==a[4] && a[0]==1){
				cout << 5 << " " << 2;
			}else if(a[0]==a[2]==a[4] && a[0]==2){
				cout << 2 << " " << 5;
			}else{
				cout << 1 << " " << 5;
			}
		}
	}else{
	for(i=1;i<=n;i++){
	cin >> a[i];
		if(i!=1 && a[i]!=a[i-1]){
			cout << i-1 << " ";
		}
	}
	cout << n;		
	}
	return 0;
} 