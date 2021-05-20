#include "hearde.h"

int main(void)
{
   time_t tiempo = time(0);
   struct tm *tlocal = localtime(&tiempo);
    printf("\tToday is %2d/%2d/%d", tlocal->tm_mday,tlocal->tm_mon+1,tlocal->tm_year+1900);
    printf("\n\tIt is %d:%d:%2d",tlocal->tm_hour+1,tlocal->tm_min,tlocal->tm_sec); 
    
   int 
      nChoice = 0;
 
   do
   {
      nChoice = BookMenu ();
      switch (nChoice)
      {
         case 1:
         {
            ShowGarciaMenu ();            
         }
         break;
 
         case 2: 
         {
            ShowDashnerMenu ();
         }
         break;
         
         case 3:
         {
		   ShowCoelhoMenu ();
		 }
          break;
          
        case 4:
        	{
        	 ShowChapmanMenu ();
			}
		break;
		
         case 5: 
         {
            printf ("Bye Bye\n\n");
         }
         break;
      }
   }
   while (nChoice != 5);
   system ("Pause");
   return 0;
} 
int BookMenu ()
{
   int 
      nSelected = 0;
 
   do
   {
      printf ("\nWhat do you want to read today?\n");
      printf ("You can choose a number to select you book\n\n");
 
      printf ("(1) One Hundred Years of Solitude\n(2) The Maze Runner\n(3) The Alchemist\n(4) Things I Wish I Would Known Before We Got Married\n(5) Quit\n");
      printf ("Enter a number that corresponds to your choice > ");
      scanf ("%d", &nSelected);
      printf("\n");
 
      if (( nSelected < 1 ) || ( nSelected > 5))
      {
         printf("You have entered an invalid choice. Please try again\n\n\n");
      }
   }
   while (( nSelected < 1) || ( nSelected > 3));
 
   return nSelected;
}
int ShowGarciaMenu ()
{   
   int 
      nChoice = 0;   
   do
   {
      nChoice = ShowGarciaSubMenu();
      switch (nChoice)
      {
 
         case 1:
         {
            PrintOverviewG ();
         }
         break;
 
         case 2: 
         {
            PrintPagesG ();
         }
         break;
 
         case 3: 
         {
            PrintCheckItG ();
         }
         break;
 
         case 4: 
         {
            printf ("Bye!\n\n");
         }
         break;
      }
   }
   while (nChoice != 4);
 
   return nChoice;
}
 int ShowGarciaSubMenu() 
{
   int 
      nSelected = 0;
 
   do
   {
 
      printf ("(1) Overview\n(2) Pages\n(3) Check It\n(4) Quit\n\n");
 
      printf ("Enter a number that corresponds to your choice > ");
      scanf ("%d", &nSelected);
      printf("\n");
 
      if (( nSelected < 1 ) || ( nSelected > 4))
      {
         printf("You have entered an invalid choice.Try again\n\n\n");
      }
   }
   while (( nSelected < 1) || ( nSelected > 4));
 
   return nSelected;
}
 int ShowDashnerMenu ()
{
   int 
      nChoice = 0;
 
   do
   {
      nChoice = ShowDashnerSubMenu ();
      switch (nChoice)
      {
         case 1:
         { 
            PrintOverviewD ();
         }
         break;
 
         case 2:
         { 
            PrintPagesD ();
         }
         break;
 
         case 3:          
         {             
            PrintCheckItD ();
         }
         break;
 
         case 4:
         { 
            printf ("See ya!\n\n");
         }
         break;
      }
   }
   while (nChoice != 4);
 
   return nChoice;
}
 int ShowDashnerSubMenu ()
{
   int 
      nSelected = 0;
 
   do
   {
 
      printf ("(1) Overview\n(2) Pages\n(3) Check It\n(4) Quit\n\n");
 
      printf ("Enter a number that corresponds to your choice > ");
      scanf ("%d", &nSelected);
      printf("\n");
 
      if (( nSelected < 1 ) || ( nSelected > 4))
      {
         printf("You have entered an invalid choice. Please try again\n\n\n");
      }
   }
   while (( nSelected < 1) || ( nSelected > 4));
 
   return nSelected;
}
 int ShowCoelhoMenu ()
  {int 
      nChoice = 0;
 
   do
   {
      nChoice = ShowCoelhoSubMenu ();
      switch (nChoice)
      {
         case 1:
         { 
            PrintOverviewC ();
         }
         break;
 
         case 2:
         { 
            PrintPagesC ();
         }
         break;
 
         case 3:          
         {             
            PrintCheckItC ();
         }
         break;
 
         case 4:
         { 
            printf ("See ya!\n\n");
         }
         break;
      }
   }
   while (nChoice != 4);
 
   return nChoice;
   } 
 int ShowCoelhoSubMenu ()
 {int 
 nSelected = 0;
	 
	 do
	 {
	  printf ("(1) Overview\n(2) Pages\n(3) Check It\n(4) Quit\n\n");
 
      printf ("Enter a number that corresponds to your choice > ");
      scanf ("%d", &nSelected);
      printf("\n");
	  
	  if ((nSelected < 1) | (nSelected > 4));
	 	{
	 		printf("You have entered an invalid choice. Please try again\n\n\n");
		 }
	 }
	 while ((nSelected < 1) | (nSelected > 4));
	 
	 return nSelected;
 }
 int ShowChapmanMenu ()
{   
   int 
      nChoice = 0;   
   do
   {
      nChoice = ShowChapmanSubMenu();
      switch (nChoice)
      {
 
         case 1:
         {
            PrintOverviewCh ();
         }
         break;
 
         case 2: 
         {
            PrintPagesCh ();
         }
         break;
 
         case 3: 
         {
            PrintCheckItCh ();
         }
         break;
 
         case 4: 
         {
            printf ("Bye!\n\n");
         }
         break;
      }
   }
   while (nChoice != 4);
 
   return nChoice;
}
int ShowChapmanSubMenu ()
{ int 
 nSelected = 0;
	 
	 do
	 {
	  printf ("(1) Overview\n(2) Pages\n(3) Check It\n(4) Quit\n\n");
 
      printf ("Enter a number that corresponds to your choice > ");
      scanf ("%d", &nSelected);
      printf("\n");
	  
	  if ((nSelected < 1) | (nSelected > 4));
	 	{
	 		printf("You have entered an invalid choice. Please try again\n\n\n");
		 }
	 }
	 while ((nSelected < 1) | (nSelected > 4));
	 
	 return nSelected;
}
 void PrintOverviewG ()
{
   printf("One Hundred Years of Solitude is the history of the isolated town of Macondo and of the family who founds it, the Buendías.\nFor years, the town has no contact with the outside world, except for gypsies who occasionally visit, peddling technologies\nlike ice and telescopes. The patriarch of the family, José Arcadio Buendía, is impulsive and inquisitive. He remains a leader\nwho is also deeply solitary, alienating himself from other men in his obsessive investigations into mysterious matters.\n\n\n");
}
 
void PrintPagesG ()
{
   printf("417 pages.\n\n\n");
}
 
void PrintCheckItG()
{
   printf("https://www.amazon.com/Hundred-Solitude-Harper-Perennial-Classics/dp/0060883286\n\n\n");
}
 void PrintOverviewD ()
{
   printf("In the dark of an elevator, a teenaged boy awakes with no memories other than that his name is Thomas.\nWhen the elevator comes to a halt, the doors open and Thomas finds himself surrounded by around fifty teenaged boys.\nTheir leader, a boy in his late-teens named Alby, welcomes him to the Glade. Surrounded by extremely high stone walls\ncovered in thick ivy, the Glade is a large square piece of land with a few wood and concrete buildings. In each of the\nsurrounding four walls, there is a narrow opening.\n\n\n");
}
 void PrintPagesD ()
{
   printf("375 pages.\n\n\n");
} 
void PrintCheckItD ()
{
   printf("https://www.amazon.com.mx/Maze-Runner-Book-One/dp/0385737955/ref=asc_df_0385737955/?tag=gledskshopmx-20&linkCode=df0&hvadid=295447050851&hvpos=&hvnetw=g&hvrand=11820494635515857442&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=1010154&hvtargid=pla-435234667411&psc=1\n\n\n");
   
}
 void PrintOverviewC ()
{
 	printf("A recurring dream troubles Santiago, a young and adventurous Andalusian shepherd. He has the dream every time he sleeps under a sycamore tree that grows out of the ruins of a church. During the dream, a child tells him to seek treasure at the foot of the Egyptian pyramids. Santiago consults a gypsy woman to interpret the dream, and to his surprise she tells him to go to Egypt. A strange, magical old man named Melchizedek, who claims to be the King of Salem, echoes the gypsy’s advice and tells Santiago that it is his Personal Legend to journey to the pyramids.\n\n\n");
}
 void PrintPagesC ()
{
 	printf("197 pages\n\n\n");
}
 void PrintCheckItC()
{
	printf("https://www.amazon.com/Alchemist-Paulo-Coelho/dp/0061122416\n\n\n");
}
 void PrintOverviewCh ()
{
	printf("Even though everyone who gets married is hoping for a life of happiness, the divorce rate hovers around fifty percent. However, a truly happy, enduring marriage is still possible. Bestselling author and marriage counselor, Dr. Gary Chapman, with more than 40 years of counseling couples, believes that divorce results from the lack of preparation for marriage and the failure to learn to work together as intimate teammates. The practical, eye-opening book is packed with wisdom and tips to develop a loving, supportive, and mutually beneficial marriage. It’s the type of information Gary himself wished he had before he got married.\n\n\n");
}
 void PrintPagesCh()
{
	printf("176 pages\n\n\n");
}
 void PrintCheckItCh ()
{
	printf("https://www.amazon.com/Things-Wish-Known-Before-Married/dp/0802481833\n\n\n");
}
