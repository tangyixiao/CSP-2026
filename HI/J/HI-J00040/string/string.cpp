#include<bits/stdc++.h>
using namespace std;
long long n,m,ss,t,w,mid,sum;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>m>>c;
		for(long long j=ss+1;j<=ss+m;j++){
			s[j]=c;
		}
		ss+=m;	
	}
	if(ss%2==0){
		mid=ss/2;
	}
	else{
		mid=ss/2+1;
	}
	t=mid-1;
	w=mid+1;
	while(t>0&&w<=ss){
		if(s[t]!=s[w]){
			sum++;
		}
		t--;
		w++;
	}
	cout<<sum;	
	return 0; 
} 
