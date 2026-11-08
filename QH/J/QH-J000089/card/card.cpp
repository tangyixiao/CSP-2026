#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	long long a,b,c[10000],d[10000],m=0,n[1000],x=0,mo;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
		for(int j=i-1;j>=m;j--){
			if(c[j]==c[i]){
				m=i;
			}
		}
	}for(int i=a;i>=m;i--){
		n[x]=c[i];
		x++;
	}
	for(int i=1;i<=b;i++){
		d[i]=0;
	}
	for(int z=2;z<=a;z++){
		m=0;
		for(int i=z;i<a;i++){
		    for(int j=i-1;j>m+z;j--){
			    if(c[j]==c[i]){
			    	cout<<j<<endl;
				    m=i;
			    }
		   }
		}for(int i=a;i>=m;i--){
		    n[x]=c[i];
		    x++;
	    }
	}
	for(int i=1;i<=b;i++){
	    for(int j=0;j<=x;j++){
		    if(n[j]==i){
				d[i]++;
		    }
	    }
	}
	for(int i=1;i<=x;i++){
		cout<<n[i]<<" ";
	}
	return 0;
}
