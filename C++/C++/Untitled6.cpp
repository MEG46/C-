#include <iostream>
using namespace std;
int main(){
	int *ptr=NULL;
	int i;
	int count=1;
	int *aptr= new int;
	*aptr=24;
	int *arr;
	arr= new int[5];
	for(i=0;i<5;i++){
		arr[i]=(i+1)*(i+1);
	}
	ptr=arr;
	while(*ptr!='\0'){
		cout << count <<".element : "<<*ptr<<endl;
		count++;
		ptr++;   
	}
	cout << "Aptr Value : " << *aptr<< endl <<endl;    
	return 0;
	delete aptr;
	delete []arr;
}     