#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,len2=0,count=0;
	cin>>n;
	long long ai[100001];
	string ci;
	string c;
	long long help,hecnt=1;
	for(int i=0;i<n;i++){
		cin>>ai[i]>>ci[i];
		
		if(help==ai[i]){
			hecnt++;
		}
		help=ai[i];
		len2+=ai[i];
		for(int j=0;j<ai[i];j++){
			c[count]=ci[i];
			count++;
		}
	}
	int num=0;
	for(long long i=0;i<count-1;i++){
		if(c[i]==c[i+1]){
			num++;
		}
	}
//	cout<<count<<endl;
//	cout<<num<<endl;
//	cout<<hecnt<<endl;
	if(hecnt%2==0){
		cout<<count/2;
	}
	if(num==count-1){
		cout<<"0";
	}
	return 0;
}
