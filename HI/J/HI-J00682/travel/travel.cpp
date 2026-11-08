#include<bits/stdc++.h>

using namespace std;

string r_chexiang ,r_zuowei ,x_chexiang ,x_zuowei; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>r_chexiang>>r_zuowei>>x_chexiang>>x_zuowei;
	if(r_chexiang == x_chexiang){
		cout<<1;
	} 
	else{
		cout<<"0000";
        return 0;
	}
	
	if(r_zuowei[0] == x_zuowei[0]&&r_zuowei[1] == x_zuowei[1]){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	
	if(r_zuowei[2] == 'F'&&r_zuowei[2]=='D'){
        if(x_zuowei[2] == 'D'&&x_zuowei[2]=='F'){
		   cout<<1;
	   }
	   else{
	   	cout<<"00";
	   	return 0;
	   }
	}
	else if(r_zuowei[2] == 'C'||r_zuowei[2]=='B'||r_zuowei[2]=='A'){
		    if(x_zuowei[2] == 'C'||x_zuowei[2]=='B'||x_zuowei[2]=='A'){
		    cout<<1;
	      }
	      else{
	      	cout<<"00";
	      	return 0;
		  }
	}
    if(r_zuowei[2] == 'F'&&x_zuowei[2]=='D'){
	   cout<<1;
    } 
	else if(r_zuowei[2] == 'D'&&x_zuowei[2]=='F'){
		cout<<1;
	}
    else if(r_zuowei[2] == 'C'&&x_zuowei[2]=='B'){
		cout<<1;
	}
	else if(r_zuowei[2] == 'B'&&x_zuowei[2]=='C'){
		cout<<1;
	}
	else if(r_zuowei[2] == 'B'&&x_zuowei[2]=='A'){
		cout<<1;
	}
	else if(r_zuowei[2] == 'A'&&x_zuowei[2]=='B'){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
} 
