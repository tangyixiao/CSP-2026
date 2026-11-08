#include<bits/stdc++.h>
using namespace std; 
const int N=5*1e5+10;
long long a[N];
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	int n;
	long long m;           
	cin>>n>>m;
	bool f=1,f1=1;
	int x=0;
  	for(int i=1; i<=n; i++){                                                 
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1; i<=n; i++){
		if(a[i]!=i){
			f=0;                                                                                                                                                                               
		}
		if(i==2){
			x=a[i]-a[i-1];
		}
		if(i>2 && a[i]-a[i-1]!=x){
			f1=0;
		} 
	}
	if(f){
		int c=1;
		for(int i=1; i<n; i++){
			if(m-i>=0){
				m-=i;
				c++;
			}
		}
		cout<<c;
		return 0;
	}else if(f1){
		int c=1;
		for(int i=1; i<n; i++){
			if(m-(x*i)>=0){
				m-=(x*i);
				c++;
			}
		}
		cout<<c;
		return 0;
	}else{
		
//		cout<<n;
		int c=1;
		int i;
		for(i=1; i<=n; i++){
			int sum=0;
			for(int j=1; j<i; j++){
				sum+=a[i]-a[j];
				if(m>=sum){
					m-=sum;
					c++;
				}else{
					break;
				}
			}
			if(m<sum){
				break;
			}
		}
//		cout<<a[i]<<endl;
		int x=i+1;
		while(a[i]==a[x]){
//			cout<<a[i]<<" "<<a[x]<<endl;
			x++;
		}
		c+=x-1-i;
		cout<<c;
	}
	return 0;                           
}
