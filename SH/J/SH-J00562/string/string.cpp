#include<bits/stdc++.h>
using namespace std;
char a[200005];
long long b[200005];
long long c,cnt=0,sum=0;
string d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>c;
	for(int i=1;i<=c;i++){
		cin>>b[i]>>a[i];
		cnt+=b[i];
	}
	if(cnt%2==0){
		for(int i=1;i<=cnt/2;i++){
		    if(a[i]!=a[c-i]){
		    	sum++;
			}
		}
	}else{
		for(int i=1;i<=(cnt-1)/2;i++){
		    if(a[i]!=a[c-i]){
		    	sum++;
			}
		}
	}
    cout<<sum;
	return 0;
	
} 
