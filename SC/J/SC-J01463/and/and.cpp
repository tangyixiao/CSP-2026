#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100005],d;
int main(){
	freopen("and.in","r",stdin);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a,a+n);
		cout<<a[n];
	}else if(m==2){
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				d=max(d,a[i]&a[j]);
			
		cout<<d;
	}else if(m==n){
		d=a[0];
		for(int i=1;i<n;i++)
		    d=d&a[i];
		cout<<d;
	}else{
	    cout<<a[n-1];//
    }
	
	
	freopen("and.out","w",stdout);
	
	return 0;
}