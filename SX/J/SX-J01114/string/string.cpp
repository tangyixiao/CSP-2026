#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,i,L;
	int left,right=0;
	cin >> n >> i;
	for(int i=0;i <= n;i++){
		cin >> left >> right;
	}
	for(;left <= right;left++){
		if(i <= L)
			n++;
	}
	cout << n;
	fclose(stdin);
	fclose(stdout);
	return 0;
}