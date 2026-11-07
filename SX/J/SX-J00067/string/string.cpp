#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
	}
	long long cnt=0;
	int l=1,r=n;
	while(l!=r){
	    if(c[l]==c[r]){
	    	if(a[l]>a[r]){
	    		a[l]-=a[r];
	    		r--;
			}else if(a[l]<a[r]){
                a[r]-=a[l];
	    		l++;
			}else{
				if(l+1==r){
					break;
				}else{
                    l++;
				    r--;
				}
			}
		}else{
            if(a[l]>a[r]){
	    		a[l]-=a[r];
	    		r--;
	    		cnt+=a[r];
			}else if(a[l]<a[r]){
                a[r]-=a[l];
	    		l++;
	    		cnt+=a[l];
			}else{
				cnt+=a[l];
				if(l+1==r){
					break;
				}else{
                    l++;
				    r--;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}