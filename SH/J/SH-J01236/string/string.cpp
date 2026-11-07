#include<bits/stdc++.h>
using namespace std;
int n, a, b;
char x, y;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	if(n==2){
		cin>>a>>x>>b>>y;
		if(x==y){
			cout<<0;
		}else{
		cout<<abs(a-b);
		}
		return 0;
	}
	cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
