#include <iostream>
#include <array>
#include <string>

using namespace std;

int reduce(string word){
	string result;
	result = (word.length() < 11) ? word: word[0] +to_string(word.length()-2) + word[word.length()-1];
	cout << result << endl;
	return 0;
}

int main(){
int n;
cin >> n;	
string words[n];

for(int i =0; i<n; i++){
	cin >> words[i];
	reduce(words[i]);
}
}
