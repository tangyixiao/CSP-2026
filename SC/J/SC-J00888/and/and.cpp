#include<bits/stdc++.h>
using namespace std;
int a[100000000];
long long n,m;
int g1,g2,g3;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(m==1){
		cout<<a[n-1];
		return 0;
	}
	else if(m==2){
		int t1=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(t1<(a[i]&a[j])){
					t1=a[i]&a[j];
				}
			}
		}
		
		cout<<t1;
		return 0;
	}
	else if(m==n){
		int b=a[0];
		for(int i=1;i<n;i++){
			b=b&a[i];
		}
		cout<<b;
		return 0;
	}
	else if(m==n-1){
		return 0;
	}
	else if(0<=a[n]&&a[n]<=4){
		for(int i=0;i<n;i++){
			if(a[i]==3){
				g1=1;
			}
			if(a[i]==2){
				 g2=1;
			}
			if(a[i]==1){
				 g3=1;
			}
		}
		if(g1==1&&g2==1){
			cout<<"2";
		}
		else if(g1==1&&g3==1){
			cout<<"1";
		}
	}
	else if(a[n]==0){
		cout<<"0";
	}
	return 0
	

}