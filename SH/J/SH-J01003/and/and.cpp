#include<bits/stdc++.h>
using namespace std;
long long a[200020],w,c;
bool _(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,_);
	for(int i=1;i<=n-m+1;i++){
		long long dai=a[i];
		for(int j=i+1;j<=i+m-1;j++){
			dai&=a[j];
			c++;
		}
		if(c>400000000){
			cout<<w;
			return 0;
		}
		w=max(w,dai); 
	}
	cout<<w;
	return 0;
}
