//T2 100
#include<bits/stdc++.h> 
using namespace std;
struct node{
	long long s;char h;
}a[200100];
int n;
long long sum,ans;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i].s>>a[i].h,sum+=a[i].s;
	}
	if(n==1) cout<<0;
    else{
    	//cout<<ss<<'\n';
    	long long l=1,r=n;
    	while(l<r){
    		//cout<<a[l].s<<' '<<a[r].s<<' '<<ans<<'\n';
    		if(a[l].h!=a[r].h){
    			if(a[l].s<a[r].s){
    				ans+=a[l].s,a[r].s-=a[l].s,l++;
				}else if(a[l].s>a[r].s){
					ans+=a[r].s,a[l].s-=a[r].s,r--;
				}else ans+=a[r].s,l++,r--;
    		}else{
    			if(a[l].s<a[r].s){
    				a[r].s-=a[l].s,l++;
				}else if(a[l].s>a[r].s){
					a[l].s-=a[r].s,r--;
				}else l++,r--;
			}
		}cout<<ans;
	}
    fclose(stdin);
    fclose(stdout);
    return 0;
} 
/*
5
2147483647 a
2146783647 b
*/

