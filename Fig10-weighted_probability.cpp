
//************************************************************************************************************
//************************************************************************************************************

	#include <iostream>
	#include <cmath>
	#include <fstream>

	using namespace std;

//************************************************************************************************************
//************************************************************************************************************

int main(){

	ofstream outfile1("outputC.txt");

	int N = 10;
	float sum = 0.0, k = 0.001;
	
	float w[10] = {0.075,0.075,0.075,0.10,0.15,0.425,0.025,0.025,0.025,0.025}; //DG
	//float w[10] = {0.05,0.0,0.025,0.025,0.075,0.625,0.025,0.025,0.0,0.05}; //UG
	float dE[10] = {4.5,14.5,24.5,34.5,44.5,54.5,64.5,74.5,84.5,95};
	float T[10] = {0.5,1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5};

//************************************************************************************************************
//************************************************************************************************************

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){ sum = sum + (w[j] * exp(- dE[i] / (k * T[j])));
			//outfile1 << exp(- dE[i] / (k * T[j])) << '\t' << w[j] * exp(- dE[i] / (k * T[j])) << '\t' << sum << endl;
			}
			outfile1 << dE[i] + 0.5 << '\t' << w[i] * sum << endl;
			//outfile1 << "***************************" << endl;
			//outfile1 << dE[i] << '\t' << sum / float(N) << endl;
			sum = 0.0;
	}

//************************************************************************************************************
//************************************************************************************************************

	outfile1.close();

return 0;
}

//************************************************************************************************************
//************************************************************************************************************
