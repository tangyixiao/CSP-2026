#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f0=1;
	if(c1!=c2||s1==s2){
		cout<<0;
		f0=0;
	}
	else cout<<1;
	string nums1,nums2;
	nums1=s1[0]+s1[1],nums2=s2[0]+s2[1];
	bool f1=0;
	if(nums1==nums2&&f0){
		f1=1;
		cout<<1;
	}
	else cout<<0;
	char ss1=s1[2],ss2=s2[2];
//	cout<<ss1<<" "<<ss2<<"\n";
	bool f2=0;
	if(f1&&f0){
		if((ss1>='A'&&ss1<='C')&&(ss2>='A'&&ss2<='C')){
			cout<<1;
			f2=1;
		}
		else if((ss1>='D'&&ss1<='E')&&(ss2>='D'&&ss2<='E')){
			cout<<1;
			f2=1;
		}
		else cout<<0;
	}
	else cout<<0;
	if(f2&&f0){
		if(ss1>='A'&&ss1<='C'){
			if(ss2+1==ss1||ss2-1==ss1&&(ss2>='A'||ss2<='C')){
				cout<<1;
			}
			else cout<<0;
		}
		else{
			if(ss1=='D'&&ss2=='E'&&f1){
				cout<<1;
			}
			else if(ss1=='E'&&ss2=='D'&&f1){
				cout<<1;
			}
			else cout<<0;
		}	
	}
	else cout<<0;
	return 0;
}
