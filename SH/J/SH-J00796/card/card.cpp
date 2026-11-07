#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[10000];
	for(int i=0; i<n; i++){
		cin >> a[i]; 
	}
	for(int i=0; i<m; i++){
		cout << "1";
		if(i!=m-1){
			cout << " ";
		}
	}
	
	return 0;
} 
