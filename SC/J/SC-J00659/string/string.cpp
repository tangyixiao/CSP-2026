#include<bits/stdc++.h>
using namespace std;
string orr,s;
char add;
bool ifhw(string a){
	int l=0,r=a.size()-1;
	while(l<r){
		if(a[l]!=a[r]) return false;
		l++;
		r--;
	}
	return true; 
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	unsigned long long n,at,s=0;
	cin>>n;
	for(unsigned long long i=1;i<=n;i++){
		cin>>at>>add;
		for(unsigned long long j=1;j<=at;j++){
			orr=orr+add;
		}
	}
	
	if(ifhw(orr)){
		cout<<"0";
		return 0;
	}
	else{
		unsigned long long ll=0,rr=orr.size()-1;
		while(ll<rr){
			if(orr[ll]!=orr[rr]) orr[ll]=orr[rr];
			s++;
			ll++;
			rr--;
			if(ifhw(orr)){
				cout<<s;
				return 0;
			}
		}
	}
} 