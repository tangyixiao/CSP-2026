#include<bits/stdc++.h>
using namespace std;
struct str{
	long long t;
	char p;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].t>>a[i].p;;
	}
	int i=1,j=n;
	long long ans=0;
	while(i<=j){
		if(a[i].t==a[j].t&&a[i].p!=a[j].p){
			ans+=a[i].t;
			i++,j--;
		}
		else if(a[i].t!=a[j].t&&a[i].p!=a[j].p){
			ans+=max(a[i].t,a[j].t)-min(a[i].t,a[j].t);
			if(a[i].t>a[j].t){
				i++;
				a[i].t-=a[j].t;
			}
			else{
				j--;
				a[j].t-=a[i].t;
			}			
		}
		else if(a[i].t==a[j].t&&a[i].p==a[j].p){
			i++,j--;
		}
		else if(a[i].t!=a[j].t&&a[i].p==a[j].p){
			if(a[i].t>a[j].t){
				i++;
				a[i].t-=a[j].t;
			}
			else{
				j--;
				a[j].t-=a[i].t;
			}			
		}
	}
	cout<<ans;
	return 0;
} 
