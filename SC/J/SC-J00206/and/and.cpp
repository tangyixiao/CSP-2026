#include<iostream>
using namespace std;
int n,a[222],m;
string c[665];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		int max=0;
		for(int i=0;i<4*n;i++){
			if(a[i]>a[i-1]){
				max=a[i];
			}
		}
		cout<<max;
	}
	return 0;
}