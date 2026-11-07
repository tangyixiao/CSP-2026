#include<bits/stdc++.h>
using namespace std;
string a[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int length=0;
	for(int i=0;i<n;i++){
		int m;
		char x;
		cin>>m;
		cin>>x;
		for(int j=0;j<m;j++){
			a[length]=x;
			length++;
		}
	}
	int num=0;
	for(int i=0;i<length/2;i++){
		if(a[i]!=a[length-i-1]){
			num++;
		}
	}
	cout<<num;
	
	return 0;
}
/*
3
2 a
2 b
1 c
*/
/*
2
2 a
3 a
*/
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/