#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *A,int *B,int *C,int *D){
	int *X[4] = {A,B,C,D}; //array ต้องเป็น int *X[] เพราะมันเก็บ pointer (A,B,C,D)
	for(int k = 0; k < 10; k++){
		int i = rand()%4;
		int j = rand()%4;
		if(i == j) continue;
		int temp = *X[i]; //การเอาค่าที่ pointer ชี้ไป ต้องใช้ *X[i] ตอนเข้าถึงข้อมูล
		*X[i] = *X[j];
		*X[j] = temp;
	}
}
