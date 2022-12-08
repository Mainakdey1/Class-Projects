#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
struct Student
{

	int roll,sem,yr;
	char name[35],dob[15],gname[35],bg[5],add[100],mob[15]; 
	struct Student* next;

}; 
struct Student *head=NULL;

void insert(int,int,int,char*,char*,char*,char*,char*,char*);

void search(int roll);

void insert(int roll,int sem,int yr,char *name,char *dob,char *gname,char *bg,char *add,char *mob)
{
    
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->roll=roll;
    student->sem=sem;
    student->yr=yr;
    strcpy(student->name, name);
    strcpy(student->dob, dob);
    strcpy(student->gname, gname);
    strcpy(student->bg, bg);
    strcpy(student->add, add);
    strcpy(student->mob, mob);
    student->next = NULL;
    
    if(head==NULL)
	{
      head = student;
    }
    else
	{
        student->next = head;
        head = student;
    }
    
}

void search(int roll)
{
    struct Student * temp = head;
    while(temp!=NULL)
	{
        if(temp->roll==roll)
		{   printf("______________________________________________________________________\n\n");
            printf("Name\t\t:\t %s\n", temp->name);
			printf("Roll Number\t:\t %d\n", temp->roll);
			printf("Department\t:\t Information Technology\n");
			printf("Semester\t:\t %d\n",temp->sem);
            printf("Year    \t:\t %d\n",temp->yr);
			printf("Guardian's Name :\t %s\n", temp->gname);
            printf("Date Of Birth   :\t %s\n", temp->dob);
            printf("Phone\t\t:\t %s\n", temp->mob);
            printf("Blood Group\t:\t %s\n", temp->bg);
            printf("Address\t\t:\t %s\n", temp->add);
            printf("______________________________________________________________________\n\n\n");
            return;
        }
        temp = temp->next;
    }
    printf("\n\t\t\t!!! Student with roll number %d is not found !!!\n\n", roll);
}

main()
{
   	int n,option;
	printf("\t\t\t\t||\tS T U D E N T \t R E C O R D\t||\n\n");
   	insert(2,3,2,"Amaan Ahmed","24.01.2002","Mr. A.Ahmed","AB+","Behala","+91 987XXXXXXX");
	insert(5,3,2,"Sukalpita Bhowmik","16.04.2003","Mr. S. Bhowmik","A+","Barrackpore","+91 900XXXXXXX");
   	insert(6,3,2,"Anurag Chakraborty","30.09.2002","Mr. A. Chakraborty","AB+","Ballygunge","+91 969XXXXXXX");
	insert(8,3,2,"Sandipan Chakraborty","30.08.2002","Mr. N.D. Chakraborty","O+","Dum Dum","+91 903XXXXXXX");
	insert(12,3,2,"Sritama Das","24.09.2002","Mr. S.Das","A+","Behala","+91 810XXXXXXX");
        insert(15,3,2,"Mainak Dey","11.08.2003","Mr. M. Dey","O+","Patuli","+91 84XXXXXXXX");
	insert(17,3,2,"Sohini Dey","23.01.2003","Mr. U. Dey","A+","Baranagar","+91 999XXXXXXX");
   
	
	    insert(51,3,2,"Neha Dhupia","23.11.2002","Mr. S Dhupia","O+","Barrackpore","91 94XXXXXXXX");
    insert(52,3,2,"Nihal Dhandhania          ","23.10.2002","Mr. K Dhandhania    ","O+","Barrackpore","+91 99XXXXXXXXX");
    insert(50,3,2,"Jolly Singh","30.10.2003","Mr. Singh","O+","Khidderpore","+91 98XXXXXXXX");
    insert(53,3,2,"Shubhodip Das","18.09.2002","Mr. A Das  ","O+","Midnapore ","+91 99XXXXXXXXX");
    insert(54,3,2,"Rifa Mullick ","14.12.2002","Mr. G Mullick","O+","Howrah","+91 99XXXXXXXXX");
    insert(55,3,2,"Rahul Gupta","20.08.2002","Mr. A Gupta    ","O+","Salt Lake  ","+91 99XXXXXXXXX");  
    insert(14,3,2,"Pabitra Paul","01.05.2002","Mr P Paul","A+","Kakurgachi","95XXXXXXXX")
    insert(16,3,2,"Shreya Sen","15.04.2001","Mr K Sen","O+","Bihar","78XXXXXXXX")
    insert(20,3,2," Bhaskar Chetri","24.09.2002","Mr M Chetri","A+","Kolkata","81XXXXXXXX")
    insert(25,3,2,"Aditi Sharma","20.08.2002","Mr S Sharma","B+","Dumdum","91XXXXXXXX")
    insert(35,3,2," Roni Mukherjee","10.10.2002","Mr D Mukherjee","AB+","Pailan","98XXXXXXXX")
    insert(14,3,2,"Dhrubaraj Dey","02.06.2002","Mr R Dey","A+","New Alipore","75XXXXXXXX")
    insert(16,3,2,"Priyanka Rakshit","17.08.2001","Mr A Rakshit","O+","Bihar","87XXXXXXXX")
    insert(20,3,2," Ayushmaan poddar","25.01.2002","Mr M Poddar","A+","Kolkata","98XXXXXXXX")
    insert(25,3,2,"Adil Sehab ","19.12.2002","Mr A Sehab","B+","Dumdum","99XXXXXXXX")
    insert(35,3,2,"Aman Sigh","10.10.2002","Mr A Singh","AB+","Pailan","75XXXXXXXX")
	do{
		printf("ENTER CHOICE:\n 1.SEARCH STUDENT RECORD \n 2.EXIT\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("ENTER ROLL NO. TO SEARCH RECORD: ");
				scanf("%d",&n);
				search(n);
				break;
			case 2:
				printf("____________________________________O P E R A T I O N \t T E R M I N A T E D____________________________________");
			    break;
			default:
			    printf("\n\t\t!!! ENTER VALID CHOICE(1 or 2) !!!\n\n");
		}
		
	}while(option!=2);
	
}
free(Student)
