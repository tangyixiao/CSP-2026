#include<bits/stdc++.h>
#define I using
#define AK namespace
#define cspJ std
I AK cspJ;
int quick_cin_math(){
	int the_number=0;
	string a_num;
	cin>>a_num;
	for(int i=0;i<a_num.size();i++){
		the_number=the_number*10+a_num[i]-'0';
	}
	return the_number; 
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	n=quick_cin_math();
	m=quick_cin_math();
	int a[n+1],b[n+1];
	unordered_map<int,int>have;
	for(int i=1;i<=n;i++)a[i]=quick_cin_math();
	for(int i=1;i<=n;i++){
		unordered_map<int,int>now_have;
		for(int j=i;j<=n;j++){
			if(now_have[a[j]]==0){
				now_have[a[j]]=j;
			}
			else{
				for(int k=now_have[a[j]];k<j;k++){
					now_have[a[k]]=0;
				}
				now_have[a[j]]=j;
			}
		}
		for(auto o:now_have){
			if(o.second)have[o.first]++;
		}
	}
	for(int i=1;i<=m;i++){
		if(i!=1)cout<<' ';
		cout<<have[i];
	}
	cout<<'\n';
	return 0;
}
