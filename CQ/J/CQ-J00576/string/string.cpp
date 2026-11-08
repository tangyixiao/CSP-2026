#include<bits/stdc++.h>
using namespace std;
struct no{
	long long t;
	char c;
}a[10000001];
long long n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].t>>a[i].c;
	}
	int i=0,j=n-1;
	while(i<=j){
		if(a[i].c!=a[j].c){
			if(a[i].t>a[j].t){
				a[i].t-=a[j].t;
				ans+=a[j].t;
				j--;
			}else if(a[i].t<a[j].t){
				a[j].t-=a[i].t;
				ans+=a[i].t;
				i++;
			}else{
				ans+=a[i].t;
				i++;
				j--;
			}
		}else{
			if(a[i].t>a[j].t){
				a[i].t-=a[j].t;
				j--;
			}else if(a[i].t<a[j].t){
				a[j].t-=a[i].t;
				i++;
			}else{
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
} 
