#include<iostream>
using namespace std;
long long n;
long long a[100000000];
int t[1000];
char s[1000];
int p=0;
int cnt=0,cmt=0;
int main(){
	cin>>n; 
	for(int i=0;i<n;i++) {
		cin>>t[i]>>s[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		if(s[0]==s[1]){
			cout<<0;
			return 0;
		}
		else{
			cout<<min(t[0],t[1]);
			return 0;
		}
	}
	
	
	for(int i=0;i<n;i++){
		p+=t[i];
	} 
	for(int i=0;i<n;i++){
		for(int j=cnt;j<(cnt+t[i]);j++){
			a[j]=s[i];
		}
		cnt+=t[i];
	}
	for(int i=0;i<(p/2);i++){
		if(a[i]!=a[p-1-i]){
			cmt++;
			//cout<<a[i]<<' '<<a[p-1-i]<<endl;
		}
	}
	//cout<<'a';
	
	
	
	
	
	
	
	
	
	
	
	cout<<cmt;
	return 0;
}
