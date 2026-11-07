#include<bits/stdc++.h>
using namespace std;
string a1,b1,c1,a;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>c1;
	if(a1==b1){
	   a+='1';
	}else{
		a+='0';
	}
	int ans=0;
	for(int i=0;i<=1;i++){
		if(a1[i]==b1[i]){
			ans++;
		}
		if(ans==2){
			a+='1';
		}
		if(a1[2]+1==a[2]||a1[2]-1==a[2]){
			if(a[i]>='D'&&a[i]<='F'){
				a+='0';
			}
			a+='1'; 
	}
	   cout<<a;
  }
	return 0;
}
