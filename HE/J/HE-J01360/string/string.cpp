#include <bits/stdc++.h>
using namespace std;
struct qwe{
	int x;
	char y;	
}a;
int n,c,d;
char b[1000000010];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a.x>>a.y;
		d+=a.x;
		for(int j=1;j<=a.x;j++){
			b[j]=a.y;
		}
	}
	int l=1,r=d;
	while(l<r){
		if(b[l]!=b[r]) c++;
		l++;
		r--;
	}
	cout<<c;
	return 0;
}
