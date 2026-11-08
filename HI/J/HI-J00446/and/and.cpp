#include<bits/stdc++.h>
using namespace std;
int a[100000];
string s[100000],k[100000];
string w;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		while(a[i]!=0){
		s[i]=char(a[i]%2+48)+s[i];
		if(a[i]%2==0)a[i]=a[i]/2;
			else a[i]=(a[i]-1)/2;
		}
	}
	int f;
	for(int i=1;i<=n;i++){
		if(f<=s[i].size()){
			f=s[i].size();
		}
	}
	for(int i=1;i<=n;i++){
	cout<<f-s[i].size();
		for(int j=1;j<=(f-(s[i].size()));j++){
		s[i]="0 "+s[i];
		}
	}
	for(int i=1;i<=n;i++){
		cout<<s[i]<<"  ";
	}
	
	
//	for(int i=1;i<=n;i++){
//		cout<<s[i]<<' ';
//	}
//	
//    for(int i=1;i<=n;i++){
//    	for(int j=i+1;j<=n;j++){
//    		
//    		
//    		s[i]=s[i]
//    		
//    		
//    		
//    		
//    		
//		}
//	}
	
	return 0;
}
