#include<bits/stdc++.h>
using namespace std;
struct sb{
	long long a;
	char b;
}a[200005];
long long n,x,z=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].b;
	}
	int l=1;
	int r=n;
	while(l<r){
		if(a[l].b!=a[r].b){
			if(a[l].a>a[r].a){
				a[l].a-=a[r].a;
				z+=a[r].a;
				r--;
				//cout<<a[r].a<<endl;
			}else if(a[l].a<a[r].a){
				a[r].a-=a[l].a;
				z+=a[l].a;
				l++;
				//cout<<a[l].a<<endl;
			}else{
				z+=a[l].a;
				r--;
				l++;
				//cout<<a[r].a<<endl;
			}
		}else{
			if(a[l].a>a[r].a){
				a[l].a-=a[r].a;
				r--;
			}else if(a[l].a<a[r].a){
				a[r].a-=a[l].a;
				l++;
			}else{
				l++;
				r--;
			}
		}
	}
	cout<<z;
	return 0;
}
