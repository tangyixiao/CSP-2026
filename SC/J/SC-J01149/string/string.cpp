#include<bits/stdc++.h>
using namespace std;
long long a[100005];
string s;
string w;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	long long n,flag=0,cnt=0,sum=0;
	cin>>n;
	char c;
	
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt+=a[i];
		cin>>c;
		for(int j=1;j<=a[i];j++){
			s+=c;
		}
		
	}
	
	
	for(int i=cnt;i>=1;i--){
		int j=1;
		w[j]=s[i];
		j++;
	}
	for(int i=1;i<=cnt;i++){
		if(w[i]!=s[i]){
			sum++;
			flag=1;
		}
	}
	if(flag==0){
		cout<<"0";
	}
	else{
		cout<<sum/2;
	}
	cout<<endl;
	return 0;
} 
