#include <iostream>
#include <vector>
using namespace std;
int main(){
	int arr[5] = {7,7,7}; // initial size is 5 and initial values {7,7,7,0,0}
	vector<int> v (5,5);  // initial size is 5 and initial values {5,5,5,5,5}
	cout<<"arr[2]  "  << arr[2] << " " << "v[2] " << v[2] << "\n";
	return 0;
}