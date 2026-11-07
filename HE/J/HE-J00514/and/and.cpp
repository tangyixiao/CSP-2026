#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int bd[4]={1,2,4,8};
int a[N];

string Node(int a){
	string a1;
	while(a){
		a1+=char(a%2);
		a/=2;
	} 
	return a1;
}
int Node2(string a){
	int a1=0;
	for(int i=a.size();i>=1;i--){
		if(a[i]!='0'){
			a1=a1+bd[(a.size()-i+1)%4];
		}else{
			continue;
		}
	}
	return a1;
}
int anid(int a,int b){
	string a1=Node(a),b1=Node(b),ab1;
	int ab=min(a1.size(),b1.size());
	for(int i=ab;i>=1;i--){
		if(a1[i+a1.size()-ab]==b1[i+b1.size()-ab]){
			ab1[i]='1';
		}else{
			ab1[i]='0';
		}
	}
	
	return Node2(ab1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int ac1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		int max_=-1;
		for(int j=1;j<=n;j++){
			int ap;
			ap=anid(a[i],a[j]);
			if(ap>max_){
				max_=ap;
			}
		}
		if(ac1<max_)ac1=max_;
	} 
	int ap=ac1;
	for(int i=1;i<=m-2;i++){
		int max_=-1;
		for(int j=1;j<=n;j++){
			int apo;
			apo=anid(ap,a[i]);
			if(apo>max_){
				max_=apo;
			}
		}
		ap=max_;
	}
	cout<<ap;
//	if(n==4&&m==2){
//		cout<<12;
//	}
//	if(n==5&&m==3){
//		cout<<7;
//	}
	return 0;
}

