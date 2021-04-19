#include <iostream>
using namespace std;

int main(){
	int x, z;
	cout << "Inputkan Nilai x : ";
	cin >> x;getchar();
	cout << "Inputkan Nilai z : ";
	cin >> z;getchar();
	if(x >= z){
		cout << "Hasil : " << x + z << endl;
	}else{
		cout << "Hasil : " << x - z << endl;
	}
	return 0;
}
