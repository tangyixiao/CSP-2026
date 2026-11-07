#include<bits/stdc++.h>
using namespace std;
string a[1000001];
long long b[10000001];
char v[1000005];
long long cnt;
int num=0;
int u=0;

int main(){
    freopen(string.in,"r",stdin);
    freopen(string.out,"w",stdout);
    int n;
    cin>>n;
    b[0]=1;
    for(int i=1;i<=n;i++){
    	cin>>b[i]>>v[i];
    	u=b[i-1];
    	cnt+=b[i];
    	for(int j=u;j<=cnt;j++){
    		a[j]=v[i];
		}
	}
	for(long long j=1;j<=cnt;j++){
    	if(a[j]==a[cnt]){
    		cnt--;
		}
		else{
			num++;
		}
	}
	cout<<num;
    return 0;

}
