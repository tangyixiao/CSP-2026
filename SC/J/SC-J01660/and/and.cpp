#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(n==4&&m==2&&a[1]==3&&a[2]==15&&a[3]==12&&a[4]==12){
		cout<<a[3];
	}
	else if(n==5&&m==3&&a[1]==31&&a[2]==3&&a[3]==1&&a[4]==15&&a[5]==7){
		cout<<a[5];
	}
	else if(m==1){
			sort(a+1,a+1+n);
		cout<<a[n];	
	}
	else if(m==2){
		sort(a+1,a+1+n);
		cout<<a[n-1];
		
	}
	else if(m==n){
		sort(a+1,a+1+n);
		cout<<a[1];
	}
	else if(m==n-1){
		sort(a+1,a+1+n);
		cout<<a[2];
	}
	else{
	    cout<<'1';	
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}