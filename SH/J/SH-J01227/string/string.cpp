#include<bits/stdc++.h>
using namespace std;
string str;
int n;
unsigned long long cnt=0,sum=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long ai;
		string ci;
		cin>>ai>>ci;
		cnt+=ai;
		for(int i=1;i<=ai;i++){
			str+=ci;
		}
	}
	cnt--;
	for(int i=0;i<=cnt/2;i++){
		if(str[i]!=str[cnt-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
} 
