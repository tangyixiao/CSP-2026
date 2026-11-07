#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
    sort(0,n);
    string b[n];
	for(int i = n-1; i >= n-m-1; i--){
		int a = s[i];
		while(a > 0){
			b[i] += a % 2;
			a = a / 2;
		}
	}
	string sum = 0;
    for(int i = n-1; i >= n-m-1; i--){
    	
    	sum += b[i];
	}
	int j = 0;
	j = pow(j,2);
	for(int i = sum.size()-1; i >= 0; i--){
		sum += sum[i]*j ;
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0; 
} 