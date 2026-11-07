#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000000000;
long long n,j,sum = 0,sumf = 0;
char q;
bool ju = true;
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	
	for(int i = 1;i<=n;i++){
		cin >> j >> q;
		
		
		for(int k = sum;k<j+sum;k++){
			c[k] = q;
			
		}
		sum += j;
	}
	long long mid = sum/2;
	for(int i = 0;i<mid;i++){
		if(c[i] == c[sum-1-i]){
			continue;
		}
		else{
			ju = false;
			sumf+=1;
		}
	}
	if(ju == true){
		cout << 0;
	}
	else{
		cout << sumf;
	}
	return 0;
} 
