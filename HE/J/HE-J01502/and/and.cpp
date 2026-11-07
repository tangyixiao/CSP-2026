#include <bits/stdc++.h>
using namespace std;
int n,m,a[100005],And;
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i) cin>>a[i];
	for(int i=0;i<n;i++){
		int c=i,l;
		for(int j=i+1;j<n;j++){
			if(a[c]>a[j]){
				l=a[c];
				a[c]=a[j];
				a[j]=l;}
			c++;}}
	And=a[n-1];
	for(int i=n-2;i>n-m-1;i--) if(a[i]<And) And=a[i];
	cout<<And;
	return 0;
}
