#include <iostream>
using namespace std;


int main(){
	int n;
	cin >> n;
	string result = (n % 2 == 0 && n > 2) ? "YES": "NO";
	cout << result;
}
