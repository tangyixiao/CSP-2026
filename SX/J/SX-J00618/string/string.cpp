#include <bits/stdc++.h>
using namespace std;
int n,l = 1,o;
char a[10000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		int m;
		char p;
		cin >> m >> p;
		o+=m;
		for(int j = l;j <= l+m-1;j++){
			a[j] = p;
		}
		l = l+m;
	}
	int sum = 0;
	if(o%2 == 1){
	    for(int i = 1;i <= (o-1)/2;i++){
			if(a[i] != a[o-i+1]){
				sum++;
			}
		}
	}
	else{
		for(int i = 1;i <= o/2;i++){
			if(a[i] != a[o-i+1]){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}