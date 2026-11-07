#include<bits/stdc++.h>
using namespace std;
unsigned long long n,a[200020],z,w,p=-1,x;
char b[200020];
string q;
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(unsigned long long i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(unsigned long long j=1;j<=a[i];j++)
	    q[++p]=b[i];
		z+=a[i];
	}
	w=z-1;
	for(unsigned long long i=0;i<(z-1)/2;i++){
		if(q[i]!=q[w])
		x++;
		w--;
	}
    cout<<x;
    return 0;
} 
