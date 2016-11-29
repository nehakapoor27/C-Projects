// This program shows proper commenting in a program and also the output will come in a disk file. 

//Include Header files

#include <stdio.h>
#include <math.h>


// Variable declarations
float Amount;  // Amount entered by User//
float Total;   // Calculate U.S Dollars at the rate of 40 Drachmas//
float Total1;  // Calculate U.S Dollars at the rate of 35 Drachmas//
float Result;  // Calculate the difference//
int dollars;   // Dollar portion of Difference//
int cents;     // Cents portion of Difference//
FILE *diskfile;   // To generate output to a txt file//

//Main Function

main()


{

    //Prompt User for the Amount 

printf ("*** Drachma Conversion Program ***\n\n");
printf ("How many drachmas do you have in your savings account?");
scanf  ("%f", & Amount);
printf ("\nThe conversion information for %.0f drachmas is now being recorded.", Amount);

// Print results to disk file  

diskfile = fopen ("c:\\class\\nkapoor-dc.txt", "w");  //This will open and create the .txt file by name nkapoor-dc in a folder name "Class" which is at C drive. 



//Calculate the U.S Dollar with conversion of Drachmas

Total=fabs(Amount)/40;
Total1=fabs(Amount)/35;

//Display the conversion of U.S Dolloars in disk file

fprintf(diskfile,"For %.0f drachmas:", Amount);
fprintf(diskfile,"\nAt the rate of 40 drachmas per U.S. dollar,\n");
fprintf(diskfile,"   you have %.2f U.S dollars", Total);
fprintf(diskfile,"\nAt the rate of 35 drachmas per U.S. dollar,\n");
fprintf(diskfile,"   you have %.2f U.S dollars", Total1);

//Calculate the Difference 

Result = Total1 - Total;

//Display the difference in U.S. Dollars in the diskfile.
fprintf(diskfile,"\n\n The difference is %.2f U.S. dollars.", fabs(Result));

fclose (diskfile); // Close the file

return 0;

}


