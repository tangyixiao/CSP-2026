#include<bits/stdc++.h>
using namespace std;
int n,cnt;
int s1[400005],s2[400005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		int s=c-'a';
		s1[i*2-1]=a;
		s1[i*2]=s;
		
	}
	int j=1;
	for(int i=1;i<=n;i++){
		int sum=0;
		if(i%2==0&&s1[i]==s1[i+2]){
			sum=s1[i-1]+s1[i+1];
	}
	else if(i%2==0){
		if(sum==0)
		s2[j]=s1[i-1];
		else s2[j]=sum;
		j++;
		s2[j]=s1[i];
		j++;
	}
	}
	j++;
	for(int i=1;i<=j;i++){
		if(i%2==0&&s2[i]!=s2[j-i+2])
		cnt+=min(i-1,j-i+1);
		else if(i%2==0&&s2[i-1]!=s2[j-i+1])
		cnt+=abs(2*i-2-j);
	}
	cout<<cnt;
	return 0;
}
