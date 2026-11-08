#include<bits/stdc++.h>
using namespace std;
const int z=2e5+10;
int n,m;
int a[z],b[z];
int q=0;
void w(){
	for(int i=0;i<n;i++){
		int v=1111111111111111111111111111111;
		for(int j=i;j<m+i;j++){
			v&=b[j];
		}
		q=max(q,v);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a[i]=x;
		int t=1;
		while(x!=0){
			b[i]+=x%2*t;
			x/=2;
			t*=10;
		}
	}
	sort(b,b+n,greater<int>{});
	sort(a,a+n,greater<int>{});
	if(m==1){
		cout<<a[0];
		return 0;
	}
	w();
	int g=0;
	int e=1;
	while(q!=0){
		g=q%10*e;
		q/=10;
		e*=2;
	}
	cout<<g;
	return 0;
}
