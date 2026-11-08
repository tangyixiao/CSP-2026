#include<bits/stdc++.h>
using namespace std;
int a[20005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int y=0;
    long long maxx=0,max1=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]>maxx){
    		maxx=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==maxx){
			y++;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>max1&&a[i]<maxx){
			max1=a[i];
		}
	}
	long long maxxx=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]&a[j]>maxxx){
				maxxx=a[i]&a[j];
			}
		}
	}
	long long sum=a[0];
    if(m==1){
    	cout<<maxx;
	}else if(n==m){
		for(int i=1;i<n;i++){
			sum=sum&a[i];
		}
	}else if(m==2){
		cout<<maxxx;
	}else{
		if(y>1){
			y=maxx&maxx;
			cout<<y;
		}else{
			y=maxx&max1;
			cout<<y;
		}
	}
	return 0;
}


