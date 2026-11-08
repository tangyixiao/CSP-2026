#include<bits/stdc++.h>
using namespace std;


int n,a[200005],e=0,f=0;
char c[200005],s[200005],s2[100005],s3[100005];
bool l=true;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdin);

	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	
	if(n==1){
		cout<<0;
		return 0;
	}
	
	for(int i=1,g=1;i<=n;i++){
		for(int j=1;j<=a[i];j++,g++){
			s[g]=c[i];
			e++;
		}
	}
	
	if(e%2==0){
		for(int i=1;i<=e/2;i++){
			s2[i]=s[i];
		}
		for(int i=e,j=1;i>=e/2;i--,j++){
			s3[j]=s[i];
			if(s2[j]!=s3[j]){
				l=false;
				f++;
			}
		}
		if(l){
			cout<<"0";
		}else{
			cout<<f;
		}
		return 0;
	}else{
		for(int i=1;i<=(e-1)/2;i++){
			s2[i]=s[i];
		}
		for(int i=e,j=1;i>=(e+1)/2;i--,j++){
			s3[j]=s[i];
			if(s2[j]!=s3[j]){
				l=false;
				f++;
			}
		}
		if(l){
			cout<<"0";
		}else{
			cout<<f-1;
		}
		return 0;
	}
	
	return 0;
}
