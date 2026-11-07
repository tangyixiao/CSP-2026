#include<bits/stdc++.h>
using namespace std;
int a,b,v,c;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a;
	cin>>b;
	long long h[20001];
	for(int i=1;i<=a;i++){
		cin>>h[i];
	}v=h[1];
	for(int i=1;i<=a-b+1;i++){
		for(int j=i;j<=a;j++){
			for(int _=1;_<=b;_++){
				v=h[j+1]&v;
			}
			if(v>c){
				c=v;
			}
		 }

	}
	cout<<c;
	
	
	
	return 0;
}
