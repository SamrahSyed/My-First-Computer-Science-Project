#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


void logo(void);
void logo (void)
{
    printf("\n\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\t\t\xDB\xDB   POINT SERVICE MANAGEMENT APPLICATION    \xDB\xDB");
	printf("\n\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	            
}
char a[]="1",b[]="2",c[]="3",d[]="4",e[]="5";
struct srec{
	char sname[20];
	char roll[4];
	char dept [5];
	char year [5];
	char status;
	char dop[10];
	char pointnum[2];

}rec1;
struct drec {
	char dname[20],cell[20];
	int empnum,bnum,exp;
	
}rec2;
struct brec {
char busnum[5];
char stop1[20],stop2[20],stop3[20],stop4[20],stop5[20],stop6[20],stop7[20],stop8[20];

}rec3;

char numstr[20];
char stdname[30];
char drvname[20];
char fstp[20];
char searchsn[20];
char searchdn[20];
char searchfs[20];
time_t now, later;
int s=1;

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void sleep(int delay)
{
 now=time(NULL);
 later=now+delay;
 while(now<=later)now=time(NULL);
}
int main()
{ int i=0;
int counta=0,countb=0,countc=0,countd=0,counte=0;

system("cls");
	up:
		
		system("cls");
	for(int i=0;i< 80;i++){
	printf("\xDB");
	delay(30);}
	 //printf("\n\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\n\t\t    POINT SERVICE MANAGEMENT APPLICATION    \n\n\n");
		for(int j=0;j< 80;j++){
	printf("\xDB");
	delay(30);}

    char c1,ch1,ch2,ch3,ch4='p',ch5='s',ch6='m',ch7='s',cs;
	
	 printf("\n\n\n\n\t\t\t\tEnter username:\n\t\t\t\t");
	 c1=getche();
	 ch1=getche();
	 ch2=getche();
	 ch3=getche();
	 printf("\n\t\t\t\tEnter password:\n\t\t\t\t");
	 ch4=getch();
	 printf("*");
	 ch5=getch();
	 printf("*");
	 ch6=getch();
	 printf("*");
	 ch7=getch();
	 printf("*");
	 system("cls");
if(c1=='p'&&ch1=='s'&&ch2=='m'&&ch3=='s'&&ch4=='p'&&ch5=='s'&&ch6=='m'&&ch7=='s')
{
	printf("\n\n\n\n\n\n\t\t\tCorrect password!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	sleep(1);
    system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t     %c%c%c%c%c%c WELCOME %c%c%c%c%c%c\n\n\n\n\n\n\n\n\n\n\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178);
	//delay(1000);
	sleep(1);
	system("cls");
	goto menu;

}
else
{	if(i==2){ printf("\nToo many incorrect attempts.\n\n\n\n\n\n\n\n\t\t\t\tACCESS DENIED"); sleep(2); exit(1);}
	printf("\nIncorrect password or username!\n");
	sleep(1);
	printf("\nPlease re-enter username and password");
	sleep(1);
	i++;
	system("cls");
	goto up;
}
menu:
	
	
    system("cls");	
	logo();
	printf("\n\n\n\t\t\tChoose the following options:\n\n");
	printf("\t\t\t\t1.Students \n\n\n\t\t\t\t2.Bus drivers\n\n\n\t\t\t\t3.Buses\n\n\n\t\t\t\t4.Statistics\n\n\n\t\t\t\t5.EXIT\n\n\n\t\t\xDB\xDB YOUR CHOICE \xDB\xDB\n\t\t\t\t");
	c1=getche();
	fflush(stdin);
	system("cls");
	switch(c1)
	{
	
		stdchoice:
		case '1' :
		         FILE *fps;
			     fps=fopen("psms_stdrec.DAT","rb+");
			     if(fps==NULL)
			     {
				 fps=fopen("psms_stdrec.DAT","wb+");                         	
				 if(fps==NULL)
				 {
					puts("\nCannot open file.\n");
					exit (1);
				 } 
			     }
        		 logo();
				 

				 		
		         printf("\n\n\n\n\n\n\t\t\tChoose options for the following tasks:");
		         printf("\n\n\n\t\t\t\t1.ADD STUDENT RECORD\n\n\n\t\t\t\t2.SHOW ALL RECORDS\n\n\n\t\t\t\t3.MODIFY RECORD(s)\n\n\n\t\t\t\t4.SEARCH RECORD\n\n\n\t\t\t\t5.DELETE RECORD(s)\n\n\n\t\t\t\t6.EXIT\n\n\t\t\t\t\t\xDB\xDB YOUR CHOICE \xDB\xDB\n\t\t\t\t\t");
		         cs=getche();
		         fflush(stdin);
		         switch(cs)
		        {
		        	
			        case '1' :{
					
					
			        	s=1;
					  fseek(fps,0,SEEK_END);
	                  do{
					    system("cls");
						printf("Enter student name:");
	                    gets(rec1.sname);
	                    printf("\nEnter roll number:");
	                    gets(rec1.roll);
	                    printf("\nEnter department:");
	                    gets(rec1.dept);
	                    printf("\nEnter academic year:");
	                    gets(rec1.year);
	                    printf("\nPress 'y' if fee is paid otherwise 'n'");
	                    rec1.status=getche();
	                    printf("\n\nEnter date of payment (as 25-4-2015):");
	                    gets(rec1.dop);
	                    printf("\nEnter point number used:");
	                    gets(rec1.pointnum);
	                    
	                    if(!(strlen(rec1.sname)==0||strlen(rec1.dept)==0||strlen(rec1.roll)==0||strlen(rec1.year)==0||strlen(rec1.dop)==0||strlen(rec1.pointnum)==0))
	                            {
	                            fwrite(&rec1,sizeof(rec1),1,fps);
	                            printf("\nRecord added successfully!");
								s=0;
								}
								else 
								{ 
									printf("\nALL FIELDS ARE MANDATORY! TRY AGAIN.");
								}
								if(s==1) printf("\nRecord not added.");
	                    printf("\nDo you want to add another record (y/n)?");
	                    fflush(stdin);
                        }while(getche()=='y'||getche()=='Y');
                        fclose(fps);
						goto stdchoice;}
				
			        case '2' : 
				    system("cls");
	                rewind(fps); ///this moves file cursor to start of the file
	                while(fread(&rec1,sizeof(rec1),1,fps)==1)
					{ /// read the file and fetch the record one record per fetch
					printf("\nNAME: %s\nROLL NUMBER: %s\nDEPARTMENT: %s\nACADEMIC YEAR: %s\nFEE PAID OR NOT? (Y for yes/N for no): %c\nDate of payment : %s\nPoint number used :%s\n",rec1.sname,rec1.roll,rec1.dept,rec1.year,rec1.status,rec1.dop,rec1.pointnum);
					printf("\n\n");
					}
	                getch();
	                goto stdchoice;
			        case '3' :
			        	system("cls");s=1;
					 	rewind(fps);
	                    do
	                    {
		                 printf("\nEnter name of student to modify: ");
				         gets(stdname);
				         rewind(fps);
				        while(fread(&rec1,sizeof(rec1),1,fps)==1)
				          {
				            if(strcmp(rec1.sname,stdname)==0)
		                     {s=0;
	                           printf("\nModify student name:");
	                           gets(rec1.sname);
	                           printf("\nModify roll number:");
	                           gets(rec1.roll);
	                           printf("\nModify department:");
	                           gets(rec1.dept);
	                           printf("\nModify academic year:");
	                            gets(rec1.year);
	                            printf("\nPress 'y' if fee is paid otherwise 'n'");
	                            rec1.status=getche();
	                            printf("\n\nModify date of payment (as 25-4-2015):");
	                    gets(rec1.dop);
	                    printf("\nModify point number used:");
	                    gets(rec1.pointnum);
	                            
	                            if(!(strlen(rec1.sname)==0||strlen(rec1.dept)==0||strlen(rec1.roll)==0||strlen(rec1.year)==0||strlen(rec1.dop)==0||strlen(rec1.pointnum)==0))
	                            {
	                            fseek(fps,-sizeof(rec1),SEEK_CUR);
	                            fwrite(&rec1,sizeof(rec1),1,fps);
	                	        break;
								}
								else 
								{ 
									printf("\nALL FIELDS ARE MANDATORY! TRY AGAIN."); break;
								}
								}}
								if(s==1)printf("\nResult not found to be modified."); else printf("\n");
	                     	   
	                    printf("\nDo you want to modify another record (y/n):");}
	                    while(getche()=='y'||getche()=='Y');
						fclose(fps);
						goto stdchoice;
			        case '4' :
			             system("cls");
						 rewind(fps);
	                      do
	                     {
	                     	fflush(stdin);
                        	printf("\nEnter student name to search: ");
	                        gets(searchsn);
	                       while(fread(&rec1,sizeof(rec1),1,fps)==1)
	                      {
	                      	if (strcmp(rec1.sname,searchsn)==0)
                            {
                            printf("\nResult found.\n");
                            s=0;
							fseek(fps,-sizeof(rec1),SEEK_CUR);
	                       	printf("\nStudent name:%s\nStudent roll num: %s\nDepartment:%s\nYear:%s\nStatus:%c\nDate of payment : %s\nPoint number used :%s\n",rec1.sname,rec1.roll,rec1.dept,rec1.year,rec1.status,rec1.dop,rec1.pointnum);  	
		                    break;
							}
							if(s==1) printf("Result not found.");
						   }
						   if(fread(&rec1,sizeof(rec1),1,fps)==1) printf("\nResult not found.");
	                    
	                    printf("\nDo you want to search for another record (y/n):"); }
	                        while(getche()=='y'||getche()=='Y');
				    goto stdchoice;
		            case '5' :
		            		system("cls");
							do
                  	        {
	               	        printf("\nEnter student name to delete :");
	              	        gets(searchsn);
	              	        FILE *ft;
	            	        ft=fopen("temp1.DAT","wb+");
		                    rewind(fps);
		                    while(fread(&rec1,sizeof(rec1),1,fps)==1)
		                    { 
		           	        if(strcmp(rec1.sname,searchsn)!=0)
		            	    fwrite(&rec1,sizeof(rec1),1,ft);
		                    else printf("\nRecord deleted successfully.\n");
							}
		                    fclose(fps);
		                    fclose(ft);
		                    remove("psms_stdrec.DAT");
							rename("temp1.DAT","psms_stdrec.DAT");
		                    fps=fopen("psms_stdrec.DAT","rb+");
		                    printf("\nDo you want to delete another record (y/n):");
		                    fflush(stdin);
	                        }
							while(getche()=='y'||getche()=='Y');
							fclose(fps);
							goto stdchoice;
						
			       case '6' :
			       		fflush(stdin);
			       		system("cls");
				        fclose(fps);
				    	goto menu; 	
					   
			       default:
				        
				        printf("Warning! Choose given options only.\n ") ; 
				        sleep(1);
				        goto stdchoice;
				 
	}
		drvchoice: //------------DRIVERS MENU
		case '2':    
		        FILE*fpd;
			    fpd=fopen("psms_drvrec.DAT","rb+");
			    if(fpd==NULL)
			    {
				fpd=fopen("psms_drvrec.DAT","wb+")   ;                         	
				if(fpd==NULL)
				{
					puts("\nCannot open file.\n");
					break;
				}}
			    
	
        	logo();	
	     	printf("\n\n\n\n\n\n\t\t\t\tChoose options for the following tasks:");
		    printf("\n\n\n\t\t\t\t\t1.ADD DRIVER's RECORD\n\n\n\t\t\t\t\t2.SHOW ALL RECORDS\n\n\n\t\t\t\t\t3.MODIFY RECORD(s)\n\n\n\t\t\t\t\t4.SEARCH RECORD\n\n\n\t\t\t\t\t5.DELETE RECORD(s)\n\n\n\t\t\t\t\t6.EXIT\n\n\t\t\t\t\xDB\xDB YOUR CHOICE \xDB\xDB\n\t\t\t\t");
		    cs=getche();
		    fflush(stdin);
		         switch(cs)
		        {
		           	case '1' :
			        fseek(fpd,0,SEEK_END);   
	                do{                       
					system("cls");
	                printf("\nEnter driver's name:");
	                gets(rec2.dname);
	                printf("\nEnter employee number:");
	                gets(numstr);
	                rec2.empnum=atoi(numstr);
	                printf("\nEnter number of bus driven by driver :");
	                gets(numstr);
	                rec2.bnum=atoi(numstr);
	                printf("\nEnter job experience in years:");
	                gets(numstr);
	                rec2.exp=atoi(numstr);
	                printf("\nEnter mobile number:");
	                gets(rec2.cell);
	                
	                if(!((strlen(rec2.dname))==0||sizeof(rec2.empnum)==0||sizeof(rec2.bnum)==0||strlen(rec2.cell)==0||sizeof(rec2.exp)==0))
					{
	                fwrite(&rec2,sizeof(rec2),1,fpd);
	            	printf("\nRecord added successfully.\nThanks.\n");
					}
	            	else { printf("\nALL FIELDS ARE MANDATORY! TRY AGAIN.");}
                   	printf("\nDo you want to add another record (y/n)?");
	                fflush(stdin);
                    }while(getche()=='y'||getche()=='Y');
                    fclose(fpd);
					goto drvchoice;	 
			case '2' : 
				
				       system("cls");
                rewind(fpd); ///this moves file cursor to start of the file
                while(fread(&rec2,sizeof(rec2),1,fpd)==1){ /// read the file and fetch the record one record per fetch
                  
				    printf("Name: %s \nEmployee number: %d\nNumber of buses driven: %d \nJob experience: %d \nMobile number: %s",rec2.dname,rec2.empnum,rec2.bnum,rec2.exp,rec2.cell);
                	printf("\n\n");
				}
                getch();
                goto drvchoice;
			case '3' : 
					s=1;
					system("cls");
		         	rewind(fpd);
	                do
	                {
	             	printf("Enter name of driver to modify: ");
		            gets(drvname);
		            rewind(fpd) ;
		            while(fread(&rec2,sizeof(rec2),1,fpd)==1)
		            {
		            if(strcmp(rec2.dname,drvname)==0)
		            {s=0;
	                printf("\nModify driver's name:");
	                gets(rec2.dname);
	                printf("\nModify employee number:");
	                gets(numstr);
	                rec2.empnum=atoi(numstr);
	                printf("\nModify number of bus driven by driver :");
	                gets(numstr);
	                rec2.bnum=atoi(numstr);
	                printf("\nModify job experience in years:");
	                gets(numstr);
	                rec2.exp=atoi(numstr);
	                printf("\nModify mobile number:");
	                gets(rec2.cell);
	                
	                
					if(!((strlen(rec2.dname))==0||sizeof(rec2.empnum)==0||sizeof(rec2.bnum)==0||strlen(rec2.cell)==0||sizeof(rec2.exp)==0))
					{
					fseek(fpd,-sizeof(rec2),SEEK_CUR);
	                fwrite(&rec2,sizeof(rec2),1,fpd);
	            	printf("\nRecord modified successfully.\nThanks.\n");
					}
	            	else { printf("\nALL FIELDS ARE MANDATORY! TRY AGAIN."); break;}
					break; }
		        	}
		        	if(s==1)printf("\nResult not found to be modified."); else printf("\n");
	                
	                printf("\nDo you want to modify another record (y/n):");}
	                while(getche()=='y'||getche()=='Y');
					fclose(fpd);
					goto drvchoice;
			case '4' :
					system("cls");
	           		rewind(fpd);
	           		s=1;
                   	do
	                { 
	                printf("Enter driver name to search:");
	                gets(searchdn);
	                while(fread(&rec2,sizeof(rec2),1,fpd)==1)
	                {
		            if (strcmp(rec2.dname,searchdn)==0)
    	           {
					 s=0;
					fseek(fpd,-sizeof(rec2),SEEK_CUR);
		            printf("\nDRIVER: %s \nDriver employee no.: %d \nNo. of buses driven: %d \nYears of job experience: %d \nDriver's cell num: %s\n",rec2.dname,rec2.empnum,rec2.bnum,rec2.exp,rec2.cell) ;  
    	            break;
	                }}  
	                
	                	if(s==1) 
						printf("\nRecord not found."); else printf("Result found.");
	                printf("\nDo you want to search another record (y/n):");}
	                while(getche()=='y'||getche()=='Y');
					goto drvchoice;
			case '5' :
				  system("cls");         
				  do
               	{
	           	printf("\nEnter driver name to delete record :");
	           	gets(searchdn);
	            FILE*ftd;	
				ftd=fopen("temp2.DAT","wb+");
		        rewind(fpd);
		        while(fread(&rec2,sizeof(rec2),1,fpd)==1)
		        {
			    if(strcmp(rec2.dname,searchdn)!=0)
			    fwrite(&rec2,sizeof(rec2),1,ftd);
			    else printf("\nRecord deleted successfully.\n");
		        }
		        fclose(fpd);
	           	fclose(ftd);
		        remove("psms_drvrec.DAT");
		        rename("temp2.DAT","psms_drvrec.DAT");
				fpd=fopen("psms_drvrec.DAT","rb+");
		        printf("\nDo you want to delete another record (y/n):");
		        fflush(stdin);
	            }
				while(getche()=='y'||getche()=='Y') ;  
				fclose(fpd);
				goto drvchoice;
	

			case '6' : fclose(fpd); goto menu;
			 default: printf("Warning! Choose given options only.\n ") ; 
				        sleep(1);
				        goto drvchoice; }
	buschoice:		
	case '3':
		//-----------------------CASE 3 BUS MENU------------------------------
		//
		//--------------------------------------------------------------------
				FILE*fpb;
				fpb=fopen("psms_busrec.DAT","rb+");
			    if(fpb==NULL)
			    {
				fpb=fopen("psms_busrec.DAT","wb+")   ;                        	
				if(fpb==NULL)
				{
					puts("\nCannot open file.\n");
					exit (1);
				}
			  }
		      	
     	   system("cls");
     	   logo();
		   printf("\n\n\t\t\t\tChoose options for the following tasks:");
		   printf("\n\t\t\t1.ADD BUS RECORD\n\t\t\t2.SHOW ALL BUS ROUTES\n\t\t\t3.MODIFY RECORD(s)\n\t\t\t4.SEARCH RECORD\n\t\t\t5.DELETE RECORD(s)\n\t\t\t6.EXIT\n\n\t\t\xDB\xDB ENTER YOUR CHOICE \xDB\xDB\n\t\t");
		   cs=getch();
		   fflush(stdin);
		         switch(cs)
		        {
			        case '1' :                 
			        fseek(fpb,0,SEEK_END);
	                do{
					system("cls"); 
	                printf("\nEnter bus number:");
	                gets(rec3.busnum);
	                fflush(stdin);
	                printf("\n.Enter first bus stop:");
	                gets(rec3.stop1) ;
	                printf("\n.Enter second bus stop:");
	                gets(rec3.stop2) ;
	                printf("\n.Enter third bus stop:");
	                gets(rec3.stop3) ;
	                printf("\n.Enter fourth bus stop:");
	                gets(rec3.stop4) ;
                 	printf("\n.Enter fifth bus stop:");
	                gets(rec3.stop5) ;
	                printf("\n.Enter sixth bus stop:");
	                gets(rec3.stop6) ;
	                printf("\n.Enter seventh bus stop:");
	                gets(rec3.stop7) ;
	                printf("\nEnter last bus stop:");
	                gets(rec3.stop8) ;
	                
					
	                if(!(strlen(rec3.busnum)==0||strlen(rec3.stop1)==0||strlen(rec3.stop2)==0||strlen(rec3.stop3)==0||strlen(rec3.stop4)==0||strlen(rec3.stop5)==0||strlen(rec3.stop6)==0||strlen(rec3.stop7)==0||strlen(rec3.stop8)==0))
	                {
                    fwrite(&rec3,sizeof(rec3),1,fpb);
                    printf("\nRecord added successfully.\nThanks.\n");
					}
					else { printf("\nALL FIELDS ARE MANDATORY! TRY AGAIN."); }
					
					printf("\nDo you want to add another record (y/n)?");
	                fflush(stdin);
                    }while(getche()=='y'||getche()=='Y');
                    fclose(fpb);
					goto buschoice;
			case '2' : 
			        system("cls");
			        rewind(fpb);
		            while(fread(&rec3,sizeof(rec3),1,fpb)==1)
	                {
					printf("Bus number: %s\nRoute goes from----->%s----->%s----->%s----->%s----->%s----->%s----->%s----->%s\n",rec3.busnum,rec3.stop1,rec3.stop2,rec3.stop3,rec3.stop4,rec3.stop5,rec3.stop6,rec3.stop7,rec3.stop8);
					} 
                    getch();
                    goto buschoice;
			case '3' :
					s=1;
			        system("cls");
			        rewind(fpb);
		            do
		            { 
		            printf("Enter bus number to modify bus route: ");
		            gets(fstp);
		            while(fread(&rec3,sizeof(rec3),1,fpb)==1)
		            {
		            if(strcmp(rec3.busnum,fstp)==0)
		            {s=0;
	                printf("\nModify number:");
	                gets(rec3.busnum);
	                printf("\nModify first bus stop:");
	                gets(rec3.stop1) ;
	                printf("\nModify second bus stop:");
	                gets(rec3.stop2) ;
	                printf("\nModify third bus stop:");
	                gets(rec3.stop3) ;
	                printf("\nModify fourth bus stop:");
	                gets(rec3.stop4) ;
	                printf("\nModify fifth bus stop:");
	                gets(rec3.stop5) ;
	                printf("\nModify sixth bus stop:");
	                gets(rec3.stop6) ;
	                printf("\nModify seventh bus stop:");
	                gets(rec3.stop7) ;
	                printf("\nModify last bus stop:");
	                gets(rec3.stop8) ;
	                
	                if(!(strlen(rec3.busnum)==0||strlen(rec3.stop1)==0||strlen(rec3.stop2)==0||strlen(rec3.stop3)==0||strlen(rec3.stop4)==0||strlen(rec3.stop5)==0||strlen(rec3.stop6)==0||strlen(rec3.stop7)==0||strlen(rec3.stop8)==0))
	                {
                    fseek(fpb,-sizeof(rec3),SEEK_CUR);
                   	fwrite(&rec3,sizeof(rec3),1,fpb);
                    printf("\nRecord modified successfully.\nThanks.\n");
					break;
					}
					else { printf("\nALL FIELDS ARE MANDATORY! TRY AGAIN."); break;}
					}}
					if(s==1) printf("\nRecord not found. Try again.");
	                printf("\n.Do you want to modify another record (y/n):"); }
	                while(getche()=='y'||getche()=='Y');
					fclose(fpb);
					goto buschoice;
			
			case '4' :
			       system("cls");
			       s=1;
			        rewind(fpb);
	                do
	                { 
	                printf("Enter bus number to search route:");
	                gets(searchfs) ;
	                while(fread(&rec3,sizeof(rec3),1,fpb)==1)
	                {    s=0;  
		            if (strcmp(rec3.busnum,searchfs)==0)
    	            {
					fseek(fpb,-sizeof(rec3),SEEK_CUR);
		            printf("%s----->%s----->%s----->%s----->%s----->%s----->%s----->%s----->%s\n",rec3.busnum,rec3.stop1,rec3.stop2,rec3.stop3,rec3.stop4,rec3.stop5,rec3.stop6,rec3.stop7,rec3.stop8) ;  
                      break;
	                }}	if(s==1) printf("\nRecord not found.");
	                printf("\nDo you want to search another record (y/n):");}
	                while(getche()=='y'||getche()=='Y');
				 	goto buschoice;
			    case '5' :
				      system("cls");           	
	                    do
	                    {
		                printf("\nEnter first bus stop to delete route record :");
		                gets(searchfs);
	                    FILE*ftb;
		                ftb=fopen("temp3.DAT","wb+");
		                rewind(fpb);
		                while(fread(&rec3,sizeof(rec3),1,fpb)==1)
		                {
			            if(strcmp(rec3.busnum,searchfs)!=0)
			            fwrite(&rec3,sizeof(rec3),1,ftb);
			            else printf("\nRecord deleted successfully.");
		                }
		                fclose(fpb);
		                fclose(ftb);
		                remove("psms_busrec.DAT");
		                rename("temp3.DAT","psms_busrec.DAT");
		                fpb=fopen("psms_busrec.DAT","rb+");
		                printf("\nDo you want to delete another record (y/n):");
		                fflush(stdin);
	                    }while(getche()=='y'||getche()=='Y');
	                fclose(fpb);
					goto buschoice; 

				
			
			case '6' : 
			        
	                fclose(fpb); 
					system("cls");
				    goto menu;
		default:
					printf("\n\t\t\tWarning!choose given options only.\n ") ;
					sleep(1); 
					system("cls");
				    goto buschoice;  }
				    
		case '4':{
		
		                 system("cls");
		                 FILE *fps;
			     fps=fopen("psms_stdrec.DAT","rb+");
			     if(fps==NULL)
			     {
				 fps=fopen("psms_stdrec.DAT","wb+");                         	
				 if(fps==NULL)
				 {
					puts("\nCannot open file.\n");
					exit (1);
				 } 
			     }
						 rewind(fps);
	                    
	                       while(fread(&rec1,sizeof(rec1),1,fps)==1)
	                      {
	                      	if (strcmp(rec1.pointnum,a)==0)
                            {counta++;
                           }
                           else if (strcmp(rec1.pointnum,b)==0)
                            {countb++;
                           }
						   else if (strcmp(rec1.pointnum,c)==0)
                            {countc++;
                           }
                           else if (strcmp(rec1.pointnum,d)==0)
                            {countd++;
                           }
                           else if (strcmp(rec1.pointnum,e)==0)
                            {counte++;
                           }
                           else printf("\nbuffer.");
						   }
						   printf("\n\n\t\tBUS NUMBERS\tTOTAL ACCOMODATION\tREGISTERED SEATS\n");
						   printf("\n\n\t\t     1.     \t        50       \t    %d",counta);
						   printf("\n\n\t\t     2.     \t        40       \t    %d",countb);
						   printf("\n\n\t\t     3.     \t        50       \t    %d",countc);
						   printf("\n\n\t\t     4.     \t        50       \t    %d",countd);
						   printf("\n\n\t\t     5.     \t        50       \t    %d",counte);
						   printf("\n\n\n\n\n\n");
						   fclose(fps);
						   getch();
						   goto menu;
		}		    
	case '5' : exit (1); break; 
	default:			
			printf("Warning!choose given options only.\n ") ;
			sleep(1); 
			goto menu;
}
}
