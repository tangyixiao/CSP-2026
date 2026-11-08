#include <bits/stdc++.h>
using namespace std;
const int p=1e9;
char a[p];
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		int z;
		char b;
		cin>>z>>b;
		for(int j=1;j<=z;j++){
			cnt++;
			a[cnt]=b;
		}
	}
	int num=0;
	int s=(cnt-1)/2;
	for(int i=1;i<=s;i++){
		if(a[i]!=a[cnt-i+1]){
			num++;
		}
	}
	cout<<num;
	return 0;
}
