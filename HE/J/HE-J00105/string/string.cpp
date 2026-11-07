#include<bits/stdc++.h>
using namespace std;
const long N=1e8+120;
long long n,a[N];
char c[10000];
string s;
bool f(string v){
	for(int i=0;i<v.size();i++){
		for(int j=v.size()-1;j>=0;j--){
			if(v[i]!=v[j]){
				return false;
			}
		}
	}
	return true;
}
long long sum(string a){
	long long n=0,l;
	if(a.size()%2==0){
		l=a.size()/2;
		for(int i=0;i<l;i++){
		for(int j=a.size();j>=l;j--){
			if(a[i]!=a[j]&&a[i]!=0&&a[j]!=0){
				
				a[i]=a[j];
				n++;
			}
		}
	}
	}else{
		if(a.size()%2!=0){
			l=(a.size()-1)/2;
			for(int i=0;i<l-1;i++){
		for(int j=a.size();j>=l+1;j--){
			if(a[i]!=a[j]&&a[i]!=0&&a[j]!=0){	
				a[i]=a[j];
				n++;
			}
		}
	}
		}
	}
	return n;
}
int main(){
	freopen("string.in","r",stdin);	
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){  
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	} 
	if(f(s)==1){
		cout<<0;
		return 0;                                                                                                                         
	}else{
		cout<<sum(s);
	}

	return 0;
}
