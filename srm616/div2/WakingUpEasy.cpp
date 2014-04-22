/*
	SRM 616: DIV 2: 250 pts: Easy

	Alex is sleeping soundly. At any moment, his sleepiness can be characterized by an integer. You are given an int S that represents Alex's initial sleepiness. 

	Unfortunately, several alarms are going to disturb him. These alarms will be ringing in a cyclic order. Each alarm is characterized by its volume. 

	You are given a list of alarm volumes in a vector <int> volume in the order in which the alarms are going to ring. Every minute the first alarm on the list rings, and Alex's sleepiness instantly decreases by its volume. The alarm is then moved to the end of the alarm list. 

	While Alex's sleepiness is positive, he's still sleeping. Once it becomes less than or equal to zero, Alex immediately wakes up. 

	Return the number of alarms after which Alex will wake up.
*/

#include <iostream>
#include <string>
#include <vector>

using std::vector;

class WakingUpEasy{

	//I decided to use the modulus operator to cycle through the alarms while decreasing the value of S.

	public:

	int countAlarms(vector<int> volume, int S)	{

		int i, number_of_alarms = volume.size();
    	for (i = 0; S > 0; i++) {
        	S -= volume[i % number_of_alarms];
    	}
    	return i;
	}
};