#include <iostream>
using namespace std;
int threenotfive(int num1[10]) {
	int top = 0;
	for (int i = 0; i < 10; i++)
	{

		if (num1[i] % 3 == 0 && num1[i] % 5 != 0) {
			top++;
		}
	}
	return top;
}

int afternegative(int num1[10]) {
	int t = 0;
	int cem = 0;
	for (int i = 0; i < 10; i++)
	{

		if (num1[i]<0) {
			t = i+1;
			break;
		}
	}
	for (int i = t; i < 10; i++)
	{
		cem += num1[i];
		
	}
	return cem;
}

int afterpositive(int num1[10]) {
	int t = 0;
	int cem = 0;
	for (int i = 0; i < 10; i++)
	{

		if (num1[i] > 0) {
			t = i+1;
			
			break;
		}
	}
	for (int i = t; i < 10; i++)
	{
		cem += num1[i];

	}
	return cem;
}
void maximumandminimum(int num1[20]) {
	int mini = num1[0];
	int maxi = num1[0];
	for (int i = 1; i < 20; i++)
	{

		if (num1[i] > maxi) {
			maxi = num1[i];
		}
	}
	for (int i = 1; i < 20; i++)
	{

		if (num1[i] < mini) {
			mini = num1[i];
		}
	}
	cout << "ededlerde minimum" << mini << endl;
	cout << "ededlerde maksimum" << maxi << endl;

}


void percentage(int num1[20]) {
	int onen = 0;
	int twon = 0;
	int threen = 0;
	for (int i = 0; i < 20; i++)
	{

		if (num1[i]/100!=0) {
			threen++;
		}
		else if (num1[i] / 10 != 0) {
			twon++;
		}
		else if (num1[i] / 10 == 0) {
			onen++;
		}
	}
	cout << "birreqemlinin faizi =" << onen  * 100 / 20<<endl;
	cout << "ikireqemlinin faizi =" << twon * 100 / 20<<endl;
	cout << "ucreqemlinin faizi =" << threen * 100 / 20<<endl;

}


int main()
{
	srand(time(NULL));
	int min = 1;
	int max = 100;
	int tap1[10];
	cout << "tap1" << endl;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		tap1[i] = random;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << tap1[i] << " ";
	}
	cout << endl;
	cout<<threenotfive(tap1)<<endl;


	min = -10;
	max = 30;
	int tap2[10];
	cout << "tap2" << endl;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		tap2[i] = random;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << tap2[i] << " ";
	}
	cout << endl;
	cout << afternegative(tap2) << endl;



	min = -30;
	max = 20;
	int tap3[10];
	cout << "tap3" << endl;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		tap3[i] = random;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << tap3[i] << " ";
	}
	cout << endl;
	cout << afterpositive(tap3) << endl;


	min = -30;
	max = 40;
	int tap4[20];
	cout << "tap4" << endl;
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		tap4[i] = random;
	}
	for (int i = 0; i < 20; i++)
	{
		cout << tap4[i] << " ";
	}
	cout << endl;
	maximumandminimum(tap4);



	min = 1;
	max = 200;
	int tap5[20];
	cout << "tap5" << endl;
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		tap5[i] = random;
	}
	for (int i = 0; i < 20; i++)
	{
		cout << tap5[i] << " ";
	}
	cout << endl;
	percentage(tap5);
	return 0;
}

