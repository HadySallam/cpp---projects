# include <iostream>
using namespace std;
int main() {
	int decimal , i = 0 ;
	int binary[8] = { 0 };
	cout << "Hello , this program helps you to convert to binary " << endl << "please enter decimal number : " << endl;
	cin >> decimal;
	while (decimal > 0)
	{
		if (decimal % 2 == 0 )
		{
			decimal /= 2 ;
			i++;
		}
		else if (decimal % 2 != 0)
		{
			binary[i] = 1 ;
			decimal /= 2;
			i++;
		}
	}
	for (int i = 7; i >= 0; i--)
	{
		cout << binary[i];
	}


}
