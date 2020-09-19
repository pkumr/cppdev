#include <iostream>
using namespace std;

class BinaryBits {
public:
	void increment_max() {
		//max value plus one is negative number!
        //2147483647 is maximum INT value
		int x = 2147483647;
		cout << x << "\n";
		x++;
		cout << x << "\n"; //-2147483647
	}

	void and_operation() {
		int x = 22;
		int y = 26;

		int out = x & y;
		//22 - 10110
		//26 - 11010
		//& -> 10010 ==> 18

		cout << "AND Operation of 22 And 26" << '\n';
		cout << out << "\n";
	}

	void is_even_or_odd(int x) {
		cout << x << '\n';
		if ((x & 1) == 0b0) {
			cout << "Number is Even" << '\n';
			cout << "Number is Even when Number (&) 1 == 0  " << '\n';
		}
		else if ((x & 1) == 0b1) {
			cout << "Number is Odd" << '\n';
			cout << "Number is Odd when Number (&) 1 == 1  " << '\n';
		}
	}
	void or_operation() {
		//22	10110
		//26	11010
		//| -	11110 --> 30
		cout << "OR Operation of 22 and 26" << '\n';
		int x = 22;
		int y = 26;
		int z = (x | y);
		cout << z << '\n';
	}
	void xor_operation() {
		//22	10110
		//26	11010
		//^		01110 --> 12
		cout << "XOR Operation of 22 and 26" << '\n';
		int x = 22;
		int y = 26;
		int z = (x ^ y);
		cout << z << '\n';
	}
	void not_operation() {
		cout << "NOT(~) Operation produces -x-1"<< '\n';
		cout << ~29 << '\n';
		cout << ~100 << '\n';
		cout << ~89 << '\n';
	}
	void bit_shift() {
		//Bit Shifts
		//The left bit shift apppends k zero bits to the number
		//<< means number multiples 2 POW (K)
		// 14 * (2 POWER 2) = 14 * 4
		int x = 14 << 2; 
		//Output - 56
		// 14 - 1110
		// 56 - 111000
		//All bits shifted left
		cout << x << '\n';

		//The right bit shift removes k last bits from number
		//>> means number divided by  2 POW (K) [rounded down to INT]
		//49 divided by 2 POW (3) - 49 divided by 8
		int y = 49 >> 3;
		// Output - 6
		// 49 - 110001
		// 6  - 110
		cout << y << '\n';
	}
};

int main(){
	BinaryBits bo;
	bo.increment_max();
	bo.and_operation();
	bo.is_even_or_odd(4);
	bo.is_even_or_odd(5);
	bo.or_operation();
	bo.xor_operation();
	bo.not_operation();
	bo.bit_shift();
	return 0;
}
