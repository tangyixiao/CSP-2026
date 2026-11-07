#include<bits/stdc++.h>
using namespace std;
const int N=6e6+100,M=2e5+10;
long long n,m,a[N];
char c[100];
int main()
{
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i]>>c[i];
    if(n==1){
    	cout<<0;
    	return 0;
	}else if(n==2){
		if(c[1]==c[2])
		   cout<<0;
	}else(
	  cout<<min(min(a[1],a[2]));
	 )
	 return 0;
	else{
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				
			}
		}
	}
	return 0;
} 