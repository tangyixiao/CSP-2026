#include<bits/stdc++.h> 
using namespace std;
const int N = 5e5+5 , M = 3e5+5;
int n , m , a[N] , b[M] , c[M]; stack<int>s;  
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin >> n >> m; 
	for(int i = 1 ; i <= n ;i++)cin >> a[i];
	 for(int j = n ; j ; j--){
			for(int i = 1 ; i <= m ; i++){
				cout << c[i] <<" " <<endl;
			}
		}
	
	
	return 0;
}
