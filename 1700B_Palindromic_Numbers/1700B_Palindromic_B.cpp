#include <iostream>
#include <cmath>
#include<string>
#include<string.h>

using namespace std;


int to_eleven(char numb, int carry) {
	int number = (int)numb-'0';
	
	int value = (number == 0) ? 0: 11-number;
//	int value = 11 - number;
	return value, carry;
}

int to_nine(char numb){
	int number = (int)numb - '0';
	int value = 9 - number ;
	return value;
}

int main(){

int nu;
cin >> nu;


for(int a = 0; a<nu; a++)
{	
	int n=0;
	int carry = 0;
	cin >> n;
	string str;
	cin >> str;
	char ret[n];
	
if( str[0] == '9'){
	int character;
//	cout << "\n Getting number"	<< str;
	for(int i=0; i < n-1; i++){
	character = 0;
	if(str[i] > 0){
		str[i+1] = str[i+1] - 1;
	}
	character, carry = to_eleven(str[i], carry);
	ret[i] = character + '0'-1;
	cout << ret[i];
	}
	character = 0;
	character = to_eleven(str[n-1], carry);
	ret[n-1]= character +'0';
	cout << ret[n-1];
//	character = 0;
//	character = to_eleven(str[n]);
//	ret[n] = character + '0';
//	cout << ret[n];
	

}

else if(str[0] != '9'){
	int character = 0;
	for(int i=0; i < n; i++){
	character = to_nine(str[i]);
	ret[i] = character + '0';
	cout << ret[i];
//	cout << "Reps nine "<<i << " -- "<<ret[i] << endl;

	}
}
cout << endl;

//cout << ret << endl;
str.clear();
memset(ret,0,sizeof ret);
}






return 0;
}

