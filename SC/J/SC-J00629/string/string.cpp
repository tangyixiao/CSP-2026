#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n,a,m=0,sum=0,size=0;
	string c;
	cin>>n;
	string num[1000000005];
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		size+=a;
		for(int j=m;j<m+a;j++)
			num[j]=c;
	}
	
	for(int i=0;i<=size/2;i++){
		if(num[i]!=num[size-1-i])
			sum++;
	}
		
	cout<<sum;
	
	return 0;
}