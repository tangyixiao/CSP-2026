#include<bits/stdc++.h>
using namespace std;
char a[1000000001];
long long sum=0,ans=0,cha=0,j=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char c;
	    cin>>x>>c;
	    sum+=x;
	    for(int i=1;i<=x;i++)
	        a[j+i]=c;
	    j+=x;
    }
    j=sum;
	sum=sum/2+sum%2;
    for(int i=1;i<=sum;i++){
    	if(a[i]!=a[j-i+1]){
    		ans+=1;
		}
	}
	cout<<ans;
	return 0;
}
