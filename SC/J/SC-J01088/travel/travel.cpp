#include <iostream>
using namespace std;
int main() {
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
	    cout<<1;
	    if(s1[0]==s2[0] &&s1[1]==s2[1]){
		    cout<<1;
		    if(s1[2]=='D'){
		    	if(s2[2]!='F'){
				    cout<<0<<0;
				}
                else{
                    cout<<1<<1;
                }
		    }
		    else if(s1[2]=='B'){
			    if(s2[2]!='A'){
                    cout<<0<<0;
                }
                else if(s2[2]!='C'){
                    cout<<0<<0;
                }
                else{
                    cout<<1<<1;
                }
            }
            else{
                cout<<1<<1;
            }
            
		}
		else{
		    cout<<0<<0; 
		}
	}
	else{
	    cout<<0<<0;
	} 
	return 0;
}