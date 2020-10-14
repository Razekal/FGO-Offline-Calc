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

Execution example: Ask for Servant (name or id), ask for CURRENT state (ascension -> Level -> skill 1 -> Skill 2 -> skill 3), ask for FINAL state (as before).
open Servant CSV, scan each line (columns 2-5 for ascensions, 6-14 for skills) and add materials to final list. 
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

const char * callItemName(int itemNumber){
	static char* itemNames[] = 
		{
			"Proof of Hero",
			"Evil Bone",
			"Dragon Fang",
			"Void\'s Dust",
			"Fool\'s Chain",
			"Deadly Poisonous Needle",
			"Mystic Spinal Fluid",
			"Stake of Wailing Night",
			"Mystic Gunpowder",
			"Seed of Yggdrasil",
			"Ghost Lantern",
			"Octuplet Crystals",
			"Serpent Jewel",
			"Phoenix Feather",
			"Eternal Gear",
			"Forbidden Page",
			"Homunculus Baby",
			"Meteor Horseshoe",
			"Great Knight Medal",
			"Shell of Reminiscence",
			"Refined Magatama",
			"Claw of Chaos",
			"Heart of the Foreign God",
			"Dragon\'s Reverse Scale",
			"Spirit Root",
			"Warhorse\'s Young Horn",
			"Tearstone of Blood",
			"Black Beast Grease",
			"Lamp of Evil-Sealing",
			"Scarab of Wisdom",
			"Primordial Lanugo",
			"Cursed Beast Gallstone",
			"Mysterious Divine Wine",
			"Saber Piece",
			"Saber Monument",
			"Archer Piece",
			"Archer Monument",
			"Lancer Piece",
			"Lancer Monument",
			"Rider Piece",
			"Rider Monument",
			"Caster Piece",
			"Caster Monument",
			"Assassin Piece ",
			"Assassin Monument",
			"Berserker Piece",
			"Berserker Monument",
			"Blue Gem Saber",
			"Blue Gem Archer",
			"Blue Gem Lancer",
			"Blue Gem Rider",
			"Blue Gem Caster",
			"Blue Gem Assassin",
			"Blue Gem Berserker",
			"Red Gem Saber",
			"Red Gem Archer",
			"Red Gem Lancer",
			"Red Gem Rider",
			"Red Gem Caster",
			"Red Gem Assassin",
			"Red Gem Berserker",
			"Yellow Gem Saber",
			"Yellow Gem Archer",
			"Yellow Gem Lancer",
			"Yellow Gem Rider",
			"Yellow Gem Caster",
			"Yellow Gem Assassin",
			"Yellow Gem Berserker",
			"QP",
			"Event Material"
			};
	int itemTotal[70] = {};
	return itemNames[itemNumber];
}

void main(){
	printf("Raz's Fate Grand Order Shopping List:\n");
	greetings();
//	loadList();
//	menu();
}

