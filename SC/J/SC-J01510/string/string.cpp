#include<bits/stdc++.h>
using namespace std;

const int N=3e5;

int n;

struct node{
	long long a;
	char b;
}a[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].b;
		//cout<<a[i].a<<" "<<a[i].b<<endl;
	}
	node tmp;
	long long l=1,r=n,ans=0;
	while(l<r){
		
		if(a[l].a==0)l++;
		if(a[r].a==0)r--;
		if(a[l].b==a[r].b){
			
			
			if(a[l].a>a[r].a){
				
				a[l].a-=a[r].a;r--;
			}
			else {
				
				a[r].a-=a[l].a;l++;
			}
		}else{
			
			if(a[l].a>a[r].a){
				ans+=a[r].a;
//				cout<<l<<" "<<r<<endl;
//				cout<<a[l].a<<" "<<a[r].a<<endl;
				a[l].a-=a[r].a;r--;
			}
			else {
				ans+=a[l].a;
				a[r].a-=a[l].a;l++;
				
			}				
		}
	}
	cout<<ans;
	return 0;
} 
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b


*/