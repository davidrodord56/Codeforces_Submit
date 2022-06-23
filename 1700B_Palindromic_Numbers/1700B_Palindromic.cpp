#include <iostream>
#include <cmath>

using namespace std;

int count_digit(int number){
	return int(log10(number)+1);
}

int generate_mod(int number){
	int length;
	string str;
	char zero = '0';
	length = count_digit(number);
	str.append(length, zero);
    str[0] = '9';	
	int ret = stoi(str);
//	cout << number <<" return is " << ret;
	return ret;	
}

int get_minus(int number, int mod){
	int mod_result = number % mod;
	int minus;
	string str;
	char nine = '9';
	char one = '1';
	int length = count_digit(number);
	
	if(count_digit(number) != count_digit(mod_result) ){
		return (stoi(str.append(length+1, one)));
		
	}
	else {
		return(stoi(str.append(length, nine)));
	}
}

int main(){
	int number;
//	for(i=0;i<n,i++){	}
	cin >> number;
	
	
 	int g= generate_mod(number);
 	int minus = get_minus(number, g);
 	
	cout << "number = " <<number <<" mod  = " << g << " minus =" << minus;
    return 0;
}

