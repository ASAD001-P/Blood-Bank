#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct donor{
	char name[20];
	char group[5];
    unsigned long long int phone;
	int st;
	char loc[15];
	char pass[20];}s[100];
	int ch,i=0,j,k,x,y,z,p,q,r;
	char xz[20];
	int front() {
	printf("\n\n                                                 DISPLAY                                    ");
	printf("\n\n-----------------------------------------------------------------------------------------------------");
	printf("\nDONOR NAME\t\tGROUP\t\tPHONE NO.\t\tStatus\t\tLocation\n");
	printf("\n-----------------------------------------------------------------------------------------------------\n");}
	int display(){
	printf("   %s\t\t%s\t\t%llu\t\t%d\t\t%s\n",s[j].name,s[j].group,s[j].phone,s[j].st,s[j].loc);
	printf("-----------------------------------------------------------------------------------------------------\n");}

	int modify()  {
	printf("Name of the donor: ");
    getchar();
	gets(s[j].name);
	printf("Group of the donor: ");
	scanf("%s",s[j].group);
	printf("Phone number of the donor(11 digit): ");
	scanf("%llu",&s[j].phone);
	printf("Present living district of the donor: ");
	getchar();
	gets(s[j].loc);
	printf("Donor status (press 1 for active or 0 for inactive): ");
	az:
	fflush(stdin);
	scanf("%d",&s[j].st);
	if((s[j].st!=0)&&(s[j].st!=1)){
        printf("Wrong input, try again \n");
    	goto az;}}
    int delet(){
		 for (int j = 0; j < i; j++){
      if (x == s[j].phone){
         for (int k = j; k < 100; k++){
            s[k] = s[k + 1];}
         i--;}}}
	int add()  {
	printf("How many donors record you want to add ");
	scanf("%d",&y);
	for(j=i;j<i+y;j++){
	printf("Name of the donor: ");
    getchar();
	gets(s[j].name);
	printf("Group of the donor: ");
	scanf("%s",s[j].group);
	printf("Phone number of the donor(11 digit): ");
	scanf("%llu",&s[j].phone);
	printf("Present living district of the donor: ");
	getchar();
	gets(s[j].loc);
	printf("Donor status (press 1 for active or 0 for inactive) :");
	ag:
	fflush(stdin);
	scanf("%d",&s[j].st);
    if((s[j].st!=0)&&(s[j].st!=1)){
        printf("Wrong input, try again \n");
    	goto ag;}}
    	i=i+y;}
	int input() {
	    int mode=1;
	    char dev[10];
	    main:
	    scanf("%s",dev);
	    if (strcmp(dev,"ASAD404")==0){
                 system("COLOR 8E");
		printf("\n\n\n\t\t\t\t\t**********************************************\n\n\n");
		printf("\n\n\n\t\t\t\t\t\t\tWELCOME DEVELOPER\n\n\n");
		printf("\n\n\n\t\t\t\t\t**********************************************\n\n\n");
		printf("\n\n\n\t\t\t\t\t\tPress Any Key to Continue");
        _getch();{
        while(1){
        prime:
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       DEVELOPER MENU      \n\n");
    printf("\n1. Add donor ");
    printf("\n2. Modify donor record ");
    printf("\n3. Delete donor ");
    printf("\n4. Search donor by phone number ");
    printf("\n5. Display records of all donor ");
    printf("\n6. Exit\n");
    printf("\nPlease enter desired number: ");
    a:
    fflush(stdin);
    scanf("%d",&ch);
	switch(ch) {
    case 1:
		add();
		break;
	case 2:
		printf("Enter the donors phone number to modify record ");
			scanf("%d",&x);
			 for(j=0;j<i;j++){
			if(s[j].phone==x){
            modify();}}
            break;
    case 3:
    	 printf("Enter the phone number of the donor to delete record : ");
        scanf("%d",&x);
       for(j=0;j<i;j++){
        if(x==s[j].phone) {
		delet(j);}}
		 break;
    case 4:
			printf("Enter the donors phone number to search record: ");
			scanf("%d",&x);
			front();
    for(j=0;j<i;j++){
        if(s[j].phone==x)
            display();}
            break;
    case 5:
            	front();
			    for(j=0;j<i;j++)
			    display();
	        break;
	case 6:
		exit(0);
		break;
    case 404:
		goto main;
    default:
    	printf("Wrong input, try again \n");
    	goto a;}goto prime;}}}
    else{
    system("COLOR B1");
        printf("\n\n\n\t\t\t\t\t**********************************************\n\n\n");
		printf("\n\n\n\t\t\t\t\t\t\tWELCOME USER\n\n\n");
		printf("\n\n\n\t\t\t\t\t**********************************************\n\n\n");
		printf("\n\n\n\t\t\t\t\t\tPress Any Key to Continue");
        _getch();
c:
     if(mode==1)
     system("COLOR B1");
    else
        system("COLOR 0F");
        while(1){
        prime2:
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        MENU      \n\n");
    printf("\n1. Search for a donor ");
    printf("\n2. Update donor information ");
    printf("\n3. Apply to be a donor ");
    printf("\n4. Financial support ");
    printf("\n5. Theme invert");
    printf("\n6. Help desk ");
    printf("\n7. Exit\n");
    b:
    fflush(stdin);
    scanf("%d",&ch);
    switch(ch) {
    case 1:
    case 2:
		printf("Enter your id\n");
			scanf("%d",&x);
        printf("Enter your password\n");
            scanf("%s",&xz);
        for(j=0;j<i;j++){
        if(s[j].phone==x&&s[j].pass==xz)
            printf("\n1. Update donor location ");
            printf("\n2. Update donor status ");
            printf("\n3. Change password");
            printf("\n4. Exit\n");
        base:
    fflush(stdin);
    scanf("%d",&ch);
        switch(ch){
        case 1:
            exit(0);
            break;
        case 2:
            exit(0);
            break;
        case 3:
            exit(0);
            break;
		case 4:
            break;
        default:
            printf("Wrong input, try again \n");
            goto base;}}
		break;
    case 3:
		printf("To be a donor, please mail us to get the needed form instantly.\n");
		printf("Within 24 hours of application, our team will verify your information and add it to database.\n");
		printf("You'll get a pass from the returning mail for this software.\n");
		break;
    case 4:
		printf("Donate using our payment gateways\n\txxxxx\n\tyyyyy\n\tzzzzz\n");
		printf("To get financial aid in blood processing fee, mail us on the address below\n\tfinancial.aid@gmail.com\n");
		break;
    case 5:
		mode=-1*mode;
		goto c;
		break;
    case 6:
		printf("\tFollow the directions as per your need.\n\n\tTo, \n\t\t* Ask a question\n\t\t* Know in detail\n\t\t* Report a bug\n\t\t* File a complain\n\n");
        printf("\t  Mail us on help.deskxyz@gmail.com\n\n");
        printf("\t  Emergency contact : 01xxxxxxxxx\n\n\n\n");
		break;
    case 7:
		exit(0);
		break;
    case 404:
		goto main;
    default:
    	printf("Wrong input, try again \n");
    	goto b;}goto prime2;}}}
int main(){
	input();}
