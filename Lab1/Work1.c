#include <stdio.h>
#include <time.h>
#include <math.h>

int main()
{
	
	time_t tm= time(NULL);
	
	char type;
	printf("Write type binarnui=B or text=T :");
	scanf("\n%c", &type);
	
	if (type == 'T') {
		FILE *logfile = fopen("log-file", "wt");
		fprintf(logfile, "1.Program started  - %s", ctime(&tm));
	
		double x; //=37.15;
		double y; //=-12.55;
		double a;
		
		printf("Write X= ");
	    scanf_s("%lf", &x);
	    printf("Enter Y= ");
	    scanf_s("%lf", &y);
	
		
		a=pow(x+pow(fabs(y),1.0/4),1.0/3);
		
		
		fprintf(logfile, "\n2.Parameters file “answer.txt” opened - %s", ctime(&tm)); // час відкриття файлу
		fprintf(logfile,"X=%lf \t Y=%lf", x,y);
		FILE *answer = fopen("answer", "wt"); // відкриття файлу для відповіді
		
		fprintf(logfile, "\n \n3.Expression calculated - %s", ctime(&tm)); 
		fprintf(answer,"%lf", a); // запис відповіді
	   	fprintf(logfile,"%lf", a); // запис результату у лог файл
	   	
		fprintf(logfile, "\n \n4.Output file “answer.txt” saved - %s", ctime(&tm)); 
		
		fprintf(logfile, "\n5.End - %s", ctime(&tm)); 
	
		
		fclose(logfile);
		fclose(answer);
	
	} else if (type == 'B') {
		
		FILE *logfile = fopen("log-file", "wb");
		fprintf(logfile, "1.Program started  - %s", ctime(&tm));
	
		double x; //=37.15;
		double y; //=-12.55;
		double a;
		
		printf("Write X= ");
	    scanf_s("%lf", &x);
	    printf("Enter Y= ");
	    scanf_s("%lf", &y);
	
		
		a=pow(x+pow(fabs(y),1.0/4),1.0/3);
		
		
		fprintf(logfile, "\n2.Parameters file “answer.bin” opened - %s", ctime(&tm)); // час відкриття файлу
		fprintf(logfile,"X=%lf \t Y=%lf", x,y);
		FILE *answer = fopen("answer", "wb"); // відкриття файлу для відповіді
		
		fprintf(logfile, "\n \n3.Expression calculated - %s", ctime(&tm)); 
		fprintf(answer,"%lf", a); // запис відповіді
	   	fprintf(logfile,"%lf", a);
	   	
		fprintf(logfile, "\n \n4.Output file “answer.bin” saved - %s", ctime(&tm)); 
		
		fprintf(logfile, "\n5.End - %s", ctime(&tm)); 
	
		
		fclose(logfile);
		fclose(answer);
	
	} else {
		printf("Error 123");
	}

	
}
