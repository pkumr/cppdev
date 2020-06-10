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
	int count_ones_in_binary(int x){
		int count = 0;
		//x & (x - 1) sets last bit (1) in number to 0
		//loop the number and set 0 to 1 and increment count
		while(x != 0){
			print_bits(x);
			x = x & (x - 1);
			count++;
		}
		return count;
	}

	void set_all_bits_to_0_except_last(int x){
		print_bits(x);
		int out = x & -x;
		print_bits(out);
	}
	void invert_bits_after_last_one(int x){
		print_bits(x);
		int out = x | (x - 1);
		print_bits(out);
	}
	void is_power_of_two(int x){
		cout << "Number is : " << x << '\n';
		if((x & (x - 1)) == 0)
			cout << "True - Power of two";
		else 
			cout << "False - Not Power of two";

		cout << '\n';
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
	cout << "Count ones in Number" << '\n';
	cout << bp.count_ones_in_binary(11) << '\n' ;
	cout << "Set all bits of 11 to 0 Except Last" << '\n';
	bp.set_all_bits_to_0_except_last(11);
	cout << "Invert all bits after last one" << '\n';
	bp.invert_bits_after_last_one(10);
	cout << "Power of Two" << '\n';
	bp.is_power_of_two(8);
	bp.is_power_of_two(9);

	return 0;
}
