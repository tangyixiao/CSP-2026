#include <bits/stdc++.h>
using namespace std;
long long  n,i=0,b,cnt;
string a,c,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		
		cin>>b;
		cin>>c;
		int x = b;
		for(int j = 0;j<b;j++){
			d[j]=c[0];
		}
		for(int j=0;j<b;i++,j++){
			a[i]=d[j];	
		}
	}
	int l=i;
	
	for(int i =0,j=l-1;i<j;i++,j--){
		if(a[i]!=a[j]){
			cnt++;
		}	
	}
	cout<<cnt;
	
	return 0;
}
