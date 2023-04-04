	#include <stdio.h>  
	#include <stdlib.h>  
    #include <time.h>
    #include <stdbool.h>
  void magic(int n);
	int main() 
		{
	 srand (time(0)); 

	char name[100];
	bool won;
 	bool unguessed = true;
	int count =0,x,userCount=0,n,y;
    FILE *fp;
    fp = fopen("Stats.txt","a+");
    printf("This is a random number generator and number guesser game. \n \n");
    printf("The Computer has generated a number between 1 to 100 \n \n");
    printf("Now you must guess the number correctly to win this game. \n \n");
    printf("After each guess you will be told if the number you guessed was greater or smaller than the correct number\n\n");
    printf("You will only be given seven(7) chances to guess the correct number or else you will  lose the game.\n \n");
	abc :
		 n = 1 + (rand() % 99);
		 y =n;
		
		 won = false;
		userCount++;
    printf("Please enter your name :");
//    fscanf(stdin,"%[^\n]",name);
    scanf("%s",name);
//		fgets(name,100,stdin);
     	fprintf(fp,"\nUser%d:-",userCount);
    	fprintf(fp,"\nName : %s",name);
        fprintf(fp,"\nGenerated Number : %d",y);
    

	    fflush(stdin);
		system("cls");
    printf("Hello %s!Go ahead enter a number from 1 to 100 and we will tell you if you guessed it correctly or not :\n",name);
    printf("Guess no.1--Enter the number :");
	while(unguessed){
	count+=1;	
	scanf("%d",&x);
	fprintf(fp,"\nGuess%d : %d",count,x);
    
    if(x==n) {won = true;
    	switch(count){
		case 1:	printf("Wow! Congratulations ,You have won the game in your first try!");
				printf("\nYour Outcome has been saved in a txt file named Stats.txt");
				break;
		case 2:	printf("Congratulations! You have won the game in your second try!");
				printf("\nYour Outcome has been saved in a txt file named Stats.txt");
				break;

		case 3:	printf("Congratulations! You have won the game in the third try!");
				printf("\nYour Outcome has been saved in a txt file named Stats.txt");
				break;

		case 4:	printf("Congratulations you have won the game . Number of guesses : %d",count);
				printf("\nYour Outcome has been saved in a txt file named Stats.txt");
				break;

		case 5:	printf("Congratulations you have won the game . Number of guesses : %d",count);
				printf("\nYour Outcome has been saved in a txt file named Stats.txt");
				break;

		case 6:	printf("Congratulations you have won the game . Number of guesses : %d",count);
				printf("\nYour Outcome has been saved in a txt file named Stats.txt");
				break;

		case 7:	printf("Congratulations you have won the game . Number of guesses : %d",count);
				printf("\nYour Outcome has been saved in a txt file named Stats.txt");
				break;


			}
		
		break;
		
	}
    else if(x>n) {
	if(count == 7){
		printf("\nOops thats 7 guesess! Game Over\n");
		printf("If you would like to see a magic trick to find out the correct number press 1 \n");
		printf("Else type 2 or any other key ");
		int trick;
		scanf("%d",&trick);
		if(trick==1){
			magic(y);
		}
		else {
		
		printf("The correct number was %d ",y);}
		printf("\nYour Outcome has been saved in a txt file named Stats.txt");

		break;}
		printf("Wrong Number! The correct number is smaller than your number. Try once again :\n");  
		    printf("Guess no.%d--Enter the number :",count+1);


	}
	else{
		if(count == 7){
		printf("\nOops thats 7 guesess! Game Over\n");
		printf("If you would like to see a magic trick to find out the correct number press 1 \n");
		printf("Else type 2 or any other key ");
		int trick;
		scanf("%d",&trick);
		if(trick==1){
			magic(y);
		}
		else {
		
		printf("The correct number was %d ",y);}
		printf("\nYour Outcome has been saved in a txt file named Stats.txt");

		break;}
		printf("Wrong Number! The correct number is greater than your number. Try once again :\n");  
		    printf("Guess no.%d--Enter the number :",count+1);

	
	
	}
}
 	if(won){
	 fprintf(fp,"\nOutcome : Won \n");}
	 else {
	 fprintf(fp,"\nOutcome : Lost \n ");2
	 
	 }
	
	 
	printf("\nDo you want to play again :\nType 1 for playing again and 2 or any other key to exit :");
	int p;
	scanf("%d",&p);

	if ( p == 1)
	{count =0;
	goto abc;} 
	else{
		printf("Thank You for playing, Goodbye. ");
	}



	
    
 	return 0; 
 }  
 	void magic(int n){
 		int a;int x;
 		printf("So now the magic trick will begin. \n");
 		printf("Guess a number between 1 to 10 : ");
 		scanf("%d",&a);
 		printf("%d\n",a);
 		printf("Now borrow the same number from your friend and add it to your number : ");
 		scanf("%d",&x);
 		printf("%d\n",2*a);
 		printf("Now add %d\n",(2*n+20));
 		scanf("%d",&x);
 		printf("%d\n",2*a+2*n+20);
 		printf("Now divide this by 2 :");
 		scanf("%d",&x);
		printf("%d\n",a+n+10);
 		printf("now subtract 10 from the number :");
 		scanf("%d",&x);
 		printf("%d\n",a+n);
 		printf("Now give back the number you took from your friend and say it out loud: ");
 		scanf("%d",&x);
 		printf("\n \nCongratulations for completing the trick! The correct number was %d",n);
	 }
 
 
 
 
 
 
 
