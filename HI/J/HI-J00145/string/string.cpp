#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n=0,aa,i=1,aaa,aaaa=0;
char a[N];
char k;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>aa;
    for(int f=1;f<=aa;f++){
    	cin>>aaa;
    	cin>>k;
    	aaaa+=aaa;
    for(;i<=aaaa;i++){
    	a[i]=k;
	}
}
// for(i=1;i<=aaaa;i++){
//    	cout<<a[i];
//	}
for(int f=1;f<=aaaa;f++){
//	cout<<a[f]<<endl<<a[aaaa-f+1];
	if(a[f]!=a[aaaa-f+1])n++;
}
cout<<n/2;
}
