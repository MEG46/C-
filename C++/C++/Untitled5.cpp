#include <iostream>
using namespace std;
struct Info{
    char name[50];
    float height;
    float weight;
    float age;
};
int main(){
	int num;
	cout << "Please enter how many animal would you add : ";
	cin >> num;
	struct Info types[num];
	int i;
	for(i=0;i<num;i++){
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << endl << endl << (i+1) << ". Animal"<< endl << endl;
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << "Type : ";
		cin >> types[i].name;
		fflush(stdin);
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << "Height (cm) : ";
		cin >> types[i].height;
		fflush(stdin);
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << "Weight (kg) : ";
		cin >> types[i].weight;
		fflush(stdin);
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << "Age (months) : ";
		cin >> types[i].age;
		fflush(stdin);
		cout << endl << endl << "-----------------------------------"<< endl << endl;
	}
	for(i=0;i<num;i++){
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << endl << endl << (i+1) << ". Animal"<< endl << endl;
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << "Type : "<< types[i].name;
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << "Height : "<< types[i].height<< " cm";
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << "Weight : "<< types[i].weight<< " kg";
		cout << endl << endl << "-----------------------------------"<< endl << endl;
		cout << "Age : "<< types[i].age << " months";
		cout << endl << endl << "-----------------------------------"<< endl << endl;
	}
	return 0;
}