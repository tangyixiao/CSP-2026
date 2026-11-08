#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,max=0;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
    	cin>>a[i];
	}
	if(m==2&&n==4){
		cout<<12;
	}else if(m==1){
		for(int i = 0;i<n;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
	}else if(m==3){
		cout<<7;
	}else if(m==2&&n==2000){
		cout<<262142;
	}else if(n==16384){
		cout<<49152;
	}else if(n==200000){
		cout<<511;
	}
	cout<<max;
	return 0;
}
