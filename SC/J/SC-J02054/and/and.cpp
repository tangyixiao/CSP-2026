#include<bits/stdc++.h>
using namespace std;

const int N=200100;
int n,m,a[N];
int ma=INT_MIN;

int cmp(int a,int b){
	vector<int> s1,s2;
	int ans1=0,ans2=0;
	while(a!=0){
		s1.push_back(a%2);
		a=a/2;
	}
	while(b!=0){
		s2.push_back(b%2);
		b=b/2;
	}
	if(s1.size()>s2.size()){
		for(int i=1;i<=s1.size()-s2.size();i++){
			s2.push_back(0);
		}
	}
	if(s2.size()>s1.size()){
		for(int i=1;i<=s2.size()-s1.size();i++){
			s1.push_back(0);
		}
	}
	int v=0;
	vector<int> s3;
	for(int i=max(s1.size(),s2.size())-1;i>=0;i--){
		if(s1[i]==1&&s2[i]==1){
			s3.push_back(1);
		}else{
			s3.push_back(0);
		}
	}
	int w=1;
	for(int i=s3.size()-1;i>=0;i--){
		v=v+w*s3[i];
		w=w*2;
	}
	return v;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+m-1;j<=n;j++){
			int y=cmp(a[i],a[j]);
			ma=max(ma,y);
		}
	}
	cout<<ma;
	return 0;
}