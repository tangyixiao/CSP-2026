#include <bits/stdc++.h>
using namespace std;

int n;
int sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	string a[n];
	int num[n];
	for(int i=0;i<n;i++){
		cin >> num[i] >> a[i];
		if(a[0]==a[i+1]){
			sum++;
		}
	}
	if(sum!=n){
		cout << 0;
	}
	
	return 0;
}
