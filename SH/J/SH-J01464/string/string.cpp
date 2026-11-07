#include<bits/stdc++.h>
using namespace std;
long long n,a[200005];
char c[200005];
unsigned long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long i=1,j=n,p=0,q=0;
	while(i<j){
		if(c[i]==c[j]){
			if(a[i]-p<a[j]-q){
				q+=a[i]-p;i++;p=0;
			}else if(a[i]-p>a[j]-q){
				p+=a[j]-q;j--;q=0;
			}else{
				p=0;q=0;i++;j--;
			}
		}else{
			if(a[i]-p<a[j]-q){
				cnt+=a[i]-p;
				q+=a[i]-p;i++;p=0;
			}else if(a[i]-p>a[j]-q){
				cnt+=a[j]-q;
				p+=a[j]-q;j--;q=0;
			}else{
				cnt+=a[i]-p;
				p=0;q=0;i++;j--;
			}
		}
	}
	cout<<cnt<<endl;
} 
