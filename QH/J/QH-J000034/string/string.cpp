#include<bits/stdc++.h>
#define L long long
using namespace std;
const int M=1e6+10;
const int N=1e4+10;
int a[M];
char b[N],c[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int l,sum=0;
	cin>>l;
	int x=0;
	bool f=1;
	for(int i=0;i<l;i++){
		cin>>a[i]>>b[i];
		x+=a[i];
		for(int i=0;i<a[i];i++){
			c[i]=char(b[i]);
		}
		if(b[0]!=b[i]){
			f=0;
		}
	}
	
//	for(int i=0;i<x;i++){
//		cout<<s[i];
//	}
	if(f==1){
		cout<<0;
		return 0;
	}
	for(int i=0,j=x-1;i<x/2,j>x/2;i++,j--){
		if(c[i]!=c[j]){
			sum++;
		}
	}
	//ÐÞ¸Ä 
	cout<<sum;
	return 0;
}
