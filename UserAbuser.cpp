//User Abuser3.0 Antonio "SirBothersome Alberto - Text based game that insults the user
//Based off of  Mark Lee and Dirk Henkemans "Three tests of Honor"  game and their "Simple Menu"
#include <iostream>
#include <string>
//these are the asset libraries the code will use
int main( void ) //the main function
{
  using std::cout; //displays text
  using std::cin; //inputs text
  using std::string; //stores text
  using namespace std; //I forget what this is for
  string name = ""; //this will store a response for cout to show
  cout << "\n\n\n" //
   << "\nWilkomme to the twice User Abuser Laboratries!\n" //the \n adds a new line
       << "Ze logic loops are now even more annoying, zer will be tree choices,\n"
       << "So, vot ees your name?   ";

  cin >> name; //note the arrow directions of cin versions cout
  cout << "Hello my dear " << name.c_str() << "\n";
   beginning: //This is marks the starting point for the goto later in the program, note the colon
   cout    << "So een, ze first lab you are walking along,\n"
       << "Ven you are attacked by and angry banana veilding teddy bear!!!! \n";
  int response = 0;
//int creates a variable, in this case a response. 0 is assigned (I think) to prevent the logic loop from executing

do
  {
    cout << "Vot Action do you attempt? \n"
    << "Plez only enter noombers\n"
	 << " 1) Keel zat nasty teddy bear!!!! \n"
	 << " 2) Adress him een a civeel tone, zen hit heem vith a skillet. \n"
	 << " 3) Take hees banana!!!!\n "
	 << "4) qvit ze game\n";
    cin >> response;
  }
 while (response < 1 || response > 4);
//if the answer is within the parameters of the while loop, this is the choice of responses
//|| is in this instance and "or"
 if (response == 1)
//note that = assigns a value, == is C++ for "equals"
   {
     cout << "My dear  " << name.c_str() << "you can't keel a teddy bear \n"
	  << "Zat ees a terrible theeng to do, I mean \n"
	  << "How can you eeven do zat? Teddy bears are such usefull goon repellants\n"
	  << "You heard me right, I vas vonce attacked by a goon,\n"
	  << "I socked heem in ze face vith ze teddy bear, ze hard plasteek beet\n "
	  << "Hit him very hard, he vos doing ze veepity veepity like a leetle girl.\n"
	  << "Game Over.\n\n";
       goto beginning;
        }
 else if (response == 3)
   {
   cout << "Larceny ees not tolerated in ze User Abuser labs \n"
	<< "Tis the user ve bozer, not ze cute leetle teddy bears \n"
	<< "Who vould be so low as to steal from a teddy bear \n"
	<< "I mean besides  " << name.c_str() << "zey appear to be fine\n"
	<< "vith stealing from leetle furry theengs like teddy bears\n"
	<< "Game Over.\n\n";
	goto beginning;

}
else if (response == 4)
{return 0;
}
 else
//if the other conditions in a logic loop are not true the else //loop is executed
   {
     cout << "Very vise, as you vell remember, probably, ze skillet ees \n"
	  << "an excellent tool for eencapeetation"
	  << "congrats. Een ze next room you see a dancing flamingo \n"
	  << "Suddenly you find a book in your hands and ze flamingo bows its head ";
     int response2 = 0;
do
  {
    cout << "Vot action do you take?\n"
	 << " 1) Bash ze dancing Famingo, it vos shaking its boom at me!\n"
	 << " 2) Read ze contents of ze book to ze flamingo\n"
	 << " 3) Nutink \n";
    cin >> response2;
  }
 while (response2 < 1 || response2 > 3);
 if (response2 == 2)
   {
     cout << "Maybe you do not know  " << name.c_str() << "zat flamingos *hate* books\n"
	  << "If you attempt to read to zem they vill attempt to keek you\n"
	  << "in a most unfortunate area. Zen, ven you are bent over\n"
	  << "zey keek you een head. I vonce saw zis happen to a\n"
	  << "highly experienced Shakeyspearean dude \n"
	  << "I teenk he tought zat ze flameengo vos dissing Shakeyspeare\n"
	  << "So he read even louder to ze flameengo, I vill not \n"
	  << "divoolge any further details.\nGame Over.\n\n.";
	  goto beginning;
   }
 else if (response2 == 3)
   {
     cout << "I vouldn't call you naive  " << name.c_str() << "but zis parteekular\n"
	  << "flameengo vos carrying a highly dangerous veapon called a \n"
	  << "florpenskook, zis veapon causes high pitched screaming from peekles\n"
	  << "eef I remember correktly, you vere turned into a peekle vonce\n"
	  << "so, vhile you might not emit screams, you vill feel like\n"
	  << "suptink is eating your head. Zis ees because ze florpenskook\n"
	  << "makes ze victim feel like a peeckle, vich ees vy ze peekles scream\n"
	  << "zey know of their impendeeng doom, your head repreesents ze part \n"
          << "of ze peekle getting eaten. Vell? Do you feel it?\n"
	  << "You probably don't because I vos making dat all up.\n"
	  << "Game Over.\n\n";
	  goto beginning;
   }


else // Remember to enclose each 'else' statement (}) at the
//*end* of the program
   {
     cout << "Vonce again you have proven you breelliance to ze vorld\n"
	  << "Yes, ze folks are like  " << name.c_str() << "ees smaaaaaart.\n"
	  << "Of course I already knew zat, by now you're probably vondering\n"
	  << "eef I am a vampire, ze answer is, sort of, I vonce vos a minion to ze\n"
	  << "great vampire Kenchman, I vos his dentist, he vos a smaaaart person.\n"
	  << "Von day ven I vos attendink to his teeth, he bit me\n"
	  << "and he vos like 'Oh, I vasn't trying to do that, let me make it up to you.'\n"
	  << "So he took me to thees poob, but eenside, he vos attacked by a moonchking\n"
	  << "Ze moonchkin knocked all his toothys out, and mine. So, after ze brawl\n"
	  << "He said, 'My leetle feedly beets grow back, here, have my teeth.'\n"
	  << "Me, being Kenchmans Frenchman Henchman, could not refuse sooch an offer\n"
	  << "So, zat ees how I got zees lurverly toothys. I digress, in our next room\n"
	  << "ve have JahJa Bingz, Opi Van Kenobi, and Poodmeh Amydaly, each in danger\n";
     int response3 = 0;
do
  {
    cout  << "So? Who do ve save?\n\n"
          << "1) JarJarBinx\n"
	  << "2) Poodme Amydaly\n"
	  << "3) Obi Van Kenopi\n";
    cin >> response3;
      }
 while (response3 < 1 || response3 > 3);
 if (response3 == 2)
   {
cout     <<"You have just proven that you tink Jahja's ears \n"
         << "Make his boot look fat. And zat you like skinnybooted people\n"
	 << "Don't hate on ze fatbooted people.\n"
	 << "Game Over.\n.";
	 goto beginning;
  }
 else if (response3 == 3)
   {
     cout << "Now really, do you tink zat a Jeddy vould need help\n"
	  << "From eescapeeng from a deadly trap? Opi Van Kenopi ees probably\n"
	  << "telling ze Jeddy couceel zat  " << name.c_str() << " ees a beeg goon\n"
	  << "Game Over. ";
	  goto beginning;
   }

 else
   {
     cout << "Very good, ze goongan vould need a lot of help.\n"
	  << "zat ees because everyone loves ze preencess, and hates on ze goongans\n"
	  << "Without your help hees life vould have been meeserable\n"
	  << "Speaking of vich, my vonderful vampire client, who ees a very smaaaart\n"
	  << "person, has eexsperience on sooch a matter. Vonce he vos playing a piano\n"
	  << "een ze vampire equeevalent of Carnegie Hall, vith hees toes mind you, ven\n"
	  << "Jane Ulkovitz, ze lead tenor of ze poonk rock band 'Ze Dirty, Oogly, Nasty Hariballs\n"
	  << "Valked up and gave heem a teacup full of peat moss. And he vos like 'Oh, vy tank\n"
	  << "Jane Ulkvotiz, for dees lurverly teacup, even zough you make eet a point to make\n"
	  << "My life miserable. So zen he put ze teacup on ze piano he vos playing,\n"
	  << "and continued. Zat vos ven ze teacup started doing joomping jacks\n"
	  << "on ze piano, zen he vos like 'oh, Jane ulkovits of ze dirty,oogly\n"
          << "hairballs. you are making my life meeserable, you should go avay'.\n"
	  << "But enough of ze hair-raising anecdotes of Kenchman ze lurverly vampire\n"
	  << "Ze next Question concerns teacups. Eef you saw a Tanzanian een a vig\n"
	  << "drinking geenger ale een a teacup vile een ze ookefenooke svamp,";
     int response4 = 0;
do
  {
    cout << "Vot do you do? Do you...\n"
	 << "1) Say, 'Howdy Tanzanian guy een a vig drinking ginger ale!'?\n"
	 << "2) Sneak oop vith a boombox and start playing ze dirty oogly nasty hairballs?\n"
	 << "3) Geev heem a two-liter bottle of orange soda?\n";
    cin >> response4;
  }
 while (response4 < 1 || response4 > 3);
 if (response4 == 1)
   {
     cout << "My dear  " << name.c_str() << " Eesn't eet obvious\n"
	  << "Zat ze guy ees a Tanzanian een a vig etc.? I mean \n"
	  << "I said zat, didn't I? Eef you said sumptink zat painfooly obvious\n"
	  << "I tink he vould heet you vith a peekle.\n"
	  << "Ah peeckles, zey are so lurverly for heeting people vith\n"
	  << "Especially eef zeir really beeg vones, vouldn't you be happy\n"
	  << "Heeting a person saying obvious tings like 'Zis ees a Tanzanian een\n"
	  << "A vig drinking ginger ale in a teacoop, een a svamp'?\n"
	  << "Game Over.\n";
	  goto beginning;
   }
 else if (response4 == 2)
   {
     cout << "Eeven eef zis vos ze correct answer, I vould not avard it too you\n"
	  << "eef you remember, it vos zat band who gave ze teacoop to ze great\n"
	  << "and very smaaaaaart vampire, Kenchman. Besides, ze Tanzanian vould\n"
	  << "be a beet occupied drinking ginger ale een a teacup, vouldn't he?\n"
	  << "Game Over.";
   goto beginning;
   }

 else
   {
     cout << "Zat ees ze correct answer, nutink is more refreshing from\n"
	  << "drinking ginger ale in a teacup zen a two liter bottel of orange soda\n"
	  << "besides, I'm obsesses vith oranges, so zat vould be ze correct answer anyvay\n"
	  << "Deed you not notice zat? Do you know vy vampires are so hard to find?\n"
	  << "It ees because ve don't look een ze right places. For Example\n"
	  << "ze great vampire Kenchman has a blog, and an biography\n"
	  << "Ze blog ees at vvv.Kenchman.komm, ze biog ees a Vikipedia.\n"
	  << "See? If people thought like zem zey woulf find a lot more\n"
	  << "but enough about ze vampires. Let us move to ze fascinating soobject\n"
	  << "of Tarzan.\n\n";
     int response5 = 0;
do
  {
    cout << "Ven Tarzan vos een his prime vich of zese vos he?\n"
	 << "1) A park ranger?\n"
	 << "2) An electrician?\n"
	 << "3) An ice cream man?\n";
    cin >> response5;
  }
 while (response5 < 1 || response5 > 3);
 if (response5 == 1)
   {
     cout << "Vhile it is true zar he vos a park ranger, it vos not vhile een his prime\n"
	  << "He became a park ranger at ze age of 12, but vhen he vos een hees 'prime'\n"
	  << "he vos sumptink else. Sorry.\n\n";
	  goto beginning;
       }
 else if (response5 == 3)
   {
     cout << "Now vere de heg do you tink that Tarzan vould get an ice cream truck\n"
	  << "Ze local joongle icecream repo store? Of course not!!!!!!\n"
	  << "Dear  " << name.c_str() << " zere is no icecream repo store.\n"
	  << "zat vould never fly een ze joongle, vy not? Because it doesn't have vings\n"
	  << "Vot vere you tinking I vould say? Honh?\n\n";
	  goto beginning;
   }
 else
   {
     cout << "Congratulations, you have completed our test vith admirable results.\n"
	  << "Zat ees eef you didn't have to keep restarting.\n"
	  << "Eef zat vos ze result, vell, maybe you should talk to ze kung fu baboon.\n"
	  << "Yes, Tarzan vos an electrician een hees prime, but since zer vos no\n"
	  << "electricity een ze joongle he vos unemployed.";
	  cout << "Would you like to play again?\n";
	  int responsel = 0;
	  do
	  {
	     cout << "1) for Yes,\n"
	     << " 2) for No";
	     cin >> responsel;
	  }

	  while (responsel < 1 || responsel > 2 );
	  if (responsel == 1)
	  {
	     cout << "Very well\n";
	      goto beginning; //sends the player back to the beginning label.
	  }
	  else
	  {
	      cout << "Farewell  " << name.c_str() << ".";

	  }

   }
   }
   }
   }
   }


 return 0;
//terminates the program with a "safe" return value
}






