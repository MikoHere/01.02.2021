#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void MaxMin(){
		
	int t[1000];
	int i;
	int min=0;
	int max=99999;
	
	ifstream wejscie;
	ofstream wyjscie;
	wejscie.open("liczby1.txt");
	wyjscie.open("wyniki.txt");
	
	if(wejscie.good()){
		while(!wejscie.eof()){
			
			wejscie>>t[i];
			if(min<t[i]){
				min=t[i];
			}
			else if(max>t[i]){
				max=t[i];
			}
		}
	}
	if(wyjscie.good()){
		wyjscie<<"max: "<<oct<<max<<endl;
		wyjscie<<"min: "<<oct<<min<<endl;
	}
	
	wejscie.close();
	wyjscie.close();
}

int main(int argc, char** argv) {
	MaxMin();
	return 0;
}
