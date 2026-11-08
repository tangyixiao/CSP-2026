#include<bits/stdc++.h> 
using namespace std;
long long  a,b=0,n[100003];
long long t[100003000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>n[i];
		t[n[i]]++;
	}for(long long i=10000000;i>0;i++){
		if(t[i%2==0]){
			cout<<i;
			return 0;
		}		
	}
	return 0;
}
