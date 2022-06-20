#include <iostream>
#include <array>

using namespace std;

int main(){
int n;
cin >> n;
int sum = 0;
int problems[n][3];
int nproblems = 0;

for(int i =0; i<n; i++){
 for(int j = 0; j < 3; j++){
 		cin >> problems[i][j];	
 }
}


//for(int i =0; i<n; i++){
// for(int j = 0; j < 3; j++){
// 	
// 		cout << problems[i][j] << " "; 
// 		
// }
// cout << endl;
//}



for(int i =0; i<n; i++){
	sum = 0;
 for(int j = 0; j < 3; j++){
 		sum = sum + problems[i][j];
 		
 }
//cout << "For line " << i << " there are " << sum <<endl;
if(sum > 1){
	nproblems = nproblems +1;
}
}

cout << nproblems;
//return nproblems; 
}
