/*
Program Name : Example-4.11: formated_output_for_printing_char_and_string.
Author Name : Abdullah Almasud.
*/

main (){

    char x = 'A'; // Declaration and assign of variables.
/* Declaration and assign of a string array variable. */
    char name[80] = "ANIL KUMAR GUPTA";

    printf("Output of characters.\n\n"); // Output of characters.
/*
Output the character in 3 times in sequence (Where w=1(default),2,3 and
p = 1(default)) in right-justified.
*/
    printf("%c\n%3c\n%5c\n",x,x,x);
/*
Output the character in 2 times in sequence (Where w=3,1(default))
in right-justified.
*/
    printf("%3c\n%c\n",x,x);
/* Print a new line. */
    printf("\n");
printf("Output of the strings.\n\n"); // Output of characters.
/*
Output the string in right-justified.
*/
printf("%s\n",name);
/*
Output the string (Where minimum w=20) in right-justified.
*/
printf("%20s\n",name);
/*
Output the string (Where minimum w=20 and p = 10) in right-justified.
*/
printf("%20.10s\n",name);
/*
Output the string (p = 5) in right-justified.
*/
printf("%.5s\n",name);
/*
Output the string (Where minimum w=20 and p = 10) and set minus(-) for acting
left-justified.
*/
printf("%-20.10s\n",name);
/*
Output the string (Where minimum w=5) and it's > w for that it's print full and set minus(-) for acting
left-justified.
*/
printf("%5s\n",name);

}
