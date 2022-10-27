#include<stdio.h>
#include<stdlib.h>
#include<String.h>
#include<time.h>

main()
{
	char nameOfPerson[10];
	int table[5] = {2, 2, 2, 4, 6};
	int people=0, f=1, i=0, flag=0, j;
	int guestCounter=0;
	FILE *fptr;
	
	while(f!=0)
	{		
	flag=0;
	printf("\nAnnounce Yourself: ");
	scanf("%s", &nameOfPerson);
	
	printf("\nAccomodate number of people in the group: ");
	scanf("%d", &people);

		
	if(people > 6)
	{
		printf("\nSorry! We donot accomodate more than 6 people.");
		exit(0);
	}
	
	switch(people)
	{
		case 1: printf("\nTable not available for a Single person"); 
				break;
		case 2: printf("\nTable available"); 
				break;
		case 3: printf("\nTable not available for a three persons"); 
				break;
		case 4: printf("\nTable available"); 
				break;
		case 5: printf("\nTable not available for a Five persons"); 
				break;
		case 6: printf("\nTable available"); 
				break;
		default : printf("\nSorry! We donot accomodate enough people."); 
				break;
	}
	
	if(people==2 || people==4 || people==6){
		guestCounter= guestCounter + people;
		 
		int k=0;
		int o;
		k++;
		fptr = fopen("Guest.txt","a");
		fprintf(fptr,"BOOKING DETAIL: %d\n\n", k);
		fprintf(fptr,"Guest name: ");
		for(o=0; o<10; o++){
			fprintf(fptr,"%c",nameOfPerson[o]);
		}
		fprintf(fptr,", Persons: ");
    	fprintf(fptr,"%d,",people);
    	time(0);
    	fprintf(fptr,", Time: ");
		fprintf(fptr,"%d:%d\n",rand() % 24,rand() % 60);
		fclose(fptr);
	}
	
	printf("\n\nInput 0 to terminate And Any other key continue: ");
	scanf("%d", &f);
	
	fflush(fptr);	
}
	printf("\nTotal number guests: %d", guestCounter);
}
