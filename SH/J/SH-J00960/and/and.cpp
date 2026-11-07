#include<bits/stdc++.h>
using namespace std;
long long k,a,a2[1000100],a1[1000100],b[1000100];
int n,m;
/*void huan(){
	k=1;
	while(a/2!=0){
		a1[k]=a%2;
		a=a/2;
		k++;
	}
	a1[k]=a%2;
	for(int i=1;i<=k;i++){
		b[i]=a1[k-i+1];
	}
}*/
int cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		a2[i]=a;
	}
	sort(a2+1,a2+n+1,cmp);
	cout<<a2[m];
	return 0;
}
