#include<bits/stdc++.h>
using namespace std;
int n,m,top,b[300030];
int a[500050],t[500050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i =1; i<= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i<= n; i++){
		top=0;
		//cout << i <<" ";///////////////////////
		for(int j=i; j<= n;j++){
			for(int k = 1; k <= top;k++){
				if(t[k]==a[j]) top=k-1;
				//cout << t[k]<<" ";///////////////////////
			}
			//cout <<"\n";/////////////////////
			t[++top]=a[j];
		}
		//cout <<"\n";////////////////////////////
		for(int k = 1; k <= top;k++){
			b[t[k]]++;
		}
	}
	for(int i = 1; i<= m;i++){
		cout << b[i]<<" ";
	}
	/*
	10 3
3 1 2 1 3 2 3 1 2 1
	*/
	return 0;
}
