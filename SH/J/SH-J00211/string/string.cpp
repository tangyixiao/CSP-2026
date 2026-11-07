/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200010];
char b[200010];
ll sum;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n/2;i++){
		if(b[i]!=b[n-i+1]){
			sum+=a[n-i+1];
			//cout<<a[n-i+1]<<" "<<n-i+1<<"\n"; 
		}
	}
	cout<<sum;
	return 0;	
}


6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200010];
ll cnt;
char b[200010],c[200010];
//string s1;//=' ',s2;s
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int k=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		//cout<<b[i]<<" ";
		for(int j=0;j<a[i];j++){
			c[k]=b[i];
			k++;
			//cout<<s1[j]; 
		}
	}
	
	//cout<<s1;
	for(int i=0;i<k/2;i++){
		if(c[i]!=c[k-i-1]) cnt++; 
	}
	cout<<cnt;
	return 0;
}
/*6
1000 a
1000 a
1000 a
1000 b
1000 b
1000 b*/
