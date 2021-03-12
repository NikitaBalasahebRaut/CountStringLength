/*
    Problem statement : Accept string from user and return the length of that string.
    
 Input : "Hello"
 Output : 5

 Input : "Hello World"
 Output : 11
 
 Input : "A"
 Output : 1
 
 Input : "India_ _is_ _my country"
 Output : 21
 */
 
 #include<stdio.h>
 
 int StrLen(char str[])
 {
	 int i = 0;
	 int iCount = 0;
	 
     while(str[i] != '\0')
	 {
        iCount++;
		i++;
	 }	
    return iCount;	 
 }
 
 int main()
 {
   char ch[30];
   int iRet = 0;
   
   printf("Enter The String \n");
   scanf("%[^'\n']s",&ch);            // // Accept the input till user enerets enter key //not necessary to write &ch because array name consider as first index
   
   iRet = StrLen(ch);
   
   printf("Length of string is : %d\n", iRet);
 
 return 0;
 }
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\4ProblemsOnString\CountStringLength>myexe
Enter The String
ni ki ta
Length of string is : 8

D:\ProgramTopicWise\LB\4ProblemsOnString\CountStringLength>myexe
Enter The String
nikita_raut
Length of string is : 11

D:\ProgramTopicWise\LB\4ProblemsOnString\CountStringLength>myexe
Enter The String
Nikita Raut_Resume
Length of string is : 18

*/