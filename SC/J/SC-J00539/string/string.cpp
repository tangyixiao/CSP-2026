#include<bits/stdc++.h>
using namespace std;
const int w=2e5+10;
int a[w];
long long tot,t1;
char b[w];
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i],&b[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			c+=b[i];
		}
		t1+=a[i];
	}
	for(int i=0;i<t1/2;i++){
		if(c[i]!=c[t1-i-1])tot++;
	}
	cout<<tot;
//	cout<<c;
//	cout<<w;
}