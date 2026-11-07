#include <iostream>
using namespace std;
int main(){
	string b[100000],e;
	int a,d,c=0,f,ans=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>d>>e;
		for(int i=0;i<d;i++){
			c+=1;
			b[c]=e;
		}
	}
	f=c/2;
	for(int i=1;i<=f;i++){
		if(b[i]!=b[c+1-i]){
			ans+=1;
		}
	}
	cout<<ans;
}
