#include<bits/stdc++.h>
using namespace std;
string cl,sl,cr,sr;
bool f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cl>>sl>>cr>>sr;
	for(int i=0;i<cl.size();i++){
		if(cl[i]!=cr[i])	f=1;
	}
	if(f==0){
		cout<<"1";
	}else{
		cout<<"0";
	}
	bool x=0;
	for(int i=0;i<sl.size()-1;i++){
		if(sl[i]!=sr[i]) x=1;
	}
	if(f==0){
		if(x==0){
		   cout<<"1";
	    }else{
		   cout<<"0";
	    }
	}else{
		cout<<"0";
	}
	if(f==0){
		if(x==0){
		if(sl[sl.size()-1]>='A'&&sl[sl.size()-1]<='C'&&sr[sr.size()-1]>='A'&&sr[sr.size()-1]<='C'){
		    	cout<<"1";
		    }else if(sl[sl.size()-1]>='D'&&sl[sl.size()-1]<='F'&&sr[sr.size()-1]>='D'&&sr[sr.size()-1]<='F'){
			    cout<<"1";
		    }else{
			    cout<<"0";
		    }
	    }else{
		    cout<<"0";
        }
	}else{
		cout<<"0";
	}
	if(f==0&&x==0&&abs(sl[sl.size()-1]-sr[sr.size()-1])==1&&!((sl[sl.size()-1]=='C'&&sr[sr.size()-1]=='D')||(sl[sl.size()-1]=='D'&&sr[sr.size()-1]=='C'))){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
