#include <bits/stdc++.h>
using namespace std;
int a[100005],n,c1,d1,cnt1,cnt2;
char b[100005];
string c,d,cc,dd;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			c+=b[i];
		}
	}
	for(int i=c.size()-1;i>=0;i--){
		d+=c[i];
	}
//	cout<<c<<endl<<d<<endl;
	cc=c;
	dd=d;
	for(int i=c.size()/2,j=0;i<c.size();i++,j++){
		cc[i]=d[i];
		dd[i]=c[i];
	}
//	cout<<cc<<endl<<dd; 
		for(int i=0;i<c.size();i++){
		if(cc[i]!=c[i])cnt1++;
		if(dd[i]!=d[i])cnt2++;
	}
	cout<<min(cnt1,cnt2);
	return 0;
} 
