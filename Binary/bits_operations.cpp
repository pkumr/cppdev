#include <iostream>
#include <vector>

using namespace std;

class BitsOps{
	public:
	void print_bits(int x){
		cout << "Bit Number of : " << x << '\n';
		for(int i = 31; i >= 0; i--){
			//1<<K has a one bit in position K
			//1 & 1 is 1. 10 - 0b1010, so 
			if(x & (1 << i))
				cout << "1";
			else
				cout << "0";
		}
		cout << '\n';
	}

	void modify_kthbit_0to1(int x, int k){
		print_bits(x);
		int out = x | (1 << k);
		print_bits(out);
	}
	void modify_kthbit_1to0(int x, int k){
		print_bits(x);
		int out = x & ~(1 << k);
		print_bits(out);
	}
	void invert_kth_bit(int x, int k){
		print_bits(x);
		int out = x ^ (1 << k);
		print_bits(out);
	}
};

int main(){
	BitsOps bp;
	bp.print_bits(40);
	cout << "Modify kth bit - 0 to 1" << '\n';
	bp.modify_kthbit_0to1(11, 2);
	cout << "Modify kth bit - 1 to 0" << '\n';
	bp.modify_kthbit_1to0(11, 1);
	cout << "Invert k bit 0 to 1 and 1 to 0" << '\n';
	bp.invert_kth_bit(11, 1);
	bp.invert_kth_bit(11, 2);
	return 0;
}
