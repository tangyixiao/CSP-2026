#include<bits/stdc++.h>
using namespace std;
int n;
const int N=2*1e5+5;
int a[N];
int b[N];
string x;
string y; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>y;
	}
	for(int i=1;i<=n;i++){
		for(int i=1;i<=a[i];i++){
			y[i];
		}
	}

	int cnt=0;
	if(n%2==0){
		for(int i=1;i<=n;i++){
			for(int i=a[i]/2;i>=1;i--){
				x[i/2]=y[i];
			}
			for(int i=1;i<=a[i];i++){
				if(!x[i/2]==y[i])
				cnt++;
			}
		}
	}
	if(n%2!=0){
		for(int i=1;i<=n;i++){
			for(int i=a[i]/2;i>=1;i--){
				x[i/2]=y[i];
			}
			for(int i=1;i<=a[i];i++){
				if(!x[i/2]==y[i])
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
} 
