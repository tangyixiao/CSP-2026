#include<bits/stdc++.h>
using namespace std;
	string c1,s1,c2,s2;
int ans1(string c1,string c2){
	if(c1==c2){
		return 1;
	}return 0;
}
int ans2(string a,string b){
	if(!ans1(c1,c2)){return 0;
	}
	else {
	int len=a.size();
	for(int i=0;i<len;i++){
		if(a[i]!=b[i]&&i!=len-1){return 0;
		}
	}
	}return 1;
}
int ans3(string a,string b){
	if(!ans2(a,b)){return 0;
	}
	else{
		int len=a.size();
	int sum=(int)s1[len-1];
	int sam=(int)s2[len-1];
	int k,l;
	if(sum>=65&&sum<=67)k=1;
	else k=0;
	if(sam>=65&&sam<=67)l=1;
	else l=0;
	if(k==l){return 1;
	}
	}
	return 0;
}
int ans4(string a,string b){
	if(!ans3(a,b)){return 0;
	}
	else{
		int len=a.size();
	int sum=(int)s1[len-1];
	int sam=(int)s2[len-1];
	if(abs(sum-sam)==1||(sum==70&&sam==68)||(sum==68&&sam==70)){return 1;
	}
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
cout<<ans1(c1,c2)<<ans2(s1,s2)<<ans3(s1,s2)<<ans4(s1,s2);
	}
