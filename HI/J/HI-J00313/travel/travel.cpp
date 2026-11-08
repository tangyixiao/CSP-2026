#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	
	string an,am;//r的车厢号 ，座位号 
	string bn,bm; //x的车厢号，座位号
	cin>>an>>am>>bn>>bm;
	
	if(an==bn){
		cout<<"1";
		if(am=="01A"){
			if(bm=="01B"||bm=="01C"|bm=="01D"||bm=="01F"){
				cout<<"1";
				
				if(bm=="01B"||bm=="01C"){
					cout<<"1";
					if(bm=="01B"){
						cout<<"1";
					}else{
						cout<<"0";
					} 
				}
				}else{
					cout<<"0"<<"0";
				}
			
			
			}else{
				cout<<"0";
				
				if(am=="01B"){
					if(bm=="01A"||bm=="01C"){
						cout<<"1";
				}else if(am=="01C"){
					if(bm=="01A"){
						cout<<"0";
					}else{
						if(bm=="01B"){
							cout<<"1";
						}else{
							cout<<"0";
						}
					}
				}
				
				else{
						cout<<"00";
					}
				}
			}
		}else if(am=="01B"){
			if(bm=="01A"||bm=="01C"||bm=="01D"||bm=="01F"){
				cout<<"1";
				
			}else{
				cout<<"0";
			}
		}else if(am=="01C"){
			if(bm=="01A"||bm=="01B"||bm=="01D"||bm=="01F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="01D"){
			if(bm=="01A"||bm=="01B"|bm=="01C"||bm=="01F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="01F"){
			if(bm=="01A"||bm=="01B"|bm=="01C"||bm=="01D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		//2
		if(am=="02A"){
			if(bm=="02B"||bm=="02C"|bm=="02D"||bm=="02F"){
				cout<<"1";
				if(bm=="02B"||bm=="02C"){
					cout<<"1";
					if(bm=="02B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="02B"){
			if(bm=="02A"||bm=="02C"||bm=="02D"||bm=="02F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="02C"){
			if(bm=="02A"||bm=="02B"||bm=="02D"||bm=="02F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="02D"){
			if(bm=="02A"||bm=="02B"|bm=="02C"||bm=="02F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="02F"){
			if(bm=="02A"||bm=="02B"|bm=="02C"||bm=="02D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		
		//3
		if(am=="03A"){
			if(bm=="03B"||bm=="03C"|bm=="03D"||bm=="03F"){
				cout<<"1";
				if(bm=="03B"||bm=="03C"){
					cout<<"1";
					if(bm=="03B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="03B"){
			if(bm=="03A"||bm=="03C"||bm=="03D"||bm=="03F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="03C"){
			if(bm=="03A"||bm=="03B"||bm=="03D"||bm=="03F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="03D"){
			if(bm=="03A"||bm=="03B"|bm=="03C"||bm=="03F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="03F"){
			if(bm=="03A"||bm=="03B"|bm=="03C"||bm=="03D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		
		//4
		if(am=="04A"){
			if(bm=="04B"||bm=="04C"|bm=="04D"||bm=="04F"){
				cout<<"1";
				if(bm=="04B"||bm=="04C"){
					cout<<"1";
					if(bm=="04B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="04B"){
			if(bm=="04A"||bm=="04C"||bm=="04D"||bm=="04F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="04C"){
			if(bm=="04A"||bm=="04B"||bm=="04D"||bm=="04F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="04D"){
			if(bm=="04A"||bm=="04B"|bm=="04C"||bm=="04F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="04F"){
			if(bm=="04A"||bm=="04B"|bm=="04C"||bm=="04D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		
		//5
		if(am=="05A"){
			if(bm=="05B"||bm=="05C"|bm=="05D"||bm=="05F"){
				cout<<"1";
				if(bm=="05B"||bm=="05C"){
					cout<<"1";
					if(bm=="05B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="05B"){
			if(bm=="05A"||bm=="05C"||bm=="05D"||bm=="05F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="05C"){
			if(bm=="05A"||bm=="05B"||bm=="05D"||bm=="05F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="05D"){
			if(bm=="05A"||bm=="05B"|bm=="05C"||bm=="05F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="05F"){
			if(bm=="05A"||bm=="05B"|bm=="05C"||bm=="05D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		
		
		//6
		if(am=="06A"){
			if(bm=="06B"||bm=="06C"|bm=="06D"||bm=="06F"){
				cout<<"1";
				if(bm=="06B"||bm=="06C"){
					cout<<"1";
					if(bm=="06B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="06B"){
			if(bm=="06A"||bm=="06C"||bm=="06D"||bm=="06F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="06C"){
			if(bm=="06A"||bm=="06B"||bm=="06D"||bm=="06F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="06D"){
			if(bm=="06A"||bm=="06B"|bm=="06C"||bm=="06F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="06F"){
			if(bm=="06A"||bm=="06B"|bm=="06C"||bm=="06D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		
		//7
		if(am=="07A"){
			if(bm=="07B"||bm=="07C"|bm=="07D"||bm=="07F"){
				cout<<"1";
				if(bm=="07B"||bm=="07C"){
					cout<<"1";
					if(bm=="07B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="07B"){
			if(bm=="07A"||bm=="07C"||bm=="07D"||bm=="07F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="07C"){
			if(bm=="07A"||bm=="07B"||bm=="07D"||bm=="07F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="07D"){
			if(bm=="07A"||bm=="07B"|bm=="07C"||bm=="07F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="07F"){
			if(bm=="07A"||bm=="07B"|bm=="07C"||bm=="07D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		//8
		if(am=="08A"){
			if(bm=="08B"||bm=="08C"|bm=="08D"||bm=="08F"){
				cout<<"1";
				if(bm=="08B"||bm=="08C"){
					cout<<"1";
					if(bm=="08B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="08B"){
			if(bm=="08A"||bm=="08C"||bm=="08D"||bm=="08F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="08C"){
			if(bm=="08A"||bm=="08B"||bm=="08D"||bm=="08F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="08D"){
			if(bm=="08A"||bm=="08B"|bm=="08C"||bm=="08F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="08F"){
			if(bm=="08A"||bm=="08B"|bm=="08C"||bm=="08D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		//9
		if(am=="09A"){
			if(bm=="09B"||bm=="09C"|bm=="09D"||bm=="09F"){
				cout<<"1";
				if(bm=="09B"||bm=="09C"){
					cout<<"1";
					if(bm=="09B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="09B"){
			if(bm=="09A"||bm=="09C"||bm=="09D"||bm=="09F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="09C"){
			if(bm=="09A"||bm=="09B"||bm=="09D"||bm=="09F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="09D"){
			if(bm=="09A"||bm=="09B"|bm=="09C"||bm=="09F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="09F"){
			if(bm=="09A"||bm=="09B"|bm=="09C"||bm=="09D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		
		//10
		if(am=="10A"){
			if(bm=="10B"||bm=="10C"|bm=="10D"||bm=="10F"){
				cout<<"1";
				if(bm=="10B"||bm=="10C"){
					cout<<"1";
					if(bm=="10B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
				}else{
					cout<<"0"<<"0";
				}
			}else{
				cout<<"0";
			}
		}else if(am=="10B"){
			if(bm=="10A"||bm=="10C"||bm=="10D"||bm=="10F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="10C"){
			if(bm=="10A"||bm=="10B"||bm=="10D"||bm=="10F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="10D"){
			if(bm=="10A"||bm=="10B"|bm=="10C"||bm=="10F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="10F"){
			if(bm=="10A"||bm=="10B"|bm=="10C"||bm=="10D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	
		
		//11
		if(am=="11A"){
			if(bm=="11B"||bm=="11C"|bm=="11D"||bm=="11F"){
				cout<<"1";
				if(bm=="11B"||bm=="11C"){
					cout<<"1";
					if(bm=="11B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="11B"){
			if(bm=="11A"||bm=="11C"||bm=="11D"||bm=="11F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="11C"){
			if(bm=="11A"||bm=="11B"||bm=="11D"||bm=="11F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="11D"){
			if(bm=="11A"||bm=="11B"|bm=="11C"||bm=="11F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="11F"){
			if(bm=="11A"||bm=="11B"|bm=="11C"||bm=="11D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="12A"){
			if(bm=="12B"||bm=="12C"|bm=="12D"||bm=="12F"){
				cout<<"1";
				if(bm=="12B"||bm=="12C"){
					cout<<"1";
					if(bm=="12B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="12B"){
			if(bm=="12A"||bm=="12C"||bm=="12D"||bm=="12F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="12C"){
			if(bm=="12A"||bm=="12B"||bm=="12D"||bm=="12F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="12D"){
			if(bm=="12A"||bm=="12B"|bm=="12C"||bm=="12F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="12F"){
			if(bm=="12A"||bm=="12B"|bm=="12C"||bm=="12D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="13A"){
			if(bm=="13B"||bm=="13C"|bm=="13D"||bm=="13F"){
				cout<<"1";
				if(bm=="13B"||bm=="13C"){
					cout<<"1";
					if(bm=="13B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="13B"){
			if(bm=="13A"||bm=="13C"||bm=="13D"||bm=="13F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="13C"){
			if(bm=="13A"||bm=="13B"||bm=="13D"||bm=="13F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="13D"){
			if(bm=="13A"||bm=="13B"|bm=="13C"||bm=="13F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="13F"){
			if(bm=="13A"||bm=="13B"|bm=="13C"||bm=="13D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="14A"){
			if(bm=="14B"||bm=="14C"|bm=="14D"||bm=="14F"){
				cout<<"1";
				if(bm=="14B"||bm=="14C"){
					cout<<"1";
					if(bm=="14B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="14B"){
			if(bm=="14A"||bm=="14C"||bm=="14D"||bm=="14F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="14C"){
			if(bm=="14A"||bm=="14B"||bm=="14D"||bm=="14F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="14D"){
			if(bm=="14A"||bm=="14B"|bm=="14C"||bm=="14F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="14F"){
			if(bm=="14A"||bm=="14B"|bm=="14C"||bm=="14D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		if(am=="15A"){
			if(bm=="15B"||bm=="15C"|bm=="15D"||bm=="15F"){
				cout<<"1";
				if(bm=="15B"||bm=="15C"){
					cout<<"1";
					if(bm=="15B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="15B"){
			if(bm=="15A"||bm=="15C"||bm=="15D"||bm=="15F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="15C"){
			if(bm=="15A"||bm=="15B"||bm=="15D"||bm=="15F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="15D"){
			if(bm=="15A"||bm=="15B"|bm=="15C"||bm=="15F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="15F"){
			if(bm=="15A"||bm=="15B"|bm=="15C"||bm=="15D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="16A"){
			if(bm=="16B"||bm=="16C"|bm=="16D"||bm=="16F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="16B"){
			if(bm=="16A"||bm=="16C"||bm=="16D"||bm=="16F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="16C"){
			if(bm=="16A"||bm=="16B"||bm=="16D"||bm=="16F"){
				cout<<"1";
				if(bm=="16B"||bm=="16C"){
					cout<<"1";
					if(bm=="16B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="16D"){
			if(bm=="16A"||bm=="16B"|bm=="16C"||bm=="16F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="16F"){
			if(bm=="16A"||bm=="16B"|bm=="16C"||bm=="16D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="17A"){
			if(bm=="17B"||bm=="17C"|bm=="17D"||bm=="17F"){
				cout<<"1";
				if(bm=="17B"||bm=="17C"){
					cout<<"1";
					if(bm=="17B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="17B"){
			if(bm=="17A"||bm=="17C"||bm=="17D"||bm=="17F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="17C"){
			if(bm=="17A"||bm=="17B"||bm=="17D"||bm=="17F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="17D"){
			if(bm=="17A"||bm=="17B"|bm=="17C"||bm=="17F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="17F"){
			if(bm=="17A"||bm=="17B"|bm=="17C"||bm=="17D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}else{
		cout<<"0";
		if(am=="01A"){
			if(bm=="01B"||bm=="01C"|bm=="01D"||bm=="01F"){
				cout<<"1";
				if(bm=="01B"||bm=="01C"){
					cout<<"1";
					if(bm=="01B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="01B"){
			if(bm=="01A"||bm=="01C"||bm=="01D"||bm=="01F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="01C"){
			if(bm=="01A"||bm=="01B"||bm=="01D"||bm=="01F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="01D"){
			if(bm=="01A"||bm=="01B"|bm=="01C"||bm=="01F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="01F"){
			if(bm=="01A"||bm=="01B"|bm=="01C"||bm=="01D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="02A"){
			if(bm=="02B"||bm=="02C"|bm=="02D"||bm=="02F"){
				cout<<"1";
				if(bm=="02B"||bm=="02C"){
					cout<<"1";
					if(bm=="02B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="02B"){
			if(bm=="02A"||bm=="02C"||bm=="02D"||bm=="02F"){
				cout<<"1";
				
			}else{
				cout<<"0";
			}
		}else if(am=="02C"){
			if(bm=="02A"||bm=="02B"||bm=="02D"||bm=="02F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="02D"){
			if(bm=="02A"||bm=="02B"|bm=="02C"||bm=="02F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="02F"){
			if(bm=="02A"||bm=="02B"|bm=="02C"||bm=="02D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		
		if(am=="03A"){
			if(bm=="03B"||bm=="03C"|bm=="03D"||bm=="03F"){
				cout<<"1";
				if(bm=="03B"||bm=="03C"){
					cout<<"1";
					if(bm=="03B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="03B"){
			if(bm=="03A"||bm=="03C"||bm=="03D"||bm=="03F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="03C"){
			if(bm=="03A"||bm=="03B"||bm=="03D"||bm=="03F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="03D"){
			if(bm=="03A"||bm=="03B"|bm=="03C"||bm=="03F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="03F"){
			if(bm=="03A"||bm=="03B"|bm=="03C"||bm=="03D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		
		if(am=="04A"){
			if(bm=="04B"||bm=="04C"|bm=="04D"||bm=="04F"){
				cout<<"1";
				if(bm=="04B"||bm=="04C"){
					cout<<"1";
					if(bm=="04B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="04B"){
			if(bm=="04A"||bm=="04C"||bm=="04D"||bm=="04F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="04C"){
			if(bm=="04A"||bm=="04B"||bm=="04D"||bm=="04F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="04D"){
			if(bm=="04A"||bm=="04B"|bm=="04C"||bm=="04F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="04F"){
			if(bm=="04A"||bm=="04B"|bm=="04C"||bm=="04D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		if(am=="05A"){
			if(bm=="05B"||bm=="05C"|bm=="05D"||bm=="05F"){
				cout<<"1";
				if(bm=="05B"||bm=="05C"){
					cout<<"1";
					if(bm=="05B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="05B"){
			if(bm=="05A"||bm=="05C"||bm=="05D"||bm=="05F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="05C"){
			if(bm=="05A"||bm=="05B"||bm=="05D"||bm=="05F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="05D"){
			if(bm=="05A"||bm=="05B"|bm=="05C"||bm=="05F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="05F"){
			if(bm=="05A"||bm=="05B"|bm=="05C"||bm=="05D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		if(am=="06A"){
			if(bm=="06B"||bm=="06C"|bm=="06D"||bm=="06F"){
				cout<<"1";
				if(bm=="06B"||bm=="06C"){
					cout<<"1";
					if(bm=="06B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="06B"){
			if(bm=="06A"||bm=="06C"||bm=="06D"||bm=="06F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="06C"){
			if(bm=="06A"||bm=="06B"||bm=="06D"||bm=="06F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="06D"){
			if(bm=="06A"||bm=="06B"|bm=="06C"||bm=="06F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="06F"){
			if(bm=="06A"||bm=="06B"|bm=="06C"||bm=="06D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		if(am=="07A"){
			if(bm=="07B"||bm=="07C"|bm=="07D"||bm=="07F"){
				cout<<"1";
				if(bm=="07B"||bm=="07C"){
					cout<<"1";
					if(bm=="07B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="07B"){
			if(bm=="07A"||bm=="07C"||bm=="07D"||bm=="07F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="07C"){
			if(bm=="07A"||bm=="07B"||bm=="07D"||bm=="07F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="07D"){
			if(bm=="07A"||bm=="07B"|bm=="07C"||bm=="07F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="07F"){
			if(bm=="07A"||bm=="07B"|bm=="07C"||bm=="07D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		if(am=="08A"){
			if(bm=="08B"||bm=="08C"|bm=="08D"||bm=="08F"){
				cout<<"1";
				if(bm=="08B"||bm=="08C"){
					cout<<"1";
					if(bm=="08B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="08B"){
			if(bm=="08A"||bm=="08C"||bm=="08D"||bm=="08F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="08C"){
			if(bm=="08A"||bm=="08B"||bm=="08D"||bm=="08F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="08D"){
			if(bm=="08A"||bm=="08B"|bm=="08C"||bm=="08F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="08F"){
			if(bm=="08A"||bm=="08B"|bm=="08C"||bm=="08D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		if(am=="09A"){
			if(bm=="09B"||bm=="09C"|bm=="09D"||bm=="09F"){
				cout<<"1";
				if(bm=="09B"||bm=="09C"){
					cout<<"1";
					if(bm=="09B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="09B"){
			if(bm=="09A"||bm=="09C"||bm=="09D"||bm=="09F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="09C"){
			if(bm=="09A"||bm=="09B"||bm=="09D"||bm=="09F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="09D"){
			if(bm=="09A"||bm=="09B"|bm=="09C"||bm=="09F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="09F"){
			if(bm=="09A"||bm=="09B"|bm=="09C"||bm=="09D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		if(am=="10A"){
			if(bm=="10B"||bm=="10C"|bm=="10D"||bm=="10F"){
				cout<<"1";
				if(bm=="10B"||bm=="10C"){
					cout<<"1";
					if(bm=="10B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="10B"){
			if(bm=="10A"||bm=="10C"||bm=="10D"||bm=="10F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="10C"){
			if(bm=="10A"||bm=="10B"||bm=="10D"||bm=="10F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="10D"){
			if(bm=="10A"||bm=="10B"|bm=="10C"||bm=="10F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="10F"){
			if(bm=="10A"||bm=="10B"|bm=="10C"||bm=="10D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
		
	}
		
		if(am=="11A"){
			if(bm=="11B"||bm=="11C"|bm=="11D"||bm=="11F"){
				cout<<"1";
				if(bm=="11B"||bm=="11C"){
					cout<<"1";
					if(bm=="11B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="11B"){
			if(bm=="11A"||bm=="11C"||bm=="11D"||bm=="11F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="11C"){
			if(bm=="11A"||bm=="11B"||bm=="11D"||bm=="11F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="11D"){
			if(bm=="11A"||bm=="11B"|bm=="11C"||bm=="11F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="11F"){
			if(bm=="11A"||bm=="11B"|bm=="11C"||bm=="11D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		if(am=="12A"){
			if(bm=="12B"||bm=="12C"|bm=="12D"||bm=="12F"){
				cout<<"1";
				if(bm=="12B"||bm=="12C"){
					cout<<"1";
					if(bm=="12B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="12B"){
			if(bm=="12A"||bm=="12C"||bm=="12D"||bm=="12F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="12C"){
			if(bm=="12A"||bm=="12B"||bm=="12D"||bm=="12F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="12D"){
			if(bm=="12A"||bm=="12B"|bm=="12C"||bm=="12F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="12F"){
			if(bm=="12A"||bm=="12B"|bm=="12C"||bm=="12D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="13A"){
			if(bm=="13B"||bm=="13C"|bm=="13D"||bm=="13F"){
				cout<<"1";
				if(bm=="13B"||bm=="13C"){
					cout<<"1";
					if(bm=="13B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="13B"){
			if(bm=="13A"||bm=="13C"||bm=="13D"||bm=="13F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="13C"){
			if(bm=="13A"||bm=="13B"||bm=="13D"||bm=="13F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="13D"){
			if(bm=="13A"||bm=="13B"|bm=="13C"||bm=="13F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="13F"){
			if(bm=="13A"||bm=="13B"|bm=="13C"||bm=="13D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="14A"){
			if(bm=="14B"||bm=="14C"|bm=="14D"||bm=="14F"){
				cout<<"1";
				if(bm=="14B"||bm=="14C"){
					cout<<"1";
					if(bm=="14B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="14B"){
			if(bm=="14A"||bm=="14C"||bm=="14D"||bm=="14F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="14C"){
			if(bm=="14A"||bm=="14B"||bm=="14D"||bm=="14F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="14D"){
			if(bm=="14A"||bm=="14B"|bm=="14C"||bm=="14F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="14F"){
			if(bm=="14A"||bm=="14B"|bm=="14C"||bm=="14D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="15A"){
			if(bm=="15B"||bm=="15C"|bm=="15D"||bm=="15F"){
				cout<<"1";
				if(bm=="15B"||bm=="15C"){
					cout<<"1";
					if(bm=="15B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="15B"){
			if(bm=="15A"||bm=="15C"||bm=="15D"||bm=="15F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="15C"){
			if(bm=="15A"||bm=="15B"||bm=="15D"||bm=="15F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="15D"){
			if(bm=="15A"||bm=="15B"|bm=="15C"||bm=="15F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="15F"){
			if(bm=="15A"||bm=="15B"|bm=="15C"||bm=="15D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="16A"){
			if(bm=="16B"||bm=="16C"|bm=="16D"||bm=="16F"){
				cout<<"1";
				if(bm=="16B"||bm=="16C"){
					cout<<"1";
					if(bm=="16B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="16B"){
			if(bm=="16A"||bm=="16C"||bm=="16D"||bm=="16F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="16C"){
			if(bm=="16A"||bm=="16B"||bm=="16D"||bm=="16F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="16D"){
			if(bm=="16A"||bm=="16B"|bm=="16C"||bm=="16F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="16F"){
			if(bm=="16A"||bm=="16B"|bm=="16C"||bm=="16D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
		
		
		if(am=="17A"){
			if(bm=="17B"||bm=="17C"|bm=="17D"||bm=="17F"){
				cout<<"1";
				if(bm=="17B"||bm=="17C"){
					cout<<"1";
					if(bm=="17B"){
						cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"0";
			}
		}else if(am=="17B"){
			if(bm=="17A"||bm=="17C"||bm=="17D"||bm=="17F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="17C"){
			if(bm=="17A"||bm=="17B"||bm=="17D"||bm=="17F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="17D"){
			if(bm=="17A"||bm=="17B"|bm=="17C"||bm=="17F"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else if(am=="17F"){
			if(bm=="17A"||bm=="17B"|bm=="17C"||bm=="17D"){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
	}
	}
	
	cout<<"1"<<"0";
	return 0;
}
