#include "Loops.h"

#include <iostream>

using namespace std;

class LoopsThrough {

	/*
		Driver Code for this Class

		LoopsThrough hello = LoopsThrough();
		cout << "While loops" << endl;
		hello.whileLoopThroughDays();
		cout << "Do While loops" << endl;
		hello.doWhileLoopThroughDays();
	*/

	public:
		void whileLoopThroughDays(){
			int i = 0;
			string days[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
			while (i < 7)
			{
				cout << "The day is " << days[i] << endl;
				i++;
			}
		}

		void doWhileLoopThroughDays() {
			int i = 0;
			string days[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
			do {
				cout << "The day is " << days[i] << endl;
				i++;
			}
			while (i < 7);
			
		}

		void forLoop() {
			cout << "The loop is going to run after this";
			for (int index = 0; index <= 10; index++) {
				cout << index << endl;
			}
		}
};