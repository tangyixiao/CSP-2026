#include <bits/stdc++.h>
using namespace std;
int jkl[400000003];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	int asd=0;
	for(int j=1;j<=n;j++){
		cin>>a;
		char s;
		cin>>s;
		for(int i=1;i<=a;i++){
			jkl[asd+i]=s-'0';
		}
		asd+=a;
	}
	int num=0;
	for(int i=1;i<=asd/2;i++){
		if(jkl[i]!=jkl[asd-i+1]){
			num++;
		}
	}
	cout<<num;
	return 0;
}
