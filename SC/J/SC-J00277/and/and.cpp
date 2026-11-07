#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r","std.in");
	freopen("and.out","w","std.out");
	int a,b;
	cin>>a>>b;
	int c[a+1];
	for(int i=1;i<=a;i++){
		cin>>c[i];
	}
	int s=0;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(c[i]and c[j]>s){
				s=c[i]and c[j];
			}
		}
	}
	cout<<s;
	return 0;
}
