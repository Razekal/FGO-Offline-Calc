#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Self contained application to track material, QP, and Ember needs for Fate Grand Order.
Embers: Onclass Gold = 1.2, Onclass silver = .4 offclass gold = 1, offclass silver = .333
QP measured in 100k increments.
Materials divided into: Bronze - Silver - Gold - Blue Gem - Red Gem - Gold Gem - Ascension - Special (Grail/Lore/Event Ascension mats)

Program usage:
Greets user: Welcomes user and prompts them on what they want to do.
Options: View Servant List, Edit Servant List, View Materials, Edit Materials, View and Edit QP, View and Edit Embers, Save list to file, Exit program.
Note: Will need a reference file to read to load older list.
*/


void greetings(){
	char menuChoice[5] = {'\0'};
	int i = 0;
	printf("[Load] List or [New] List?\n");
	fgets(menuChoice, 5, stdin);
	fflush(stdin);
	for (i = 0; menuChoice[i]; i++){
		menuChoice[i] = tolower(menuChoice[i]);
	}
	if (strcmp(menuChoice, "load") == 0){
		printf("loadList();"); //Test line, remove for live version
//		loadList();
	} else if (strncmp(menuChoice, "new", 3) == 0){
		printf("newList();"); //Test line, remove for live version
//		newList();
	} else if (strcmp(menuChoice, "exit") == 0){
		exit(0);
	} else {
		greetings();
	}
	
}



void main(){
	printf("Raz's Fate Grand Order Shopping List:\n");
	greetings();
//	loadList();
//	menu();
}

