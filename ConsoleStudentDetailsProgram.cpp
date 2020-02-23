#include <iostream>
#include <math.h>
using namespace std;


class Student {



private:
	int roll;
	string name;
	int SoftwareEngineeringMark;
	int Web_Tech;
	int SystemAnalysis_Design;


public:
	Student ( int r, string n, int S, int W_T, int SA_D )
	{
		roll = r;
		name = n;
		
		 SoftwareEngineeringMark = S;
		 Web_Tech = W_T;
		 SystemAnalysis_Design = SA_D;

	}

	 int total() 
	 {
		
		return SoftwareEngineeringMark +Web_Tech + SystemAnalysis_Design;

	}
	 char  Grade() 
	 {
		 
		 int Average = total ()/3;
		 
		 if (Average >= 70) 
		 {
			 return 'A';

		 }
		 else if (Average > 59 && (Average < 70))
		 {
			 return 'B';
		 }

		 else if (Average > 49 && (Average < 60)) 
		 {
			 return 'C';

		 }
		 else if

			 (Average > 39 && (Average < 50))
		 {
			 return 'D';

		 }
		 else cout << "Failed" << endl;
		
	 }
	
};




int main()
{
	string name;
	int roll;
	int C1, C2, C3;



	cout << "This program is for student details" << endl;
	cout << "Enter student name" << endl;
	cin >> name;
	cout << "Enter your roll number" << endl;
	cin >> roll;
	cout << "Enter your three courses" << endl;
	cin >> C1 >> C2 >> C3;
	Student std(roll, name, C1, C2, C3);
	cout << "The total of the student is " << std.total() << endl;
	cout << "The Grade of the student is " << std.Grade() << endl;
	return 0;
	system ("PAUSE");
   }  