#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	
////	C Programming Practice Questions
////1. Hello World Program
////Write a program to print "Hello, World!" on the screen.
//printf("hello,world!");


////2. Sum of Two Numbers
////Write a program to find the sum of two numbers the user enters.
//int a;
//int b;
//printf("enter number a");
//scanf("%d\n",&a);
//printf("enter number b");
//scanf("%d\n",&b);
//printf("%d\n",a+b);


////3. Largest of Two Numbers
////Write a program to find the largest of two numbers.
//int a = 45;
//int b = 90;
//if(a>b){
//	printf("greater is a  %d",a);
//}else{
//printf("greater is b  %d",b);	
//}


////4. Even or Odd
////Write a program to check whether a given number is even or odd.
//int a = 9;
//if(a%2 == 0){
//	printf(" %d is even",a);
//}else{
//printf("%d is odd",a);}



////5. Factorial of a Number
////Write a program to calculate the factorial of a given number.
//int num = 5;
//int mul =1;
//int i=1;
//for (i=1;i<=num;i++){
//	mul *=i;
//}
//printf("factorial is %d",mul);


////6. Reverse a Number
////Write a program to reverse a given integer.
//int num =123;
//int i =0 ;
//int rnum=0;
//for( i=0;i<sizeof(num)-1;i++){
//
//int digit = num%10;
//rnum = rnum *10 +digit;
//num = num /10;
//}
//printf("%d",rnum);



////7. Palindrome Check
////Write a program to check whether a given sting is a palindrome.
//int num =123,num1 = num;
//int i =0 ;
//int rnum=0;
//for( i=0;i<sizeof(num)-1;i++){
//
//int digit = num%10;
//rnum = rnum *10 +digit;
//num = num /10;
//}
//if(rnum == num1){
//	printf("palindrome");
//}else{
//	printf("not palindrome");
//}

// // by string
//	int i;
//	char str[10]="madam";
//	char revstr[10];
//	for(i=strlen(str);i>=0;i--){
//		revstr[strlen(str)-i]=str[i-1];
//	}
//	if(strcmp(str,revstr)==0){
//		printf("palindrom");
//	}else{
//		printf("not palindrom");
//	}
//}



////8. Sum of Digits
////Write a program to find the sum of digits of a given number.
//int arr[] = {1,2,3,4,5};
//int i =0;
//int sum = 0;
//for(i=0 ;i<sizeof(arr)/sizeof(arr[0]);i++){
//	sum += arr[i];
//}
//printf("sum is = %d\n",sum);


////9. Prime Number Check
////Write a program to check whether a given number is prime.
//int num = 2;
//int count =0;
//int i =0 ;
//for(i=2;i<num;i++){
//	if(num % i == 0){
//		count++;
//	}
//	
//}
//if(count>0){
//	printf("not prime %d",num);
//	
//}else{
//	printf("prime %d",num);
//}


////10. Fibonacci Sequence
////Write a program to print the Fibonacci sequence up to a given number of terms.
//int value = 5;
//int first = 0;
//int second = 1;
//int sum = 0;
//int i =0;
//for(i=0; i<value;i++){
//	sum = first +second;
//	
//	printf(" loop %d\n",sum);
//	first = second;
//	second = sum;
//}
//printf("%d\n",sum);



////11. GCD of Two Numbers
////Write a program to find the greatest common divisor (GCD) of two numbers.
//int a = 20,b=46,i=0,gcd;
//for(i=2;i<=a && i<=b;i++){
//	if(a%i == 0 && b%i ==0){
//		gcd = i;
//	}
//}
//printf("%d",gcd);

////12. LCM of Two Numbers
////Write a program to find the least common multiple (LCM) of two numbers.
//int a=20;
//int b=46;
//int i=0;
//int gcd= 1;
//for(i=1;i<=a && i<=b;i++){
//	if(a%i == 0 && b%i ==0){
//		gcd = i;
//	}
//}
//printf("%d\n",gcd);
//int lcm = a*b/gcd;
//printf("%d",lcm);



////13. Leap Year Check
////Write a program to check whether a given year is a leap year.
//int year = 1999;
//if((year % 4 == 0 && year %100 != 0) || year % 400 == 0){
//	printf("leap year");
//}else{
//		printf("not leap year");
//}

////14. Simple Calculator
////Write a program to create a simple calculator that can add, subtract, multiply, and divide two numbers.
//
//int a;
//printf("enter number a");
//scanf("%d",&a);
//int b = 4;
//printf("enter number b");
//scanf("%d",&b);
//int c;
//printf("enter number \n 1. to add \n 2. to multiply \n 3. to divide \n 4. to substart ");
//scanf("%d",&c);
//
//if(c == 1){
//
//printf("%d\n",a+b);}
//else if(c == 2){
//
//printf("%d\n",a*b);}
//else if(c == 3){
//
//printf("%d\n",a/b);}
//else if(c == 4){
//
//printf("%d\n",a-b);}
//else{
//	printf("not valid");
//}


//15. Sum of Array Elements
//Write a program to find the sum of all elements in an array.
//int arr[] = {1,2,3,4,5};
//int i =0;
//int sum = 0;
//for(i=0 ;i<sizeof(arr)/sizeof(arr[0]);i++){
//	sum += arr[i];
//}
//printf("sum is = %d\n",sum);


////16. Largest Element in an Array
////Write a program to find the largest element in an array.
//char arr[] ={1,9,8,7,6,5,4,3,2};
//int i,j,len=sizeof(arr)/sizeof(arr[0]);
//for(i=0;i<len;i++){
//	for(j=i+1;j<len;j++){
//		if(arr[i]>arr[j]){
//			int change = arr[i];
//			arr[i]=arr[j];
//			arr[j]=change;
//		//	printf("%d\n",arr[j]);
//			
//		}
//	}
//}
//    printf(" largest element %d",arr[len-1]);
    



////17. String Length
////Write a program to find the length of a string without using the built-in strlen function.
//char str[] = "123";
//int length = 0;
//int i = 0;
//while( str[i] != 0){
//	length ++;
//	i++;
//	
//	
//}
//printf("%d",length);


////18. String Reverse
////Write a program to reverse a string.
//   char str[10] = "hello";
//char rstr[10];
//int i = 0;
//for (i= strlen(str);i>0;i--){
// rstr[strlen(str)-i]= str[i-1];
//
//}
//	printf("%s",rstr);
//	
//    




////19. Swapping Two Numbers
////Write a program to swap two numbers without using a third variable.
//int a=6;
//int b=9;
//a = a+b;
//b = a-b;
//a= a-b;
//printf("a= %d\n",a);
//printf("b= %d\n",b);


////20. Swap Two Numbers Using Third Variable
////Write a program to swap two numbers using a third variable.
//int a = 6;
//int b =9;
//int temp = a;
//a = b;
// b=temp;
//printf("a %d\n",a);
//printf("b %d\n",b);

////21. ASCII Value of a Character
////Write a program to find and print the ASCII value of a character.
//char letter  ='p';
//printf("%d",letter); 
//or
// int value = letter;
// printf("%d",value);



////22. Convert Celsius to Fahrenheit
////Write a program to convert temperature from Celsius to Fahrenheit.
//int celsius = 32;
//int  Fahrenheit=(celsius*(3/2)+32);
//printf("%d", Fahrenheit);



////23. Convert Fahrenheit to Celsius
////Write a program to convert temperature from Fahrenheit to Celsius.
//int  f=64;
//int c = ((f-32)*5/9);
//printf("%d", c);


////24. Sum of First N Natural Numbers
////Write a program to calculate the sum of the first N natural numbers.
//int n = 10;
//int sum = 0;
//int i ;
//for( i = 0 ; i<=n ; i++){
//	sum += i;
//}
//printf("%d",sum);

////25. Check Vowel or Consonant
////Write a program to check whether a given character is a vowel or consonant.
//char str[] = "abeioucde";
//int i =0;
//for(i =0 ; i<strlen(str);i++){
//	if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ){
//		printf(" vowel %c\n",str[i]);
//	}else{
//			printf(" consonant %c\n",str[i]);
//	}
//}


////26. Check Alphabet, Digit, or Special Character
////Write a program to check whether a character is an alphabet, digit, or special character.
//char character = '6';
//
//if( (character >= 'A'&& character<='Z')|| (character >= 'a'&& character<='z')){
//	printf("alphabet");
//}
//else if( character >= '0'&& character<='9'){
//		printf("digit");
//}else{
//		printf("special character");
//}



////27. Count the Number of Digits in an Integer
////Write a program to count the number of digits in a given integer.
//int number = 123;
//char str[0];
//sprintf(str,"%d",number);
//printf("%d",strlen(str));



////28. Reverse a String
////Write a program to reverse a given string.
//char rstr[10];
//int i = 0;
//for (i= strlen(str);i>0;i--){
// rstr[strlen(str)-i]= str[i-1];
//
//}
//	printf("%s",rstr);
//	

//29. Check the Alphabetic Order of Two Strings
//Write a program to check whether two strings are in alphabetic order.
// char a = 'a';
// char b = 'b;;
// int a1 = a;
// int b1 = b;
//if(a1> a2){
//	printf("Alphabetic Order");
//}else{
//		printf(" not Alphabetic Order");
//}

////30. Calculate the Power of a Number
////Write a program to calculate the power of a number using a loop.
//int power = 3, num = 6,i,mul;
//for(i =0;i<power;i++){
//	mul *= num;
//}
//printf("%d",mul);


////31. Print All Prime Numbers Between Two Numbers
////Write a program to print all prime numbers between two given numbers.
//int a = 100,b =1,i,j;
//
//if(a>b){
//    int temp = a;
//    a =b;
//    b =temp;
//}else{
//    printf("\n");
//}

//for(i = a;i<=b;i++){
//    if(i == 1){
//	// printf(" not prime  %d\n",a);
//	i++;
//}
//	int count = 0;
//	for(j =2 ;j<i;j++){
//		if(i%j == 0){
//			count ++ ;
//		}
//	}
//	if(count == 0 ){
//		printf("prime       %d\n",i);
//	}
////	else{
////		printf(" not prime  %d\n",i);
////	}
//}


////32. Check Armstrong Number
////Write a program to check whether a given number is an Armstrong number.
//int number1 = 123;
//
//char  num[20] ;
//sprintf(num,"%d",number1);
//// printf("%d\n",strlen(num));
//int  i,sum = 0;
//for(i=0;i<strlen(num);i++){
//	int number = num[i]-48;
////	printf("%d\n",number);
//	int value = pow(number, strlen(num));
//	sum += value;
//	//printf("loop %d\n",value);
//}
//
//
//if( sum == number1){
//	printf(" %d armstrong number \n",number1);
//}else{
//	printf("  %d not armstrong number \n ",number1);
//	
//}

//or

//int num1 = 153,num = num1,num2= num1,sum = 0,len=0,i;
//while(num1 != 0){
//    num1 /=10;
//    len++;
//}
//
//while(num != 0){
//    int digit = num%10;
//    int mul = pow(digit,len);
//    sum += mul;
//    num = num/10;
//
//}
//if(sum == num2){
//    printf("armstrong");
//}else
//{
//    printf("not armstrong");
//}



//33. Calculate the Average of Numbers in an Array
//Write a program to calculate the average of all the numbers in an array.
//int arr[] = {1,2,3,4,5,6},i,sum;
//int len=sixeof(arr)/sizeof(arr[0]);
//for(i=0;i<len;i++){
//	sum += arr[i];
//}
//int avg = sum/len-1;
//printf("%d",avg);
//return 0;




//34. Find the Second Largest Number in an Array
//Write a program to find the second-largest number in an array.
//
//
//int arr[]={1,4,6,9,7,2};
//// printf("%d",arr[3]);
//int lar = 0;
//int seclar = 0,i;
//int length = sizeof(arr)/sizeof(arr[0]);
//for(i = 0;i<length;i++){
//    for(int j = i +1;j<length;j++){
//        if(arr[i]>arr[j]){
//            int digit = arr[i];
//            arr[i] = arr[j];
//            arr[j] = digit;
//        }
//    }
//    
//}
//printf("%d\n",arr[length-2]);
// 

////35. Check If a Number is a Perfect Square
////Write a program to check if a given number is a perfect square. A perfect square is an integer that is the square of an integer. For example, 9 is a perfect square since it equals 3² and can be written as 3 × 3.
////
//float num  = 79;
//int root = sqrt(num);
//if(num == (root * root)){
//
//printf("num is perfect squre %.0f",num);
//}else{
//	
//printf("num is not perfect squre %.0f",num);
//}