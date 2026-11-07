#include<iostream>
#include<cstdio>
using namespace std;
int a[1000000],n,cd,cd2,cd3,s;
string c[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		string b;
		cin>>a[i]>>b[0];
		for(int j=1;j<=a[i];j++){
			c[cd]=b[0];
			cd++;
		} 
	}
	cd2=cd-1;
	
	cd=cd/2;
	cd3=0;
	
	for(int i=0;i<=cd-1;i++){
		if(c[cd3]!=c[cd2]){
			s++;
		}
		cd3++;
		cd2--;
	}
	cout<<s;
	return 0;
}