#include<bits/stdc++.h>
using namespace std;

	
	

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	
	int n,a[101],s=0;
	int p1=0;
	cin >> n;
	
	string b[101],p=0;
	
	for(int i=0;i<n;i++){
		cin >> a[i] ;
		cin >> b[i];
	}
	p=b[0];
	
	for(int i=0;i<n;i++){
		
		s+=a[i];
		
		if(p==b[i]){
			p1++;
		}
	}
	
	if(p1==n){
		cout << 0;
	}else{
		if(s%2!=0){
			cout << (s-1)/2;
		}else{
			cout << s/2;
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
