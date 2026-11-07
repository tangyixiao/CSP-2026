#include<bits/stdc++.h>
using namespace std;
long long n,ans;
struct node{
	long long t;
	char c;
}a[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].t>>a[i].c;
	} 
	int l=1,r=n;
	while(l!=r){
        if(a[l].c!=a[r].c){
        	ans+=min(a[l].t,a[r].t);
        	if(a[l].t>a[r].t){
        		a[l].t-=a[r].t;
        		r--;
			}else if(a[l].t==a[r].t){
				l++;
				r--;
			}else{
				a[r].t-=a[l].t;
        		l++;
			}
		}else{
        	if(a[l].t>a[r].t){
        		a[l].t-=a[r].t;
        		r--;
			}else if(a[l].t==a[r].t){
				l++;
				r--;
			}else{
				a[r].t-=a[l].t;
        		l++;
			}
	    }
	}
	cout<<ans;
	return 0;
}