#include <iostream>

using namespace std;
void Tablero () {
	for (int i=0;i<5;i++){
		for (int j=0; j<3; j++ ){
		
		if ( i%2==1){
			cout <<"______";	
		}else {
			cout << "      ";
			
		}  
		if(j < 2){
			cout << "|";
			
		}
	}
	cout << endl ;
	
}
}
int main(){
	Tablero();
	return 0;
}
