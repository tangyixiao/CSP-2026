#include<bits/stdc++.h>
using namespace std;
char a[200000];
long long i=0,v=0;
int b; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>b;
    for(int l=1;l<=b;l++){
    long long k;
    cin>>k;
    i+=k;
    for(int j=1;j<=k;j++){
    char d;
    cin>>d;
    a[j]=d;
    a[l]+=a[j];
}
}
for(long long m=0;m<i/2;m++){
    if(a[m]==a[i-m])
    	cout<<0;
    else
    v++;
}
    cout<<v;
	return 0;
}

