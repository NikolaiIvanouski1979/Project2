# include <iostream>
using namespace std;

float weiding(float);

int main()
{
	float kg, pnd;
	cout << "Please! Enter weding in pound: " << endl;
	cin >> pnd;
	kg = weiding(pnd);
	cout << "Weiding in kg is: " << kg << endl;
	system("pause");
	return 0;
}

float weiding(float pound)
{
	
	return 0.453593 * pound;
}