
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