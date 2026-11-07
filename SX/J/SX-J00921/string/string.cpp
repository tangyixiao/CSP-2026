#include<bits/stdc++.h>
using namespace std;
int a[200001];
char c[200001];
long long r[200001];
string z;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,s=0;
	long long l=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
    for(int i=1;i<=n;i++){
        long long j=1;
        for(int x=1;x<=a[i];x++){
        	z[j]=c[i];
        	j++;
		}
	}
	long long t=0;
	for(long long i=1;i<=l/2;i++){
        if(z[i]!=z[l+1-i]){
        	t++;
			r[t]==i;
		}
	}
	if(t==0){
		cout<<s;
		return 0;
	}else{
		for(long long j=1;j<=t;j++)
        for(long long i=1;i<=l;i++){
        	if(i!=r[j]){
        		char o=z[i];
        		if(z[i]==z[l+1-r[j]]){
                    z[i]=z[r[j]];
                    z[r[j]]=o;
                    s++;
                    break;
				}
			}
		}
	}
	cout<<s;
	}