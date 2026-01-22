
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
