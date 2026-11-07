#include<bits/stdc++.h>
using namespace std;
long long n,m,sum,z,cnt;
string a,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>s;
		sum+=m;
		for(int j=0;j<m;j++){
			a+=s;
		}
	}	
	if(sum%2==1){
		z=(sum-1)/2;
		for(int i=z-1,j=z+1;i>=0;i--,j++){
			if(a[i]!=a[j]){
				cnt++;
			} 
		}
		cout<<cnt;
	}else{
		z=sum/2;
		for(int i=z,j=z+1;i>=0;i--,j++){
			if(a[i]!=a[j]){
				cnt++;
			} 
		}
		cout<<cnt;
	}
}