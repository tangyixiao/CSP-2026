/*

//#define abcdefg
#ifdef abcdefg
#include <bits/stdc++.h>
using namespace std;

//int chars[1000];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n;
	long long t=0;
	cin>>n;
	string str,str2;
	vector<pair<int,char>> strs(n+2);
	vector<pair<int,char>> strs2(n+2);
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		strs[i]=(make_pair(a,c));
	}
	for(int i=1;i<=n;i++){
		strs2[i]=strs[i];
	}
	reverse(strs2.begin(),strs2.end());
	for(int i=1;i<=n;i+=1){
		pair<int,char> stra=strs[i];
		pair<int,char> strb=strs2[i];
		if(stra.second!=strb.second){
			t+=max(stra.first,strb.first);
		}
		//cout<<stra.first<<" "<<stra.second<<endl;
		//cout<<strb.first<<" "<<strb.second<<endl;  
	}
	cout<<t/2;
	return 0;
}
#endif
#ifndef abcdefg
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin>>n;
	string str,str2;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			//cout<<to_string(c)<<endl;
			string str3="a";
			str3[0]=c;
			str+=str3;
			//str+=to_string(c);
		}
	}
	str2=str;
	reverse(str.begin(),str.end());
	int t=0;
	for(int i=0;i<str.size();i++){
		if(str[i]!=str2[i]){
			t++;
		}
	}
	cout<<t/2;
	return 0;
}
#endif
*/

#include <bits/stdc++.h>
using namespace std;

#define debug(x) //cout<<x<<endl;

//int chars[1000];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n;
	long long t=0;
	cin>>n;
	string str,str2;
	vector<pair<int,char>> strs(n+2);
	vector<pair<int,char>> strs2(n+2);
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		strs[i]=(make_pair(a,c));
	}
	for(int i=1;i<=n;i++){
		strs2[i]=strs[i];
	}
	reverse(strs2.begin(),strs2.end());
	//cout<<1;
	//cout<<strs.size();
	for(int i=1;strs.size()!=2;){
		pair<int,char> stra=strs[i];
		pair<int,char> strb=strs2[i];
		//if(stra.second!=strb.second){
		//cout<<i<<endl; 
		/*
		for(int i=0;i<=strs.size();i++){
			
				cout<<"strs["<<i<<"]"<<"="<<strs[i].first<<","<<strs[i].second<<endl; 
				
			} 
			cout<<"now t:"<<t<<endl;
			*/
			if(stra.first>strb.first){
				debug(1);
				if(stra.second!=strb.second){
					debug(2);
					t+=strb.first;
					strs[i]=make_pair(stra.first-strb.first,stra.second);
					strs2.erase(strs2.begin()+i);
					debug(3);
				}else{
					strs[i]=make_pair(stra.first-strb.first,stra.second);
					strs2.erase(strs2.begin()+i);
				}
			}else if(stra.first==strb.first){
				if(stra.second!=strb.second){
					t+=stra.first;
					//strs[i]=make_pair(0,0);
					strs.erase(strs.begin()+i);
					strs2.erase(strs2.begin()+i);
				}else{
					//strs[i]=make_pair(0,0);
					strs.erase(strs.begin()+i);
					strs2.erase(strs2.begin()+i);
				}
			}else{
				if(stra.first<strb.first){
					if(stra.second!=strb.second){
						t+=stra.first;
						strs2[i]=make_pair(strb.first-stra.first,strb.second);
						strs.erase(strs.begin()+i);
					}else{
						strs2[i]=make_pair(strb.first-stra.first,strb.second);
						strs.erase(strs.begin()+i);
					}
				}
			}
			//debug(strs.size());
			
		//}
		//cout<<stra.first<<" "<<stra.second<<endl;
		//cout<<strb.first<<" "<<strb.second<<endl;  
	}
	cout<<t/2;
	return 0;
}
