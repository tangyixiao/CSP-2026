#include<bits/stdc++.h>
using namespace std;	
string m;
long long a[30];
bool isa(string x){
	int c=x.length();
	for(int i=0;i<c;i++){
		if(x[i]!=x[c-i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long p;
		string b;
		cin>>p>>b;
		for(int i=1;i<=p;i++){
			m+=b;
		}
	}
	int x=m.length();
	int ans=0;
	while(!isa(m)){
		for(int i=0;i<x;i++){
			if(m[i]=='a'){
				a[1]++;
			}
			if(m[i]=='b'){
				a[2]++;
			}
			if(m[i]=='c'){
				a[3]++;
			}
			if(m[i]=='d'){
				a[4]++;
			}
			if(m[i]=='e'){
				a[5]++;
			}
			if(m[i]=='f'){
				a[6]++;
			}
			if(m[i]=='g'){
				a[7]++;
			}
			if(m[i]=='h'){
				a[8]++;
			}
			if(m[i]=='i'){
				a[9]++;
			}
			if(m[i]=='j'){
				a[10]++;
			}
			if(m[i]=='k'){
				a[11]++;
			}
			if(m[i]=='l'){
				a[12]++;
			}
			if(m[i]=='m'){
				a[13]++;
			}
			if(m[i]=='n'){
				a[14]++;
			}
			if(m[i]=='o'){
				a[15]++;
			}
			if(m[i]=='p'){
				a[16]++;
			}
			if(m[i]=='q'){
				a[17]++;
			}
			if(m[i]=='r'){
				a[18]++;
			}
			if(m[i]=='s'){
				a[19]++;
			}
			if(m[i]=='t'){
				a[20]++;
			}
			if(m[i]=='u'){
				a[21]++;
			}
			if(m[i]=='v'){
				a[22]++;
			}
			if(m[i]=='w'){
				a[23]++;
			}
			if(m[i]=='x'){
				a[24]++;
			}
			if(m[i]=='y'){
				a[25]++;
			}
			if(m[i]=='z'){
				a[26]++;
			}
			int min=x;
			int mim;
			for(int i=1;i<=26;i++)
			{
				if(a[i]<min){
					min=a[i];
					mim=i;
				}
			}
			for(int i=0;i<x;i++){
				char y=m[i];
				int z=y-'a'+1;
				if(z==a[mim]){
					m[i]=m[x-i-1];
					ans++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
