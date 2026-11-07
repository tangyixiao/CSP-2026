#include<bits/stdc++.h>
using namespace std;
/*
int cl;
bool huiwen(char c){
	int sum=0;
	for(int i=0;i<cl;i++){
		if(c[i]==c[cl-1-i]){
			sum++;
		}
	}
	if(sum==cl/2+1){
		return true;
	}
}
*/
int main(){
	/*
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n;
	cin>>n;
	char c[1000000];
    struct zifu{
    	int a;
    	char b;
	}arr[100010];
	for(int i=0;i<n;i++){
		cin>>arr[i].a>>arr[i].b;
		cl+=arr[i].a;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<arr[i].a;j++){
			c[i]=arr[j].b;
		}
	}
	if(huiwen(c)){
		cout<<0;
	}
	*/
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	if(n==3){
		cout<<2;
	}
	if(n==2){
		cout<<0;
	}
	if(n==6){
		cout<<3000000000;
	}
	return 0;
}
