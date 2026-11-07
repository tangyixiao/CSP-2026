#include<bits/stdc++.h>
using namespace std;
long long n;
vector<int> s;
int main(){
	cin>>n;
	long long cot=0;
	for(int i=0;i<n;i++){
		int a;
		cot+=a;
		cin>>a; 
		char q;
		cin>>q;
		for(int j=0;j<a;j++){
			s.push_back(q);
		}
	}
	long long left;
	if(cot%2==0){
		left=cot/2;
	}else{
		left=cot/2+1;
	}
	long long w;
	w=s.size()/2;
	long long p=s.size();
	long long ans=0;
	long long e=0;
	
	//数组内容  Trick||Treat!
    //for(int i=0;i<p;i++) cout<<s[i]<<' '; cout<<endl;
	
	
	for(int i=0;i<w;i++){
		e=p-i-1;
		
		//对比 
		//cout<<s[i]<<' '<<s[e]<<' '<<endl;
		
		if(s[i]!=s[e]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
