#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n,c=0;
	
	char a[10001];
	cin>>n;
	int y=n;
	for(int i=1;i<=2*n;i++){
		cin>>a[i];
		
	}
	for(int i=1;i<=2*n;i++){
		for(int j=n;j>=1;j--){
			if(a[2*i]==a[2*j-n]&&a[2*i-1]==a[2*j-n-1]){
			    cout<<"0"<<" ";
			    break;
		    }else{
		      c++;

		    }
	}
		}

	
	cout<<c;
	
	
	
	return 0;
}
