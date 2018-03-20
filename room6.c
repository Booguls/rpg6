//Kevin Ramirez
//CSC 251-01
//3/19/2018

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int select;
	puts("You enter the room and close the door to prevent the water from flowing in. Looking around you find a well at the center with no rope, sealed crates at the corner of the room, a locked door at the other side, a crack in the wall, and a pile of clothes next to the well. What would you like to investigate?\n1. The well\n2. The crates\n3. The door\n4. The crack\n5. The clothes");
	scanf("%d",&select);
	while(select != 5) {		
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
			default:
				puts("That is not a valid place to investigate, please enter 1-5.");
				scanf("%d",&select);
				break;
		}
	}
	
	puts("You find a small chisel and hammer within the clothes. Perhaps this person was a carpenter. You decided to take them.");
	puts("With your newly acquired hammer and chisel, you think of some ideas on how to use the hammer and chisel. What would you like to use the hammer and chisel on?\n1. The well\n2. The crates\n3. The door\n4. The crack");
	scanf("%d",&select);
	while(select != 4) {
		switch(select) {
			case 1:
				puts("You use the hammer and chisel on the well and broke the well, causing it to collapse in on itself. That did not go so WELL, You lose.");
				return 0;
			case 2:
				puts("You use the crates but it does nothing more than give you splinters.\nWhat would you like to use the hammer and chisel on?");
				scanf("%d",&select);
				break;
			case 3:
				puts("You use the hammer and chisel on the door and it does not work.\nWhat would you like to use the hammer and chisel on?");
				scanf("%d",&select);
				break;
			case 5:
				puts("Despite not listing the clothes as an option, you decided to be a rebel and use the hammer and chisel on the pile of clothes anyway. You somehow tear the clothes using the hammer and chisel and found a key embedded into the clothes. You use the key on the locked door and discovered it worked! You escaped!");
				return EXIT_SUCCESS;
		}
	}

	puts("You use the hammer and chisel on the crack, creating a bigger hole that allows your arm to fit through. You reach inside and retrieved an old lockpick. What would you like to use the lockpick on?\n1. The well\n2. The crates\n3. The door");
	scanf("%d",&select);
	while(select != 2) {
		switch(select) {
			case 1:
				puts("Moving closer to the well you stumbled and drop the lockpick into the well. Without the lockpick you cannot leave. LOCKS like you PICKED a bad time to be clumsy. You lose.");
				return 0;
			case 3:
				puts("You attempted to pick the lock on the door but to no avail. What would you like to use the lockpick on?");
				scanf("%d",&select);
				break;
		}
	}

	puts("You move closer to the crates and see 3 crates with certain distinctions. Crate 1 is quiet and new with a string wrapped around the lid. Crate 2 is fairly old and dusty, littered with claw marks all around the crate. Crate 3 is shorter than the first two and appears to be stuck to the ground. What would you like to use the lockpick on?\n1. Crate 1\n2. Crate 2\n3. Crate 3");
	scanf("%d",&select);
	while(select != 2) {
		switch(select) {
			case 1:
				puts("You pick the lock for the first crate and discovered a bomb! By opening the crate you set off a bomb and exploded. Isn't that just CRATE. You lose.");
				return 0;
			case 3:
				puts("You picked the lock for the third crate and found nothing. It turned out to be an unimpressive find. What would you like to use the lockpick on?");
				scanf("%d",&select);
				break;
		} 
	}
	
	puts("You decided to pick the lock on the second crate and discovered that the creature which created the claw marks had long since passed. Lying next to the creature is more rope that could physically fit in the crate. As bizarre as that seems you decided to take the rope.\n");
	puts("With the newly acquired rope you go to the well and decided to retrieve the shiny object at the bottom. What would you like to do?\n1. Tie the rope around the well's wooden beam and climb down\n2. Lasso the object using the long piece of rope\n3. Look around for alternatives");
	scanf("%d",&select);
	int select2;
	while(select != 3) {
		switch(select) {
			case 1:
				puts("You tie the rope around the wooden beam and tug it to ensure a stable descent. It appears to be stable. Descend?\n1. Yes\n2. No");
				scanf("%d",&select2);
				switch(select2) {
					case 1:
						puts("You climb into the well and descend slowly and steadily. All goes well until you misplace your footing and slip, causing you to fall and snapping the rope. Looks like that went down in a SNAP. You lose.");
						return 0;
					case 2:
						puts("You untie the rope and decided against climbing down. What would you like to do?\n1. Tie the rope and climb\n2. Lasso the object\n3. Look around for alternatives");
						scanf("%d",&select);
						break;
				}
			case 2:
				puts("You tie one end of the rope in a particular shape in order to scoop up the shiny object. It does not quite work. What would you like to do?");
				scanf("%d",&select);
				break;
		}
	}
	
	puts("You decided to look around the room once more and discover a convenient bucket within the sealed up closet. With this you are sure you can retrieve the object. What will you use to retrieve the bucket?\n1. Hammer and chisel\n2. Lockpick\n3. Rope");
	scanf("%d",&select);
	while(select != 3) {
		switch(select) {
			case 1:
				puts("You attempt to use the hammer and chisel to widen the hole, but end up collapsing the wall on yourself. It seems like your future COLLAPSED around you. You lose.");
				return 0;
			case 2:
				puts("I know you can do better than that, try something else.");
				scanf("%d",&select);
				break;
		}
	}
	puts("You decided to use the rope and managed to sling the rope around the bucket somehow. You tug it towards you until you retrieved the bucket. Once retrieved, you tie the rope around the bucket's handle and lower it into the well. Steadily and nimbly, you scoop the shiny object into the bucket and pull it upwards. The object was a key! You used the key on the door and escaped! You win!");
	return EXIT_SUCCESS;
}
