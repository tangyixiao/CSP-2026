#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b,v[100001];
	for(int i=1;i<=a;i++){
		cin>>v[i];
	}
	sort(v+1,v+1+a);
	if(a%2==0){
		a/=2;
		cout<<v[a];
	}else{
		a=(a+1)/2;
		cout<<v[a]; 
	}
	return 0;
}

