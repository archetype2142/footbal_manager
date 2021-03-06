/* ==========FOOTBALL_NO_GRAPH===========
Requires GNU plot to render graphs, use
main4.cpp(or "football_no_graph") and check
results produced in "data.dat" file. This 
main file shows use of FanClubs and all it's 
different functionalities  */

#include <iostream>
#include "structure.h"
#include "backbone.h"
#include "graph.h"

using namespace std;

int main(int argc, char const *argv[]) {

	//--------Fanclubs---------//
	/* create a fanclub with arguments
	club name and club ID respectively*/
	FanClubs clubA("First Club", 55);
	/*Add a fan to club with arguments
	fan name, age and sex respectively*/
	clubA.addFans("Pinky", 18, 'f');
	clubA.addFans("Vilma", 19, 'm');
	clubA.addFans("Ritwick", 43, 'f');
	clubA.addFans("Prateek", 25, 'm');
	clubA.addFans("Max", 35, 'm');
	clubA.addFans("Abdu", 11, 'f');
	clubA.addFans("Master", 11, 'f');

	FanClubs clubB("Second Club", 51);
	clubB.addFans("Rocky", 22, 'f');
	clubB.addFans("Rahul", 31, 'f');
	clubB.addFans("Karina", 12, 'm');
	clubB.addFans("Kevin", 26, 'm');
	clubB.addFans("Lance", 62, 'f');

	FanClubs clubC("Third Club", 44);
	clubC.addFans("Link", 22, 'f');
	clubC.addFans("Rahul", 31, 'f');
	clubC.addFans("Karina", 12, 'm');
	clubC.addFans("Kevin", 26, 'm');
	clubC.addFans("Lance", 62, 'f');

	FanClubs clubD("Fourth Club", 45);
	clubD.addFans("Mario", 22, 'f');
	clubD.addFans("Wendy", 11, 'f');
	clubD.addFans("Jordan", 22, 'f');
	clubD.addFans("Karina", 12, 'f');
	clubD.addFans("Popoye", 72, 'm');
	clubD.addFans("Raul", 12, 'm');
	clubD.addFans("J", 12, 'm');
	clubD.addFans("Micheal", 12, 'm');
	clubD.addFans("Kevin", 26, 'm');
	clubD.addFans("Lance", 62, 'f');

	FanClubs clubP("pop", 78);
	clubA.showFans();
	clubB.showFans();
	clubD.showFans();

	graphCompare(clubA, clubC);
	//graphCompare(clubB, clubD);
	showgraph();

	
	return 0;
}
