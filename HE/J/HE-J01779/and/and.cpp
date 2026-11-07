#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,max=0,num=0,c=0;
	int a[200015]={0};
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			num=a[j];
			for(int f=1;f<m;f++){
				num=num&a[j+f];
			}
			if(num>max){
				max=num;
			}
		}
		for(int j=0;j<n;j++){
			swap(a[j],a[j+2]);
		}
	}
	cout<<max;
	
	
	return 0;
}
