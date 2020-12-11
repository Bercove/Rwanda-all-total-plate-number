#include <iostream>
using namespace std;

int main()
{
	cout <<"--------All Rwandan Cars---------" <<endl;
	cout <<"RAA 001 A" <<endl;
	cout <<"RZZ 999 Z" <<endl;
	cout <<'IT 001 A' <<endl;
	cout <<'IT 999 Z' <<endl;
	cout <<'GP 001 A' <<endl;
	cout <<'GP 999 Z' <<endl;
	cout <<'RDF 001 A' <<endl;
	cout <<'RDF 999 Z' <<endl;
	cout <<'RNP 001 A' <<endl;
	cout <<'RNP 999 Z' <<endl;

	int count = 0;

	for(char letter1 = 'A'; letter1 <= 'Z'; letter1++){

		if(letter1 == 'O')
			continue;

		for(char letter2 = 'A'; letter2 <= 'Z'; letter2++){

			if(letter2 == 'O')
				continue;

			for(char letter3 = 'A'; letter3 <= 'Z'; letter3++){

				if(letter3 == 'O')
					continue;

				for(int number = 1; number <= 999; number++){
					number = number;
					count += 1;
					cout <<count <<"\t\t" <<"R" <<letter1 <<letter2 <<' ';
					cout.fill('0');    
					cout.width(3);
					cout <<number <<' ' <<letter3 <<endl;
				}
			}
		}
	}

	for(char letter1 = 'A'; letter1 <= 'Z'; letter1++){

		if(letter1 == 'O')
			continue;

		for(int number = 1; number <= 999; number++){
			number = number;
			count += 1;
			cout <<count <<"\t\t" <<"IT" <<' ';
			cout.fill('0');    
			cout.width(3);
			cout <<number <<' ' <<letter1 <<endl;
		}
	}

	for(char letter1 = 'A'; letter1 <= 'Z'; letter1++){

		if(letter1 == 'O')
			continue;

		for(int number = 1; number <= 999; number++){
			number = number;
			count += 1;
			cout <<count <<"\t\t" <<"GP" <<' ';
			cout.fill('0');    
			cout.width(3);
			cout <<number <<' ' <<letter1 <<endl;
		}
	}

	for(char letter1 = 'A'; letter1 <= 'Z'; letter1++){

		if(letter1 == 'O')
			continue;

		for(int number = 1; number <= 999; number++){
			number = number;
			count += 1;
			cout <<count <<"\t\t" <<"RDF" <<' ';
			cout.fill('0');    
			cout.width(3);
			cout <<number <<' ' <<letter1 <<endl;
		}
	}

	for(char letter1 = 'A'; letter1 <= 'Z'; letter1++){

		if(letter1 == 'O')
			continue;

		for(int number = 1; number <= 999; number++){
			number = number;
			count += 1;
			cout <<count <<"\t\t" <<"RNP" <<' ';
			cout.fill('0');    
			cout.width(3);
			cout <<number <<' ' <<letter1 <<endl;
		}
	}

	return 0;
}
