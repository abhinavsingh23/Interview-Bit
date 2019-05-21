#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>


int main(){

	int m;
	int n;
	cin >> m;
	cin >> n;
	int Arr[m][n];
	int a;
	int b;	
	for(a=0;a<m;a++){
		for(b=0;b<n;b++){
			cin >> Arr[a][b];

		}
	}	
	
	
	int ri=0;
	int rl=m-1;
	int ci=0;
	int cl=n-1;
bingo:										// Goto jumps here
	
/*-----------------Top Row--------------------*/

	int j;
	for(j=ci;j<=cl;j++){

		cout << Arr[ri][j] <<"\n";
		if(j==cl){
			ri=ri+1;
			
		}
	}


	if((ri>rl)||(ci>cl)){								// Break Condition
		return 0;
	}

/*--------------------Right Column-------------------*/
	int i;
	for(i=ri;i<=rl;i++){

		cout << Arr[i][cl] << "\n";
		if(i==rl){
			cl=cl-1;		
		}
	}

	if((ri>rl)||(ci>cl)){								// Break Condition
		return 0;
	}

/*-----------------------Bottom Row------------------*/

	int p;
	for(p=cl;p>=ci;p--){

		cout << Arr[rl][p] << "\n";
		if(p==ci){
			rl=rl-1;		
		}
	}

	if((ri>rl)||(ci>cl)){									// Break Condition
		return 0;
	}

/*----------------------Left Column------------------------*/
	int q;
	for(q=rl;q>=ri;q--){

		cout << Arr[q][ci] << "\n";
		if(q==ri){
			ci=ci+1;		
		}
	}

	if((ri>rl)||(ci>cl)){									// Break Condition
		return 0;					
	}
	
	


goto bingo;

	

}
