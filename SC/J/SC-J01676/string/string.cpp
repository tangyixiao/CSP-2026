#include<bits/stdc++.h>
using namespace std;
int l[300000];
char ll[300000];
char k[20000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,j=1,c=1,t=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l[i];
		cin>>ll[i];
	}
	while(j<=n){
		for(int i=1;i<=l[j];i++){
			k[c]=ll[j];
			c++;
		}
		j++;
	}
	if(c%2==0){
		for(int i=1;i<=c/2;i++){
			if(k[i]!=k[c-i])t++;
		}
	}else{
		for(int i=1;i<=(c-1)/2;i++){
		if(k[i]!=k[c-i])t++;
	    }
	}
	cout<<t;
	return 0;
}