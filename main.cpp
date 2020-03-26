#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t,l,ost,przed_ost;
	string c;
	
	cin>>t;
	
	while(t){
		cin>>l>>c;
		
		ost = c[c.length()-1] - '0';
		przed_ost = c[c.length()-2] - '0';
		
		cout<<ost<<" "<<przed_ost;
		
		if(l == 1){
			cout<<"TAK\n";
		}
		
		else if(l == 2){
			if(ost % 2 == 0 || ost == 0){
				cout<<"TAK\n";
			}
			else	cout<<"NIE\n";
		} 
		
		else if(l == 4){
			if((przed_ost*10+ost)%4 == 0){
				cout<<"TAK\n";
			}
			else	cout<<"NIE\n";
		}
		
		else if(l == 5){
			if(ost == 0 || ost == 5){
				cout<<"TAK\n";
			}			
			else	cout<<"NIE\n";
		}
		
		else if(l == 10){
			if(ost == 0){
				cout<<"TAK\n";
			}
			else	cout<<"NIE\n";
		}
		
		else if(l == 20){
			if(ost == 0 && (przed_ost == 0 || przed_ost%2 == 0)){
				cout<<"TAK\n";
			}
			else	cout<<"NIE\n";
		}
		
		else if(l == 25){
			if(przed_ost*10+ost == 25 || przed_ost*10+ost == 50 || przed_ost*10+ost == 75 || przed_ost*10+ost == 0){
				cout<<"TAK\n";
			}
			else	cout<<"NIE\n";
		}
		
		else if(l == 50){
			if((ost == 0 && przed_ost == 0 || przed_ost*10+ost == 50)){
				cout<<"TAK\n";
			}
			else	cout<<"NIE\n";
		}
		
		else if(l == 100){
			if(przed_ost == 0 && ost == 0){
				cout<<"TAK\n";
			}
			else	cout<<"NIE\n";
		}
	--t;}
}
