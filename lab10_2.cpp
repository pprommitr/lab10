#include<iostream>
using namespace std;

void printO(int N,int M){
     if(M <= 0 or N <=0){
		cout << "Invalid input";
	 }
	 for(int n = 0; n<N; n++){
		for(int m = 0; m < M; m++){
			cout << 'O';
		}
		cout << '\n';
	 }

}//Write the function printO() here

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
