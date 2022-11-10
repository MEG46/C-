#include <iostream>
using namespace std;
class Power{
	double num;
	double num1=num;
	public:
		Power() : num(10){}
		void operator*() {
			num = num * num;
		}
	void print(){
		cout << "Power of " <<num1 << " : " << num;
	}	
};
int main(){
	Power p;
	*p;
	p.print();
	return 0;
}