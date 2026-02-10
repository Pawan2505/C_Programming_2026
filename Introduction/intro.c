
// #include<stdio.h>

// // function definition -> user define function -> global function -> Entry point of the program
// int abc(){

//     printf("Hello World");
//     return 0;
// }

// abc();



// #include<stdio.h>

// // function definition -> user define function -> global function -> Entry point of the program
// int abc(){

//     printf("abc");

//     return 0;
// }



// int main(){

//     printf("Hello World");
//     abc();
//     return 0;
// }

// main() -> invoke by OS

// abc() -> invoke by main()
// every function that is created by user is always invoked by main() function
// main() is the only function that is invoked by OS


// #include<stdio.h>

// int main(){

//     printf("Hello World");
//     return 0; 
// }


// return 0;  is optional in main function in C11 standard
// if we don't write return 0; in main function then also it will work perfectly fine

// printf("Hello World"); -> statement
// every statement in C language must end with a semicolon(;)
// if we don't write semicolon(;) at the end of the statement then it will throw a compile time error
// example -> printf("Hello World")  -> missing semicolon(;)  -> compile time error
// example -> printf("Hello World");  -> correct statement  -> no error
// printf -> library function (stdio.h) -> used to print output on the screen


// - Escape sequence characters (\n & \t)


// #include<stdio.h>
// int main(){
//     printf("Hey, How are you?");
//     printf("I'm fine.");
// }

// #include<stdio.h>
// int main(){
//     // printf("Hey, How are you?\t");
//     printf("Hey, How are you?  ");
//     printf("I'm fine.");
// }

// #include<stdio.h>
// int main(){
//     printf("Hey, How are you?\n");
//     printf("I'm fine.");
// }

// #include<stdio.h>
// int main(){
//     printf("Hey, How are you?");
//     printf("\nI'm fine.");
// }


// \t -> tab space -> one \t is equal to 4 spaces or 8 spaces depending on the compiler settings
// \n -> new line -> moves the cursor to the next line


// Datatype, constant & Variable


// Variable -> container to store data
// Datatype -> type of data that a variable can store
// c programming is statically typed language -> we have to specify the datatype of variable at the time of declaration



// Rule of Variable : 

// #include<stdio.h>
// int main(){

//     // Rule 1 : Variable name must start with a letter (a-z, A-Z) or underscore(_) or dollar sign($)

//     // int _a = 10;
//     // int $b = 20;

//     // printf("%d %d", _a, $b);

//     // Rule 2 : Variable name can contain letters (a-z, A-Z), digits (0-9), underscore(_) or dollar sign($)

//     // int a1 = 10;
//     // int b_2 = 20;

//     // printf("%d %d", a1, b_2);

//     // int 123a = 10; // invalid variable name
//     // int @a2 = 20; // invalid variable name
//     // int a-b = 30; // invalid variable name

//     // we can not use number (0-9) at the beginning of the variable name
//     // we can not use special characters like @, #, %, &, - etc in the variable name

//     // Rule 3 : Variable name cannot be a keyword or reserved word

//     // in c programming reserved words are 32 keywords

//     // like : int , float, char, return, if, else, for, while, do, switch, case, break, continue, void, static, const, sizeof, struct, union, enum, typedef, volatile, register, extern, auto, default, goto

//     // int if = 10; // invalid variable name
//     // we can not use keywords or reserved words as variable name


//     // Rule 4 : Variable name is case sensitive

//     // int a = 10;
//     // int A = 20;

//     // Rule 5 : Variable name should be meaningful

//     // int studentAge = 20;
//     // printf("Student Age: %d", studentAge);

//     // int salary = 50000;
//     // printf("\nSalary: %d", salary);

//     // Rule 6 : Variable name should not contain spaces

//     // int student Age = 20; // invalid variable name
//     // int student_Age = 20; // valid variable name
//     // printf("Student Age: %d", student_Age);

//     // Rule 7 : Variable name length is unlimited (but it is recommended to keep it short and meaningful)

//     // int thisIsAVeryLongVariableNameThatIsUsedToDemonstrateTheLengthOfVariableNamesInCProgrammingLanguage = 100;
//     // printf("%d", thisIsAVeryLongVariableNameThatIsUsedToDemonstrateTheLengthOfVariableNamesInCProgrammingLanguage);

//     // return 0;
// }



// Data Type in C Programming Language

// Type of Data Type

// 1. Primary Data Type (Basic Data Type)
// 2. Derived Data Type
// 3. User Defined Data Type
// 4. Void Data Type

// Primary Data Type (Basic Data Type)
// 1. int -> to store integer values (whole numbers) -> size of int is 4 bytes
// ex : 10, -5, 0, 100, -200
// 2. float -> to store floating point values (decimal numbers) - > size of float is 4 bytes
// ex : 10.5, -5.2, 0.0, 100.25, -200.75
// 3. double -> to store double precision floating point values (decimal numbers with more precision) -> size of double is 8 bytes
// ex : 10.555555, -5.222222, 0.000000, 100.123456, -200.987654
// 4. char -> to store single character values -> size of char is 1 byte
// ex : 'A', 'a', '0', '#', '$'
// -> char value should be enclosed in single quotes(' ')
// 5. void -> to represent no value or no data type -> size of void is 0 bytes

// string datatype is not present in C programming language
// to store string values we use char array (array of characters) -> we create string using char array
// ex : char str[20] = "Hello World";
// use double quotes(" ") to store string values in char array

// 2. Derived Data Type : this datatype is derived from primary data type

// 1. array -> to store multiple values of same data type
// ex : int arr[5] = {1, 2, 3, 4, 5};

// 2. pointer -> to store address of a variable
// ex : int *ptr;

// 3. function -> to store a block of code that performs a specific task

// ex :

// int add(int a, int b){
//          return a + b;
//      }


// 3. User Defined Data Type : this datatype is defined by user

// 1. struct -> to store multiple values of different data types
// ex :
// struct Student {
//     int id;
//     char name[50];
//     float marks;
// };

// 2. union -> to store multiple values of different data types but only one value at a time
// ex :
// union Data {
//     int i;
//     float f;
//     char str[20];
// };


// 3. enum -> to store a set of named integer constants
// ex :
// enum Day { Sunday = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

// Constant -> fixed value that cannot be changed during the execution of the program
// Variable -> container to store data that can be changed during the execution of the program

// Types of Constant :
// 1. Literal Constants -> fixed values that are directly written in the code
// ex : 10, 3.14, 'A', "Hello"

// 2. Symbolic Constants -> named constants that are defined using #define or const keyword
// ex :
// #define PI 3.14  // MICRO definition
// const int MAX_SIZE = 100; // constant variable -> USING CONST KEYWORD

// Note : 
// const variable is a variable whose value cannot be changed after initialization
// const variable must be initialized at the time of declaration
// we can use const keyword with any data type (int, float, char, etc)
// const variable is read-only variable
// const variable alwasy in capital letters by convention but it is not mandatory


// Format Specifier ->
// placeholder used in printf() and scanf() functions to specify the type of data to be printed or read

// printf() -> used to print output on the screen
// scanf() -> used to read input from the user

// Commonly used format specifiers in C programming language :

// % -> format specifier starts with percentage symbol(%) or modulus symbol(%)

// %d -> to print or read -> integer values -> int data type
// %f -> to print or read -> floating point values -> float data type
// %lf -> to print or read -> double precision floating point values -> double data type
// %c -> to print or read -> single character values -> char data type
// %s -> to print or read -> string values (array of characters) -> char array


// Advance : 

// %u -> to print or read -> unsigned integer values -> unsigned int data type
// unsigned int -> to store only positive integer values (0 and above) -> size of unsigned int is 4 bytes

// %i -> to print or read -> integer values -> int data type

// %p -> to print or read -> address of a variable -> pointer data type

// %x -> to print or read -> hexadecimal values -> int data type

// %o -> to print or read -> octal values -> int data type

// %e -> to print or read -> scientific notation (exponential form) -> float or double data type


// #include<stdio.h>

// int main(){
//     int age = 12;
//     float salary = 54352.34;

//     // printf("%d",age);
//     printf("Your age is : %d\n",age);
//     printf("Your salary is : %0.2f",salary);
// }


// #include<stdio.h>

// int main(){

//     int age; // variable declaration

// //    int age = 20; // Error : we can not redeclare the same variable in the same scope

//     age = 24; // variable initialization
//     printf("Your age is : %d\n",age);
//     age = 26; // variable re-initialization

//     // Note : we can initialized any variable multiple times in the same scope but we can not redeclare the same variable in the same scope 

//     printf("Your age is : %d",age);
// }



// #include<stdio.h>

// int main(){

//     int age = 25; 

//     printf("Your age is : %d\n",age);

//     float price = 99.99;
//     printf("Your price is : %0.2f\n",price);

//     double cgpa = 3.75f;
//     printf("Your CGPA is : %0.2lf\n",cgpa);

//     char grade = 'A';
//     printf("Your grade is : %c\n",grade);

//     char name[] = "Pawan\0Maurya";

//     // null character (\0) -> to indicate the end of the string in char array

//     printf("Your name is : %s\n",name);

// }

// Scanf() function -> to read input from the user
// syntax : scanf("format specifier", &variable_name);
// & -> address of operator -> used to get the address of a variable


// #include<stdio.h>

// int main(){
//     int age;
//     printf("Enter Your age : ");
//     scanf("%d",&age);

//     printf("Your age is : %d",age);

//     // Note : while using scanf() function always use & (address of operator) before the variable name .
// }


//  Constant


// #include<stdio.h>

// int main(){

//     // int age; // variable declaration

//     int age = 22; // variable declaration and initialization

//     printf("Your age : %d\n",age);

//     float price = 99.99;

//     printf("\nPrice : %0.2f\n",price);

//     char grade = 'A';

//     printf("\nGrade : %c\n",grade);

//     char username[] = "Pawan Maurya";

//     printf("\nUsername : %s\n",username);

//     double cgpa = 3.75;

//     printf("\nCGPA : %0.2lf\n",cgpa);


// }


// Note : in c programming string datatype value is stored in double quotes(" ") and char datatype value is stored in single quotes(' ')




// #include<stdio.h>

// int main(){

    
//     // int age = 22; // variable declaration and initialization

//     int age; // variable declaration

//     printf("\nPlease enter your age : ");

//     scanf("%d",&age);

//     printf("Your age : %d\n",age);



//     float price;

//     printf("\nPlease enter the price : ");

//     scanf("%f",&price);

//     printf("\nPrice : %0.2f\n",price);




//     char grade;

//     printf("\nPlease enter your grade : ");

//     scanf(" %c",&grade);

//     printf("\nGrade : %c\n",grade);




//     char username[100]; // Assuming maximum 100 characters for username

//     printf("\nPlease enter your username : ");

//     scanf("%[^\n]",username);

//     printf("\nUsername : %s\n",username);




//     double cgpa;

//     printf("\nPlease enter your CGPA : ");

//     scanf("%lf",&cgpa);

//     printf("\nCGPA : %0.2lf\n",cgpa);


// }



// #include<stdio.h>

// int age = 29; // global variable declaration

// int main(){
//     int age; // local variable declaration

//     // int age = 22; // Error : we can not redeclare the same variable in the same scope

//     // any variable can be declared only once in the same scope

//     age = 24; // local variable initialization

//     printf("Local Age : %d\n",age);

//     // age = 30; // local variable re-initialization

//     // printf("Local Age : %d\n",age);

//     // printf("Global variable : %d",::age); // like cpp programming accessing global variable using scope resolution operator(::) we can not access global variable using scope resolution operator(::) in c programming language
// }

// // Note : global variable can we accessed in local scope directly when local variable with same name is not present in the local scope
// // if local variable with same name is present in the local scope then local variable will take precedence


// #include<stdio.h>

// int main(){

//     char username[] = "Pawan Maurya";

//     printf("%s",username);
// }


// #include<stdio.h>

// int main(){

//     char username[100];

//     printf("Enter username : ");
//     scanf("%[^\n]",&username);

//     printf("%s",username);
// }



// constant : 

// 1. MICRO constant -> defined using #define preprocessor directive

// Ex : #define PI 3.14159

// 2. constant variable -> defined using const keyword

// Ex : const int MAX_SIZE = 100;


// Note : 
// const variable must be initialized at the time of declaration
// const variable is read-only variable
// const variable alwasy in capital letters by convention but it is not mandatory

// during micro constant definition we do not use semicolon(;) at the end of the line
// but while defining constant variable using const keyword we use semicolon(;) at the end of the line as we use in normal variable declaration
// in micro no datatype is specified but in constant variable datatype must be specified like normal variable declaration
// in micro constant no assigning value is done using equal to(=) operator but in constant variable assigning value is done using equal to(=) operator like normal variable declaration and initialization



// #include<stdio.h>
// #define x 15
// #define y 12

// int main(){


//     printf("Sum (x) :%d  and (y) :%d : %d",x,y,( x + y));
// }

// Method 1 : micro constant using #define preprocessor directive

// #include<stdio.h>
// #define x 15   // Note : it is global constant definition, so we can use it anywhere in the program
// #define y 12  // Note : it always define in global scope not in local scope

// int main(){

//     // x = 122; // Note : We can not change the value of micro constant value once it is defined because it is read-only value

//     printf("Sum (x) :%d  and (y) :%d : %d",x,y,( x + y));
// }


// Method 2 : constant variable using const keyword


// #include<stdio.h>

// int main(){
//    const int GRID = 9898;

//     // GRID = 6798; //Error :  assignment of read-only variable 'GRID'
//     printf("Your GRID : %d",GRID);
// }


// #include<stdio.h>

// int main(){
//    const int GRID; //  Note : You need to declared and assign value is same. You can not assign Const variable is next - line

// //    GRID = 3456; // Error :   assignment of read-only variable 'GRID'

//     printf("Your GRID : %d",GRID);
// }


// #include<stdio.h>

// int main(){
//    const int GRID = 23456; //  Note : You need to declared and assign value is same. You can not assign Const variable is next - line

// //    GRID = 3456; // Error :   assignment of read-only variable 'GRID'

//     printf("Your GRID : %d",GRID);
// }


// #include<stdio.h>

// int main(){
//    const int GRID;

//    printf("Enter Your GRID : ");

//    scanf("%d",&GRID);  // Note : Only in case of user input of const variable we can assign value using scanf function in next - line

//    printf("Your GRID : %d",GRID);
// }


// Operator & Expression : 


// 1. Uniary Operator -> operator(symbols) that works on a single operand(variable or constant)

// 1. ++ : increment operator -> increases the value of operand by 1

// post increment : num++ -> first use the value of operand then increase it by 1
// pre increment : ++num -> first increase the value of operand by 1 then use it

// 2. -- : decrement operator -> decreases the value of operand by 1
// post decrement : num-- -> first use the value of operand then decrease it by 1
// pre decrement : --num -> first decrease the value of operand by 1 then use it

// #include<stdio.h>

// int main(){
//     int num = 10;
//     printf("The value of num : %d\n",num++); // 10
//     printf("The value of num : %d\n",num++); // 11
//     printf("The value of num : %d\n",++num); // 13
// }


// Arithmetic Operator -> operators(symbols) that are used to perform mathematical operations on operands(variables or constants)
// 1. + : addition operator -> adds two operands
// 2. - : subtraction operator -> subtracts second operand from first operand
// 3. * : multiplication operator -> multiplies two operands
// 4. / : division operator -> divides first operand by second operand
// 5. % : modulus operator -> returns the remainder of division of first operand by second operand (only works with integer operands)

// #include<stdio.h>
// int main(){
//     int a = 20;
//     int b = 4;

//     printf("Addition : %d\n",a + b); // 24
//     printf("Subtraction : %d\n",a - b); // 16
//     printf("Multiplication : %d\n",a * b); // 80
//     printf("Division : %d\n",a / b); // 5
//     printf("Modulus : %d\n",a % b); // 0
// }


// #include<stdio.h>
// int main(){
//     int a = 20;
//     int b = 40;

//     printf("Modulus : %d\n",a % b); //Note : when first value is smaller than second value then modulus operator(%) will return the value of first value itself 
// }


// Relational Operator -> operators(symbols) that are used to compare two operands(variables or constants) and return a boolean value (true or false)
// 1. == : equal to operator -> returns true if both operands are equal
// 2. != : not equal to operator -> returns true if both operands are not equal
// 3. > : greater than operator -> returns true if first operand is greater than second operand
// 4. < : less than operator -> returns true if first operand is less than second
// 5. >= : greater than or equal to operator -> returns true if first operand is greater than or equal to second operand
// 6. <= : less than or equal to operator -> returns true if first operand is less than or equal to second operand
// Note : in c programming true is represented by 1 and false is represented by 0


// #include<stdio.h>
// int main(){
//     int a = 22;
//     int b = 40;

//     printf("Equal to : %d\n",a == b); //
//     printf("Not Equal to : %d\n",a != b); //
//     printf("Greater than : %d\n",a > b); // 
//     printf("Less than : %d\n",a < b); // 
//     printf("Greater than or Equal to : %d\n",a >= b); // 
//     printf("Less than or Equal to : %d\n",a <= b); // 
// }


// Logical Operator -> operators(symbols) that are used to combine multiple relational expressions and return a boolean value (1 or 0)
// 1. && : logical AND operator -> returns true if both operands are true
// 2. || : logical OR operator -> returns true if at least one operand is true
// 3. ! : logical NOT operator -> returns true if operand is false and false if operand is true

// true -> 1
// false -> 0
// 1. logical AND operator

// true && true -> true
// false && true -> false
// true && false -> false


// 2. logical OR operator

// false || true -> true
// true || false -> true
// false || false -> false


// 3. logical NOT operator 

//  !false -> true
//  !true -> false


// #include<stdio.h>

// int main(){

//     int brother_age = 20;
//     int sister_age = 10;

//     printf("%d\n", (brother_age == sister_age) && (brother_age >= sister_age));
//     printf("%d\n", (brother_age < sister_age) && (brother_age >= sister_age));
//     printf("%d\n", (brother_age > sister_age) && (brother_age >= sister_age));
// }

// #include<stdio.h>

// int main(){

//     int brother_age = 20;
//     int sister_age = 10;

//     printf("%d\n", (brother_age == sister_age) || (brother_age <= sister_age));
//     printf("%d\n", (brother_age < sister_age) || (brother_age >= sister_age));
//     printf("%d\n", (brother_age > sister_age) || (brother_age >= sister_age));
// }


// #include<stdio.h>

// int main(){

//     int brother_age = 20;
//     int sister_age = 10;

//     printf("%d\n", !((brother_age == sister_age) || (brother_age <= sister_age)));
//     printf("%d\n", !((brother_age < sister_age) && (brother_age >= sister_age)));
//     printf("%d\n", !((brother_age > sister_age) || (brother_age >= sister_age)));
// }


// Assignment Operator -> operators(symbols) that are used to assign values to variables
// 1.   simple assignment operator -> assigns the value of right operand to left operand
// 2. += : addition assignment operator -> adds the value of right operand to left operand and assigns the result to left operand
// 3. -= : subtraction assignment operator -> subtracts the value of right operand from left operand and assigns the result to left operand
// 4. *= : multiplication assignment operator -> multiplies the value of right operand with left operand and assigns the result to left operand
// 5. /= : division assignment operator -> divides the value of left operand by right operand and assigns the result to left operand
// 6. %= : modulus assignment operator -> calculates the modulus of left operand by right operand and assigns the result to left operand


// int age = 22;


// #include<stdio.h>
// int main(){
    
//     float price = 99;

//     printf("Your price : %0.2f\n",price);
// }

// Note : float type variable can store both integer and decimal values

// #include<stdio.h>
// int main(){
    
//     float price = 99;

//     // price = price + 100.5;

//     price += 100.5;

//     printf("Your price : %0.2f\n",price);
// }


// Ternary Operator -> operator(symbol) that works on three operands(variables or constants)

// syntax : condition ? expression1 : expression2;

// condition -> true -> expression1
// condition -> false -> expression2


// #include<stdio.h>

// int main(){

//     int num1 = 850;

//     int num2 = 100;


//     (num1>num2)? printf("%d is greater from %d (statement1)",num1, num2):printf("%d is greater from %d (satement2)",num2, num1);
// }


// Type Casting -> converting one data type to another data type

// 1. Implicit Type Casting -> automatic type conversion done by the compiler when we assign a value of one data type to a variable of another data type

// 2. Explicit Type Casting -> manual type conversion done by the programmer using type casting operator


// Implicit Type Casting
// #include<stdio.h>

// int main(){
//     int shirt_price = 300;
//     float paint_price = 1000.50;

//     float total_price = shirt_price + paint_price;

//     printf("Total price : %0.2f", total_price);
// }


// Explicit Type Casting

// #include<stdio.h>

// int main(){
//     int shirt_price = 300;
//     float paint_price = 1000.50;

//     int total_price = shirt_price + (int)paint_price;

//     printf("Total price : %d", total_price);
// }


// Control Stracture : it is used to control the flow of the program based on certain conditions or loops
// 1. Conditional Statements -> used to execute a block of code based on certain conditions

// true - > block of code executed
// false -> block of code not executed

// 1. if statement -> used to execute a block of code if a condition is true

// 2. if-else statement -> used to execute a block of code if a condition is true and another block of code if the condition is false

// 3. else-if statement -> used to execute a block of code if a condition is true and another block of code if the condition is false and another block of code if the condition is false and so on


// #include<stdio.h>

// int main(){

//     int age;

//     printf("Enter your age : ");

//     scanf("%d",&age);

//     if(age>=18){
//         printf("You are eligible to watch movie");
//     }else{
//         printf("Please watch cartoon");
//     }

// }


// #include<stdio.h>

// int main(){

//     int age;

//     printf("Enter your age : ");

//     scanf("%d",&age);


//     if(age <= 18){
//         printf("Intrested to watch cartoon video");
//     }
//     else if(age <= 30){
//         printf("Intrested to watch science frinction and love story movie");
//     }
//     else if(age >30 && age <= 80){
//          printf("Intrested in spritual movies");
//     }else{
//         printf("Go to hevan");
//     }

// }

// &,|,^,~


// #include<stdio.h>

// int main(){
//     int x = 10;
//     int y = 5;

//     printf("%d",x&y);
// }


// #include<stdio.h>

// int main(){
//     int x = 10;
//     int y = 5;

//     printf("%d",x|y); // 15
// }

// #include<stdio.h>

// int main(){
//     int x = 10;
//     int y = 5;

//     printf("%d",x^y); // 15
// }


// 1 | 1 = 0
// 0 | 0 = 0
// 0 | 1 = 1
// 1 | 0 = 1

// #include<stdio.h>

// int main(){
//     int x = 10;

//     printf("%d",~x); // -(n+1) => -11
// }


// if statement

// #include<stdio.h>

// int main(){
//     int age = 20;

//     if(age >= 18){
//         printf("You are eligible to watch movie.\n");
//     }

//     if(age >= 20){
//         printf("you can play game.");
//     }
// }


// #include<stdio.h>

// int main(){
//     int age = 20;

//     if(age >= 18){
//         printf("You are eligible to watch movie.\n");
//     }

//    else if(age >= 20){
//         printf("you can play game.");
//     }

// }


