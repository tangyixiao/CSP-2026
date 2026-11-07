

















#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200010];
	char c[200010];
	cin>>n;
	for (int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n == 1){
		cout<<0;
	}
	else if(n==2&&c[1]==c[2]){
		cout<<0;
	}
	else if(a[1]+a[2]%2==0){
		cout<<(a[1]+a[2]-2)/2;
    }
	else {
		cout<<(a[1]=a[2])/2;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}


















      
	                                                                                                                                                                                                                                               
                                                                                                                                                                                                                                                	                                                                                                                                                                                                                                             
