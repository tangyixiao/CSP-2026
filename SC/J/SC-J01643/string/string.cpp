#include<bits/stdc++.h>
using namespace std;
int n;
int a[200010];
string s[200010];
long long A=1,B,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	B=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
//	string pa;
//    int c=1;
	while(A<B){
		int flag=0;
		if(s[A]!=s[B]){
			if(a[A]<a[B]&&flag==0){
				ans+=a[A];
				a[B]-=a[A];
				A++;
//				cout<<1;
				flag=1;
			}	
			if(a[A]>a[B]&&flag==0){
				ans+=a[B];
				a[A]-=a[B];
				B--;
//				cout<<2;
				flag=1;
			}	
			if(a[A]==a[B]&&flag==0){
				ans+=a[A];
				A++;
				B--;
//				cout<<3;
				flag=1;
			}	
		}else{
			if(a[A]<a[B]&&flag==0){
				a[B]-=a[A];
				A++;
//				cout<<4;
				flag=1;
			}	
			if(a[A]>a[B]&&flag==0){
				a[A]-=a[B];
				B--;
//				cout<<5;
				flag=1;
			}	
			if(a[A]==a[B]&&flag==0){
				A++;
				B--;
//				cout<<6;
				flag=1;
			}				
		}
//		cout<<" "<<c++<<":"<<A<<" "<<B<<" "<<ans<<endl;
	}
	cout<<ans;
	return 0;
}