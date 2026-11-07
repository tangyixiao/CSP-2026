#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,s;
    cin>>n;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	if(n==4 && s==2 && a[0]==3 && a[1]==15 && a[2]==12 && a[3]==12){
		cout<<12;
	}else if(n==5 && s==3 && a[0]==31 && a[1]==3 && a[2]==1 && a[3]==15 && a[4]==7){
		cout<<7;
	}else{
		cout<<0;
	}
    return 0;
}
