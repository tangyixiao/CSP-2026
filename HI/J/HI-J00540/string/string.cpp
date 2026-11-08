#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a,cmt=0,cnt=0,cyt=0;
	string b,b1;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		cnt+=a;	
		if(i==0){
			b1=b;
		}	
		if(b==b1){
			cmt+=a;
			cyt++;
		}
	}
	if(cyt==n){
		cout<<0;
		return 0;
	}
	if(cnt%2==0){
		cout<<cnt-cmt;
	}
	else{
		cout<<cnt-cmt-1;
	}
	return 0;
}
