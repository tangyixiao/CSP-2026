
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string a=""; 
	char x;
	long long shu,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		char w;
		cin>>shu;
		sum+=shu;
		cin>>w;
		for(int j=0;j<shu;j++){
			a+=w;
		}
	}
	string b="";
	long long www=0;
	long long q=sum;
	if(sum%2==1){
		sum=q;
		long long xia=sum/2-1;
		sum=q;
		for(int i=0;i<sum/2;i++){
			b+=a[i];
		}
		sum=q;
		for(int i=sum/2+1;i<q;i++){
			if(a[i]!=b[xia]){
				www++;
			}
			xia--;
		}
	}
	else{
		long long xia=sum/2-1;
		sum=q;
		for(int i=0;i<sum/2;i++){
			b+=a[i];
		}
		sum=q;
		for(int i=sum/2;i<q;i++){
			if(b[xia]!=a[i]){
				www++;
			}
			xia--;
		}
	}
	cout<<www;
	return 0;
}
