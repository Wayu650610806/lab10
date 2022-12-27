#include<iostream>
using namespace std;

void printO(int r,int c){
	if(c>0&&r>0){
	
	for(int row=0;row!=r;row++){
		for(int colum=0;colum!=c;colum++){
			cout<<"O";
		}
	cout<<"\n";
	}
	}else{
		cout <<"Invalid input";
	}
}



int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
