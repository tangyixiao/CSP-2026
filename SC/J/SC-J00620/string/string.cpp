#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string4.in","r",stdin);
	freopen("string4.out","w",stdout);
	long long n,l=0,ans=0;
	string s;
	cin>>n;
	long long m[n+1];
	for(int i=0;i<n;i++){
		long long a;
		cin>>a>>s[i];
		m[i]=l;
		l=l+a;
		//cout<<m[i]<<' ';
	}
	m[n]=l;
	//cout<<endl;
	//cout<<l;
	for(long long i=0;i<l/2;i++){
		long long ii=l-i-1;
		char x=' ',y=' ';
		int c1=0,c2=0;
		for(int j=0;j<n;j++){
			if(i>=m[j] and i<m[j+1]){
				x=s[j];
				c1=1;
			}
			if(ii>=m[j] and ii<m[j+1]){
				//cout<<m[i+1]<<' ';
				//cout<<j<<endl;
				y=s[j];
				c2=1;
			}
			if(c1==1 and c2==1)break;
		}
		if(x!=y){
			//cout<<i<<' '<<ii<<endl;
			ans++;
		}
	}
	cout<<ans;
	return 0;
}