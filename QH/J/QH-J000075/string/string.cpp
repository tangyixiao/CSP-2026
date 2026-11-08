#include<bits/stdc++.h>
using namespace std;
struct s{
	long long x;
	char a;
}s[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    long long int sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>s[i].x>>s[i].a;
	}
	int l=1,r=n;
	while(l<r){
		if(s[l].a!=s[r].a){
			sum+=min(s[l].x,s[r].x);
		}
		int z=min(s[l].x,s[r].x);
	    s[l].x-=z;
	    s[r].x-=z;
	    if(s[l].x==0){
		    l++;
	    }
    	if(s[r].x==0){
   		    r--;
    	}
	}
	cout<<sum;
    return 0;
}
