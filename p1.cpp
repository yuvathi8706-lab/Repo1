#include <iostream>
using namespace std;

int main(){
	int a, b, res;
	cin >> a >> b;
	char op;
	cin >> op;
	switch(op){
		case '+':
			res = a+b;
			break;
		case '-':
			res = (a>b)?(a-b):(a+b);
			break;
		default:
			res = 0;
			break;
	}
	cout << "Result: " << res;
	return 0;
}
