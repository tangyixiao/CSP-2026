#include<iostream>
#include<cstdio>
using namespace std;
int n,l;
int a[200010],b[200010];
char c[200010],d[200010];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	for(int i=1;i<=n;i++){
		b[i]=a[n-i+1];
		d[i]=c[n-i+1];
	}
	long long ans=0;
	int i=1,j=1,la=a[1],lb=b[1];
	char na,nb;
	while(i<=n && j<=n){
		if(la>lb){
			if(c[i]!=d[j]) ans+=lb;
			//cout<<"a"<<ans<<endl;
			la=la-lb;j++;lb=b[j];
		}
		else if(la<lb){
			if(c[i]!=d[j]) ans+=la;
			//cout<<"b"<<ans<<endl;
			lb=lb-la;i++;la=a[i];
		}
		else if(la==lb){
			if(c[i]!=d[j]) ans+=la;
			//cout<<"c"<<ans<<endl;
			i++;j++;la=a[i];lb=b[j];
		}
	}
	cout<<ans/2<<endl;
	fclose(stdin);fclose(stdout);
} 
