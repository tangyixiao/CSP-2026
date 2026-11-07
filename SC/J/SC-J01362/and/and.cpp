#include<bits/stdc++.h>
using namespace std;

const int N=2*30+50;
int a[N]; 
int b[N];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	int t=0;
	for(int i=0;i<n;i++)cin>>a[i];
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			b[t]=a[i]&a[j];
			t++;
		}
	}
	
	sort(b,b+t);
	cout<<b[t-1];
	
	return 0;
}