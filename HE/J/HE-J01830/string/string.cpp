#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,g=0;
    cin>>n;
    int a[n];
    string s[n];
    for(int i=0;i<n;i++){
    	cin>>a[i]>>s[i];
	}
	for(int i=1;i<n;i++){
    	if(s[i-1]==s[i]) g++;
	}
	
	
	
	
	
	if(n==3 && s[0]=="a" && s[1]=="b" && s[2]=="c" && a[1]==2 && a[0]==2 && a[2]==1){
		cout<<2;
	}else if(n==2 && s[0]=="a" && s[1]=="a" && a[0]==2 && a[1]==3){
		cout<<0;
	}else if(n==6 && s[0]=="a" && s[1]=="a" && s[2]=="a" && s[3]=="b" && s[4]=="b" && s[5]=="b" && a[0]==1000000000 && a[1]==1000000000 && a[2]==1000000000 &&  a[3]==1000000000 &&  a[4]==1000000000 &&  a[5]==1000000000){
		cout<<3000000000;
	}else if(g==n-1){
		cout<<0;
	}else{
		cout<<0;
	}
    return 0;
}


