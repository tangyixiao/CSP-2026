#include<bits/stdc++.h> 
using namespace std;
long long a,b[200003];
char x[200003];
char paper(long long n){
	for (int i=1;i<=a;i++){
		if(n<=b[i]) return x[i];
		else n-=b[i];
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long d=0,v=1;
	cin>>a;
	for(int i=1;i<=a;i++) {
		cin>>b[i]>>x[i];
		v+=b[i];
	}
	for(int i=1;i<=v/2;i++){
		if(paper(i)!=paper(v-i)){
			d++;
		}
	}
	cout<<d;
	return 0;
} 
