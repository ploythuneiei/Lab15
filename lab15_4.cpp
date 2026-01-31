#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a, int &b, int &c, int &d){
	for(int i = 0; i < 10; i++){
		int temp;
		int x = rand()%6;

		if(x == 0){
			temp = a;
			a = b;
			b = temp;
		}else if(x == 1){
			temp = a;
			a = c;
			c = temp;
		}else if(x == 2){
			temp = a;
			a = d;
			d = temp;
		}else if(x == 3){
			temp = b;
			b = c;
			c = temp;
		}else if(x == 4){
			temp = b;
			b = d;
			d = temp;
		}else {
			temp = c;
			c = d;
			d = temp;
		}
	}
}
