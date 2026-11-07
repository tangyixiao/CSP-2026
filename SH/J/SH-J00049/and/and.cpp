#include<bits/stdc++.h>
using namespace std;

long long n2[35]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,214748364,4294967296,8589934592,17179869184}//2^n取值 
int n,m;
long long a[200005][30]={0};
int main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	
	cin>>n>>m;
	
	if(m==1){//特判m=1（最大值） 
		int x,ans;
		for(int i=1;i<=n;i++){
        	cin>>x;
        	if(x>ans)ans=x;
    	}
    	cout<<ans;
    	return 0;
	}
	//不会写 
	
	fclose(stdin);fclose(stdout);return 0;
} 
