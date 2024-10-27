//************************************************************************************************************
//************************************************************************************************************

	#include <iostream>
	#include <cmath>
	#include <fstream>

	using namespace std;

//************************************************************************************************************
//************************************************************************************************************

int main(){

	ofstream outfile1("outputA1.txt");
	ofstream outfile2("outputA2.txt");

	float T1, T2, p_min, p_max, p, p_star;
	float dE1[13] = {100,90,80,75,70,60,55,50,40,30,20,15,0}; //DG
	float dE2[11] = {100,99,70,65,60,55,50,40,35,20,0}; //UG

	p_star = 0.0;
	p_min = 0.0;
	p_max = 1.0;
	p = 0.99;

//************************************************************************************************************
//************************************************************************************************************

	for (int i = 0; i < 13; i++){
		T1 = - abs(100.0 - dE1[i]) / (log((p - p_star) / (p_max - p_star)));
		outfile1 << 100.0 - dE1[i] << '\t' << T1 << endl;
	}

	for (int i = 0; i < 11; i++){
		T2 = - abs(100.0 - dE2[i]) / (log((p - p_star) / (p_max - p_star)));
		outfile2 << 100.0 - dE2[i] << '\t' << T2 << endl;
	}

//************************************************************************************************************
//************************************************************************************************************

	outfile1.close();
	outfile2.close();

return 0;
}

//************************************************************************************************************
//************************************************************************************************************
