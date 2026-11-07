#include<iostream>
using namespace std;
int n,m,a[200001],ma=0,s2;

void f(int x,int sum,int cnt){
	if(cnt==1){
		sum=a[x];
	}else{
		sum=sum&a[x];
	}
	if(cnt==m){
		if(sum>ma){
			ma=sum;
		}
		return;
	}
	for(int j=0;j<n;j++){
    	for(int i=j+1;i<n;i++){
	    	f(i,sum,cnt+1);
    	}
    }
}

int main(){
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]>ma){
			ma=a[i];
		}
	}
	if(m==1){
		cout << ma;
		return 0;
	}
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
	    		s2=a[i];
				s2=s2&a[j];
			}
			if(s2>ma){
				ma=s2;
			}
		}
		cout << ma;
		return 0;
	}
	ma=0;
	f(0,0,1);
	cout << ma;
	return 0;
}
