#include <iostream>
using namespace std;
long long  n;
char sc[200002];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long  b=1;
	long long  ans=0;
	for(long long  i=1;i<=n;i++){//ÊäÈë 
		long long  a;
		char c;
		cin>>a>>c;
		ans+=a;
		for(int j=b;j<a+b;j++)
		{
			sc[j]=c;
		}
		b+=a;
	}
	long long  g=0;
	for(long long i=1;i<=ans/2;i++){
		if(sc[i]!=sc[ans-i])
		{
			g++;
		}
	}
	cout<<g;
	return 0;
}



