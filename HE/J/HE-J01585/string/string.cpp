#include<bits/stdc++.h>
using namespace std;
long long n,a,b=0,ans=0,m;
char c;
string d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		while(a>0){
			d[b]=c;
			b++;
			a--;
		}
	}
	for(int i=0;i<b;i++){
		m=b-1;
		if(d[ans]!=d[m]){
			d[m]=d[ans];
			ans++;
			m--;
		}
	}
	cout<<ans;
	return 0;
}
