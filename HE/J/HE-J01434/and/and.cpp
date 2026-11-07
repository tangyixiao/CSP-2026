#include<iostream>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
  	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[20010];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int max=0;
	if(m=1){
		for(int i=1;i<=n;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		cout<<max;
	}
	
	return 0;
}
