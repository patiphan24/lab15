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
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
    int rands[4] = {a,b,c,d};
        for(int i=0; i < rand()%4; i++){
            int w = rands[i];
                rands[i] = rands[i+1];
                rands[i+1] = w;
                a = rands[0];
                b = rands[1];
                c = rands[2];
                d = rands[3];
        }
}