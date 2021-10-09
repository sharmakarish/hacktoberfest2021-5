#include<stdio.h>
int main(){
int option,dob,z,day,month,fortune_cookie;
char str1[10] , c,ans,C;
char colour;
    /*printf("\n\n\t\t\t\t\t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
printf("\n\t\t\t\t\t\t\t\t\t fortune trio !\n\n");
    printf("\t\t\t\t\t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");*/
   system("cls");
   printf("                    ***WELCOME TO THE GAME***\n\n");
printf("              *\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd*\n");
printf("              *\t\t\t\t\t     *\n");
printf("              *             Fortune Trio             *\n");
printf("              *\t\t\t\t\t     *\n");
printf("              *\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd*\n");
printf(" About the game:-\n");
printf("\nSo as the name tells ,this game consists of three games :\n 1. Zodiac Teller \n 2. Fortune Cookie \n 3. Personality Traits ");
printf("\n\n#INSTRUCTIONS: \n");
printf("\n|| %c In Zodiac teller you are supposed to enter your birth date and month number .\n   For ex- 7  in date and 3 in month says 7 march ,your zodiac will be displayed according to it .\n",2);
printf("\n|| %c In Fortune cookie you are supposed to enter your favourite number between 0 to 10 , the screen will display you a sweet message showing your fortune.\n ",2);
printf("\n|| %c In Personality traits , you are required to enter a colour from given options , then according to that color it will display your about your personality.\n",2);

printf("\nEnter your name : \t");
scanf("%s",str1);
system("cls");
printf("\n\n\n\n\n\n\n\n \t\t\t\t\t\t\t********************************************************\n");
printf(" \t\t\t\t\t\t\t*                                                      *\n");
printf(" \t\t\t\t\t\t\t*                                                      *\n");
printf(" \t\t\t\t\t\t\t*          Here we go!!!!!!!!!!!%c                      *\n",2);
printf(" \t\t\t\t\t\t\t*                                                      *\n");
printf(" \t\t\t\t\t\t\t*                                                      *\n");
printf(" \t\t\t\t\t\t\t*           press enter to continue...                 *\n");
printf(" \t\t\t\t\t\t\t*                                                      *\n");
printf(" \t\t\t\t\t\t\t*                                                      *\n");
printf(" \t\t\t\t\t\t\t********************************************************");


do{
        getch();
        system("cls");
printf("\n\nEnter the number of what you want to know : \n");
printf("\n press 1 -  to know your zodiac sign\n");
printf("\n press 2 -  future prediction\n");
printf("\n press 3 -  personality traits\n");
printf("\n press 4 -  to go back to home page\n");
scanf("%d",&option);
switch(option){
	//case 4:
		//enterfun_zone();
		//break;
case 1:
        printf("Enter birth day\n");
             scanf("%d",&day);
        printf("enter birth month\n");
             scanf("%d", &month);
    if(month > 12 && month < 0 || day > 31 && day < 1 )  {
          printf("invalid month and day\n"); }
    else if(month == 10 && day>=23||month == 11 && day<=21)
          {
               printf("\nYour zodiac sign is scorpion and your birthstone is topaz\n");
               printf("Scorpio is one of the most misunderstood signs of the zodiac.\n Because of its incredible passion and power, Scorpio is often mistaken for a fire sign.\n In fact, Scorpio is a water sign that derives its strength from the psychic, emotional realm.\n");}
       else if(month == 9  && day >=23 || month == 10 && day <= 22)
           {
               printf("\nYour zodiac sign is libra and your birthstone is opal\n");
               printf("Libra is an air sign represented by the scales (interestingly, the only inanimate object of the zodiac), an association that reflects Libra's fixation on balance and harmony.\n Libra is obsessed with symmetry and strives to create equilibrium in all areas of life. \n");
          }
       else if(month == 8  && day >=23 || month == 9  && day <= 22)
          {
               printf("\nYour zodiac sign is virgo and your birthstone is sapphire\n");
               printf("Virgo is an earth sign historically represented by the goddess of wheat and agriculture, an association that speaks to Virgo’s deep-rooted presence in the material world.\n Virgos are logical, practical, and systematic in their approach to life.\n This earth sign is a perfectionist at heart and isn’t afraid to improve skills through diligent and consistent practice.\n");
         }
       else if(month == 7  && day >=23 || month == 8  && day <= 22)
          {
               printf("\nYour zodiac sign is leo and your birthstone is peridot\n");
               printf("Roll out the red carpet because Leo has arrived.\n Leo is represented by the lion and these spirited fire signs are the kings and queens of the celestial jungle.\n They’re delighted to embrace their royal status: Vivacious, theatrical, and passionate, Leos love to bask in the spotlight and celebrate themselves\n");
          }
       else if(month == 6  && day >=21 || month == 7  && day <= 22)
          {
          printf("\nYour zodiac sign is cancer and your birthstone is ruby\n");
          printf("Cancer is a cardinal water sign.\n Represented by the crab, this crustacean seamlessly weaves between the sea and shore representing Cancer’s ability to exist in both emotional and material realms.\n Cancers are highly intuitive and their psychic abilities manifest in tangible spaces: \nFor instance, Cancers can effortlessly pick up the energies in a room.\n");
          }
       else if(month == 5  && day >=21 || month == 6  && day <= 20)
          {
          printf("\nYour zodiac sign is gemini and your birthstone is pearl\n");
          printf("Have you ever been so busy that you wished you could clone yourself just to get everything done? That’s the Gemini experience in a nutshell. Appropriately symbolized by the celestial twins, this air sign was interested in so many pursuits that it had to double itself.\n");
          }
       else if(month == 4  && day >=20 || month == 5  && day <= 20)
          {
          printf("\nYour zodiac sign is taurus and your birthstone is emerald\n");
          printf("Taurus is an earth sign represented by the bull.\n Like their celestial spirit animal, Taureans enjoy relaxing in serene, bucolic environments surrounded by soft sounds, soothing aromas, and succulent flavors.\n");
          }
       else if(month == 3  && day >=21 || month == 4  && day <= 19)
          {
          printf("\nYour zodiac sign is aries and your birthstone is aries\n");
          printf("Aries loves to be number one, so it’s no surprise that these audacious rams are the first sign of the zodiac. \nBold and ambitious, Aries dives headfirst into even the most challenging situations.\n");
          }
      else if(month == 2  && day >=19 || month == 3  && day <= 20)
          {
          printf("\nYour zodiac sign is pisces and your birthstone is aquamarine\n");
          printf("Pisces characters are regarded for being among the most sympathetic of the zodiac signs, and they will go to great lengths to ensure the happiness of those around them.\n They're also creative and imaginative.\n Pisces are sympathetic and sensitive to others' feelings.\n");
          }
       else if(month == 1  && day >=20 || month == 2  && day <= 18)
          {
          printf("\nYour zodiac sign is Aquarius and your birthstone is amethyst\n");
          printf("Despite the \"aqua\" in its name, Aquarius is actually the last air sign of the zodiac.\n Aquarius is represented by the water bearer, the mystical healer who bestows water, or life, upon the land.\n Accordingly, Aquarius is the most humanitarian astrological sign.\n");
          }
      else if(month == 12 && day >=22 || month == 1  && day <= 19)
          {
          printf("\nYour zodiac sign is Capricorn and your birthstone is garnet\n");
          printf("The last earth sign of the zodiac, Capricorn is represented by the sea goat, a mythological creature with the body of a goat and the tail of a fish.\n Accordingly, Capricorns are skilled at navigating both the material and emotional realms.\n");
          }
      else if(month == 11 && day >=22 || month == 12 && day <= 21)
          {
          printf("\nYour zodiac sign is saggitarius and your birthstone is turquoise\n");
          printf("Represented by the archer, Sagittarians are always on a quest for knowledge.\n The last fire sign of the zodiac, Sagittarius launches its many pursuits like blazing arrows, chasing after geographical, intellectual, and spiritual adventures.\n");
          }
else
 printf("\nERROR");
break;
case 2:
 // system("cls");
    printf("\n\nTaddahhh!! welcome to mystry world ! there's something special for you %c%c \n\n",1,3);
    printf("Enter your lucky number from 1 to 10 to know about your future:\n");
    scanf("%d",&fortune_cookie);
      if(fortune_cookie ==1){
          printf("you will get old, lonely and have 3 cats named Buddy, Jim, and Fernando.That's sad!\n\n");}
      else if(fortune_cookie ==2){
          printf("you will move to paris after you get married. You will have three kids, two boys, and one girl, and you will have a golden retriever. Amazing! I guess it's happy ever after%c ", 3); }
      else if(fortune_cookie == 3){
          printf("you will not be very wealthy but with a steady job. You will be married and have no kids. You will live in suburban village in connecticut. What can I say more...\n\n");}
      else if(fortune_cookie == 4){
          printf("The picture is getting clearer....OK, I see it! You will be a millionaire. You will make $1,000,000 a year or more. You will live in a mansion of about 9,000 square feet. You will have three kids. Your cars will be a Range Rover, a Lamborghini and an Aston Martin. You will die at age 60 from smoking and drinking too much.\n\nOh my god, my crazy crystal ball shatters, Scotty beam me up.\n\nDon't like what my crazy crystal ball foretold for you?\n\nNo worries! This was just for fun. YOU CONTROL\n\nYOUR FUTURE! So make the most of it! Good luck!%c\n\n",2);}
      else if(fortune_cookie ==5){
          printf("Everything has finally fallen into place and you will get to adopt a pet to keep you company! It may not be the pet of your dreams in the beginning, but you'll quickly realize how important its role is in your life.\n\n");}
      else if(fortune_cookie == 6){
          printf("If you haven't already, you will find your Charming and live in a beautiful and magical world of flower petals, bunnies, and cupcakes. Almost everything will work out for you. Together you will slay any obstacles that arise!\n\n");}
      else if(fortune_cookie == 7){
          printf("You will be vampire soon. It's all just star to make some distance from your loved ones...you are dangerous for them.\n\n");}
      else if(fortune_cookie == 8){
          printf("you will get a lottery of 1 billion rupee..and from that money you will open a software company and will marry to a daughter of richest man of world....That's quite intresting.%c\n\n",2);}
      else if(fortune_cookie == 9){
          printf("you are a dog lover and you will adopt 10 different breed dogs...and your life will be going so happily with all these cute dogs.That's great..%c\n\n ", 1);}
      else if(fortune_cookie == 10){
          printf("You will become an politician in future.....and do the great changes for the welfare for your country...you will become the unforgettable politician for your country that's really good.%c \n\n", 1);}
       break;


case 3:
  while(colour<=5){
    	system("cls");
		printf("CHOOSE YOUR FAVOURITE COLOUR FROM BELOW OPTIONS:\n");
		printf("1. BLACK\n");
		printf("2. RED\n");
		printf("3. YELLOW \n");
	    printf("4. PINK \n");
	    printf("5. PURPLE\n");
	    printf("6. exit\n\n");
		printf("enter your favourite colour to know your personality traits\n or press 6 to exit%c : ",1);
		scanf("%d", &colour);
	    system("cls");
    switch(colour){
    	case 1:
    		black();
    		break;
    		case 2:
    			red();
    			break;
    			case 3:
    				yellow();
    				break;
    				case 4:
    					pink();
    					break;
    					case 5:
    						purple();
    						break;

    						default:
    							printf("THANK YOU%c...!\nHope you enjoyed it...%c",3,2);
}
}
}
printf("\t\t\nPress C to continue.... \n or \n\n\t\tPress any Key To Exit\n");

scanf("%c",&c);
getch();
}
while(ans == 'c','C');

  return 0;
}
int black(){
system("cls");
        printf("BLACK\n\nBlack can mean so many different things: boldness, uniqueness, mystery, intrigue, and power. But it can also mean unhappiness, darkness, sadness, pain, or grief. Black is associated with death and mourning, but can also be associated with strength, luxury, and intensity.\n\n");
        printf("Personality traits of black:\n\nBold\nRisk-taker\nPerhaps a little impulsive at times\nSerious \(maybe a little too serious)\n You are strong and command a sense of respect from your peers\nYou are trustworthy\nPerhaps a little intimidating\n");
      getch();
      return 0;
   }

   int red(){
            printf("RED \n\nRed is a bold color choice that's been associated with excitement, passion, danger, thrill, energy, and action. \nYou may notice that some brands use red for their \"call to action\" buttons (\"order now,\" \"shop now\" etc.). This is because red is an intense color that is able to provoke strong emotions which can encourage you to buy things.\nPersonality traits of red:\nBold\nThrill-seeker\nAdventure-lover\nCan be a little impulsive\ncan be perceived as intimidating\n");
      getch();
	   return 0;
        }

    int yellow(){
           printf("YELLOW\n\nHappiness, positivity, and warm summer sun is what yellow reminds us of. Brands may use a splash of yellow in their logo to make you feel happy when you see their products. Many \"free shipping\" icons on websites may be yellow to attract you to something that is cheerful and positive.\n");
           printf("\nPersonality traits of yellow:\nA positive spirit\nOptimistic\nCheerful\nAdventurous\nCalming for those around them\nInfectious smiles and happiness that spreads to each person they encounter\n");
     getch();
	  return 0;
      }

   int pink(){
           printf("PINK\n\nPink is often associated with femininity, playfulness, and love, but pink can also be perceived as a somewhat immature color. You will notice a lot of pink in a child's toy packaging or brands to signal playful, whimsical fun. Other brands (Victoria Secret for example) have signified the color to mean something cute, fun, playful\n");
           printf("\nPersonality traits of pink:\nFun\nPlayful\nMaybe a little naive\nYou wear your heart on your sleeve and aren't afraid to express your emotions\nLove and family are important to you\n");
         getch();
		 return 0;
          }

  int purple(){
          printf("PURPLE\n\nPurple can be connected to royalty, power, privilege, wisdom, and spirituality. Purple can be something of a frustrating color as well, as it can cause feelings of frustration or be perceived as arrogant - this is why websites and brands (Hallmark, Yahoo) will use a splash of purple or mix purple with a warmer tone such as white.\n");
          printf("\nPersonality traits of purple:\n\nQuick-witted\nCraves own identity\nLoves unique things and wants to stand out from the pack\nDances to the music no one else can hear\nYou thrive on creativity and inspiration strikes you randomly, allowing you to tune out the world and focus on it\n");
 getch();
  return 0;
   }
