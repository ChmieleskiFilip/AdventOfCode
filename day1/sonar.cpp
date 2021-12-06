#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

int increase = 0;
string line1;
string line2;
ifstream depth;

depth.open ("depth.txt");
	while (getline (depth , line1)) {
	if (line1 > line2) {
	increase++;
	}
	line2 = line1;
	}
depth.close() ;
cout << "there are " << increase << " meassurements that are larger than the previous meassurement."<< endl;
} 
