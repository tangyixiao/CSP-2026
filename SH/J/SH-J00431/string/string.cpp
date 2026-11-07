#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2) {
		int a1,a2;
		char c1,c2;
		cin>>a1>>c1>>a2>>c2;
		if(c1==c2) {
			cout<<0;
			return 0;
		}
		if((a1+a2)%2==1) {
			cout<<(a1+a2-1)/2-(max(a1,a2)-min(a1,a2)-1)/2;
			return 0;
		}
	}
	int cnt=0;
	char c[1000005];
	int cont=0;
	for(int i=0;i<n;i++){
		int m;char a;
		cin>>m>>a;
		for(int i=cnt;i<cnt+m;i++){
			c[i]=a;
		}
		cnt+=m;
	}
	for(int i=0;i<cnt/2;i++){
		if(c[i]!=c[cnt-i-1])cont++;
	}
	cout<<cont;
	return 0;
}
