#include<bits\stdc++.h>
using namespace std;
string d[10000000],c[10000000];
long long a[10000005],s=0,m=0,sum=1;

int pp(string t1,string t2){
	if(t1!=t2){
		s++;
	}
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>d[i];
		m+=a[i];
		for(int j=sum;j<=a[i]+sum;j++){
			c[j]=d[i];
		}
		sum+=a[i];
	}
	for(int i=1;i<=m/2;i++){
		pp(c[i],c[m-i+1]);
		//cout<<c[i]<<c[m-i+1]<<endl;
	}
	cout<<s;
	return 0;
}
