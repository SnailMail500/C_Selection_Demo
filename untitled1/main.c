//DO NOT RUN

#include <stdio.h>
//This is a "header file library" that lets us work with input and outputs
int main() {//This is a comment. And int main is the main function
    printf("Hello, World!\n");//Statements must be followed by a semicolon.
    printf("How are you?\n?\n");//might as well end all printf statements with \n as it makes it work
    // \t will add a tab, \\ inserts backslash, \" adds quotation marks
    return 0;
    //return 0 ends the function. This is needed all the time in c- no subroutines here!
    /*this is a
     * multiline comment*/

    /*C VARIABLES
     * variables are set as follows:
     * type varName = value;*/

    int num = 15;

    /*or:
     * int num;
     * num = 15;*/

    /*printf will not print this (printf(num) won't work*/
    //it needs a "format specifier"- to tell the compiler the datatype
    //it starts with a percentage sign then a char, e.g. %d for an integer

    printf("%d", num);

    //Aah. Lovely.

    // FS: "%d"- int, "%c"- char, "%f"- float
    //You know those data types...

    printf("The number is: %d", num);
    //concatenate with commas.

    num = 10;
    //Value of num changed. easy.

    int num2 = 24;

    num = num2;

    //works the same with variables

    int sum = num + num2;
    printf("%d", sum);
    //here's the revelation that variables can be added

    /*variables can be declared as such:
     * int x = 5, y = 6, z = 50;
     * which seems pretty useful*/
    //try to keep identifiers short and efficient.

    /*right, here's some conditions for identifiers:
     * can contain letters, digits, underscores ONLY
     * must begin with letter or underscore
     * case sensitive
     * cannot contain whitespace
     * reserved words, e.g., int, char, etc cannot be used*/

    /*DATA TYPES!
     * int- 2 or 4 byte whole number- %d or %i
     * float- 4 byte decimal that can store 6 ish digits- %f/%F
     * double- big float. 8 bytes, 15 digits- %lf
     * char- 1 byte- single character, letter-%c
     * %s for string- (but that's for later)*/
    // you can use ASCII values with char. Fun. DO NOT SURROUND WITH QUOTATIONS
    // surround all chars with ''

    /*STRINGS
     * to create a sting, you must create an array of characters, e.g.
     * char msg[] = "KERNEL PANIC";
     * printf("%s", msg");*/

    //in a float, an e is used to represent 10^x
    //e.g. float num3 = 3e3;
    //a bit like the x10^x button on a calculator.

    //to specify decimal precision, add a . and a number to show
    //the number of decimal points. e.g. "%.3f" will allow a float
    // to be printed to 3 decimal places.

    /* to find the memory size, use sizeof(var),
     * which will show the size of the variable in bytes,
     * useful in c as it is not memory manages, and not
     * garbage collected
     * using the right data type will save memory and improve
     * performance. yay.*/

    //for size of, you need to use "%lu" as it outputs a
    //long unsigned int instead of an integer. ffs.

    /* to cast a variable to another data type (type conversion),
     * there are 2 types in c
     * implicit and explicit.
     * implicit conversion means that the compiler does it automatically
     * e.g. when you do this
     * float flt = 9;
     * printf("%f", flt);
     * implicit conversion was done because an integer was assigned to a
     * variable that was initialised as a float
     * This can be a bit risky as you can lose control over values in certain
     * situations, e.g;
     * int num = 9.3455;
     * printf("%d", num);
     * this will get rid of the decimal places. without rounding. pain.
     *
     * this can also happen like this, where you don't expect it
     * float sum = 5 / 2;
     * printf("%f", sum)
     * This returns 2. Why?
     * the answer- this was INTEGER DIVISION...
     * so, you need to explicitly convert the values, e.g;
     * float sum = (float) 5 / 2;
     * printf("%f", sum);
     *
     * This gives 2.5. happy days*/

    /* CONSTANTS
     * if you don't want to change the variable:
     * const int NUM = 15;
     *
     * if you try to assign a variable to this, the compiler will throw a
     * wobbly. don't try it.
     *
     * it's considered good practice amongst c programmers to
     * declare them with uppercase identifiers, like shown above*/

    /* arithmetic in c
     *
     * + - addition
     * '-' - subtraction
     * * - multiplication
     * / - division
     * % - modulus- returns the remainder of a division
     * ++ - increment- increases the value of a variable by 1
     * -- - decrement- decreases the value of a variable by 1
     *
     *
     * ASSIGNMENT OPERATOR
     * int x = 10; will assign the number 10 to the variable x
     * the equals, in this case, a number to the variable
     *
     * += adds the value to the variable, e.g, x += 5
     * -= subtracts
     * *= multiplies
     * /= divides
     * &= does... something ( i think an and)
     * |= does an or
     * ^= does a xor
     * <<= left shift by
     * >>= right shift by
     *
     * COMPARISON OPERATOR
     *
     * == - equal to
     * != - not equal
     * >  - greater than
     * >  - less than
     * >= - grater than equal to
     * >= - less than equal to
     *
     * LOGICAL OPERATORS
     *
     * && - AND
     * || OR
     * ! NOT*/


}