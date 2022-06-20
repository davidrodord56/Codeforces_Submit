#include <iostream>
#include <array>

using namespace std;

int main(){
int n;
cin >> n;
int sum = 1;
int problems[n][n];

for(int i =0; i<n; i++){
 for(int j = 0; j < n; j++){
 		problems[i][j] = sum; 		
 		sum = sum +1;
 		
 }
 
}



for(int i =0; i<n; i++){
 for(int j = 0; j < n; j++){
 	
 		cout << problems[i][j] << " "; 
 		
 }
 cout << endl;
}


}
