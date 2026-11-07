#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r"stdin);
	freopen("string.out","w"stdout);
	double a[1000005];
	long long b[1000005];
	double c[1000005];
	int cnt=0;
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>b[i];
		cin>>a[i];
		}
    for(int m=1;m<=n;m++){
    	c[m]=b[m]*a[m];
	}

}
return 0;
}

