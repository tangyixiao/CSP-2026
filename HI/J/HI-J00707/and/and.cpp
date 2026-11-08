#include<iostream>
#include<string>
using namespace std;
int main(){

    freopen("string.in","r",stdin); 
    freopen("string.out","w",stdout);
    int n;
    long long a[100000],m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int x=0;
	if(m==1){
		for(int i=1;i<=m;i++){
			if(a[i]>x){
				x=a[i];
			}
		}
		cout<<x;
	}else{
	    cout<<a[2];
}
    
return 0;
}
