#include <iostream>
using namespace std;

int main (){
	int n, k;
	int threshold;
	
	cin >> n;
	cin >> k;
	
//	cout << " k = " << k;
	
	int participants[n];
//	cout << "Array of Participants " << endl;
	for(int i=0;i<n;i++) {
		cin >> participants[i];
//		cout << participants[i] << " ";
	}
	
	
	int nextRound = 0;
	threshold = participants[k-1];
	
//	cout <<  endl <<"Threshold is " << threshold << endl;
	
	for( int i = 0; i<n;i++){
		if (participants[i] >= threshold and participants[i] > 0){
				
			nextRound = nextRound + 1;
		}
	}
	
	cout << nextRound;
	
}
