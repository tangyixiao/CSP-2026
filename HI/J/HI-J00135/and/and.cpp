#include <bits/stdc++.h>
using namespace std;

int A[1000];

void A1(int a[] , int n , int o){
	int l = 0;
	A[o] = a[l];
	for (int i = 1 ; i < n ; i++){
		if (a[i] > A[o]){
			A[o] = a[i];
			l = i;
		}
	}
	a[l] = 0;
}

int main (){
	freopen ("and.in" , "r" , stdin);
	freopen ("and.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	int a[n];
	int k = 0;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
		k++;
	}
	
	for (int i = 0 ; i < m ; i++){
		A[i] = a[0];
	}
	
	//mmmm
	for (int i = 0 ; i <= m-1 ; i++){
		A1(a , n , i);
	}
	//mmmm
	
	for (int j = 1 ; j < n ; j++){
		A[k-1] = max(A[k-1] , a[j]);
	}
	
	int ff;
	for (int g = 0 ; g < m-1 ; g++){
		ff = A[g] & A[g+1];
	}
	cout << ff;
	return 0;
} 
