//Kevin Ramirez
//CSC 251-01
//3/19/2018

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int items[3] = {0};
	int select;
	puts("You enter the room and close the door to prevent the water from flowing in. Looking around you find a well at the center with no rope, sealed crates at the corner of the room, a locked door at the other side, a crack in the wall, and a pile of clothes next to the well. What would you like to investigate?\n1. The well\n2. The crates\n3. The door\n4. The crack\n5. The clothes");
	scanf("%d",&select);
	while(select < 5 && select >= 1) {		
		switch(select) {
			case 1:
				puts("The well is made of stone and holds still water at the very bottom. You see a shiny object.\nWhere else would you like to investigate?");
				scanf("%d",&select);
				break;
			case 2:
				puts("The crates are shut tight and is impossible to open without a specific tool.\nWhere else would you like to investigate?");
				scanf("%d",&select);
				break;
			case 3: 
				puts("The door will not yield by brute force, you require a key to move forward.\nWhere else would you like to investigate?");
				scanf("%d",&select);
				break;
			case 4:
				puts("The crack has an opening just enough to view into a small closet. It seems like the closet was a part of the room.\nWhere else would you like to investigate?");
				scanf("%d",&select);
				break;
			case 5:
				puts("Viewing the clothes you find a small chisel in the pockets. You decide to take the chisel.");
				items[0] = 1;
				break;
		}
	}
}
