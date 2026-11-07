#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin >> n;
	int b[100005];
	string m[100005];
	string y;
	for(int i=0;i<n;i++){
		cin >> b[i] >> m[i];
		for(int j=0;j<b[i];j++){
			y+=m[i];
		}
	}
	int len=y.length();
	int c=0;
	for(int i1=0;i1<len/2;i1++){
		if(y[i1]!=y[len-1]){
			c++;
			len--;
		}
	}
	cout << c << endl;
	return 0;
}
