#include<bits/stdc++.h>
using namespace std;
const int N=10000009;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,q=0,ne=0;
	int a[N];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	for(int i=0;i<n;i++){
		q=a[i]&&a[i+1];
		ne=a[i+1]&&a[i];
		if(q<ne){
			q=ne;
		}
	}
	cout<<ne+a[3]<<endl;
	return 0;
	
	
}
