//1.
// #include <stdio.h>
//  int main(){

//     int marks = 92;
//     int year = 2034;
//     int quantity = 00;

//     double e = 2.89678748;

//     printf("the value eulers no. is %lf\n", e);
//     double pi = 3.1415945;
//     printf("the value of pi is %lf\n", pi);
//     float gpa = 4.5;
//     float profit = 100.0956;
//     float loss = 2.5;
//     printf("the loss generated was ₹ %.2f\n", loss);

//     printf("the profit generated was ₹ %f\n", profit);
//     printf("my gpa is %.10f\n", gpa);

//     printf("you have ordeered %d items\n", quantity);

//     printf("the yris %d\n", year);

//     printf(" i got %d marks in my maths exam\n", marks);
//     return 0;
//  }

 //%d is used for int values wherre as %f is used for float values. however double is oten used to store the decimal values upto 16 digits.
 //and the format specifier for the double is %lf.

//these were for the number 
//  for  
// 2.
// #include <stdio.h>

// int main(){

//     char name = 'H';
//     char grade = 'p';
//     char CURRENCY = 'h';

//     printf("my name is %c\n", name);
//     printf("my grade is %c\n", grade);
//     printf("the currency i use is %c\n", CURRENCY);


//     return 0;
// }

// notes char is used to store a single charecter and format specifier used is %c.
// in order to use multiple charecters we can use square brackets [] to store the charecters
//3.
// #include <stdio.h>
// int main(){

//     char name[7] = "Harsith";
//     char university[45] = " MAHINDRA UNI ";
    
//     printf("MY NAME IS %s\n", name);
//     printf(" i am studying at %s\n", university);
//     return 0;
// }



// //4
// #include <stdio.h>
// #include <stdbool.h>
// int main(){

//     bool isWorking = true;

//     if(isWorking){
//         printf("harsith is working" );
//     }

//     else{
//         printf("harsith is not working");
//     }
    
//      return 0;
//     }

// #include <stdio.h>
// int main(){

//     int age = 20;
//     float height = 174.5;
//     char gpa = 'A';
//     char name[] = "Harsith";

//     printf("%s\n", name);
//     printf("%8d\n", age);
//     printf("%c\n", gpa);
//     printf("%f\n", height);
//     return 0;
// }

// #include <stdio.h>
// int main(){

//     int x = 15;
//     int y = 7;
//     int z =0;

    //x=x+2; or x+=2; will incremwnt the value of x by 2
    //z = x+y;
    //printf("the sum of x and y is %d\n", z);
    

    // #include <stdio.h>
    // int main(){

    //     int x = 15;
    //     float age = 17;
    //     double height = 174.5;
    //     char gpa = 'A';
    //     char name[] = "Harsith"; 
    //     return 0;
    // }


    //user input 


    // #include <stdio.h>
    // int main(){

    //     int age = 17;
    //     float height = 174.5;
    //     char gpa = 'A';
    //     char name[20] = "Harsith";

    //     printf("%d\n", age);
    //     printf("%f\n", height);
    //     printf("%c\n", gpa);
    //     printf("%s\n", name);   

    //     return 0;
    // }

    
    // #include <stdio.h>
    // int main() {

        // int age = 0;
        // float gpa = 0.0f;
        // int Maths = 0;
        // int Chem = 0;
        // int Phy = 0;
        // char grade = '\0';
        // char Name[25]= "";
        // char University[35] = "";
        // char Course[26] = "";

        // printf("Enter your age: ");
        // scanf("%d", &age);

        // printf("Enter your gpa: ");
        // scanf("%f", &gpa);

        // printf("Enter your marks in Maths: ");
        // scanf("%d", &Maths);

        // printf("Enter your marks in chem:");
        // scanf("%d", &Chem);

        // printf("Enter your marks in Phy: ");
        // scanf("%d", &Phy);

        // printf("Enter your grade: ");
    //     scanf(" %c", &grade);
        
    //     getchar();
    //     printf("Enter your name: ");
    //     // scanf(" %s", Name);
    //     fgets(Name, sizeof(Name), stdin);


    //     // getcahr();
    //     //printf();
    //     //fgets(Name, size of(Name), stdin);


    //     printf("Enter your University:");
    //     scanf(" %s", University);

    //     printf("Enter your course: ");
    //     scanf(" %s", Course);

    //     return 0;
    // }


    // SHOPPING CARTY PROGRAM

//     #include <stdio.h>

//     int main() {

//     char item[50] = "";
//     float price = 0.0f;
//     int quantity = 0;
//     char currency = '$';
//     float total = 0.0f;

//     printf("what items do u want to buy?: ");
//     fgets(item, sizeof(item), stdin);

//     printf("how many items do you want to buy?:");
//     scanf("%d", &quantity);

//     printf("what is the price of the item?:");
//     scanf("%f", &price);

//     total = quantity * price;
    

//     printf("%f", total);

//     return 0;
// }

// #include <stdio.h>

// int main() {

//     char item[100] = "";
//     float price = 0.0f;
//     int quantity = 0;
//     char currency = '$';
//     float total = 0.0f;

//     fgetchar(); 
//     printf("What item do you want to buy?");
//     fgets(item, sizeof(item), stdin);

//     printf("What is the price of each?");
//     scanf("%f", &price);

//     printf("how many pieces do you need?");
//     scanf(" %d", &quantity);

//     total = price*quantity;
//     printf("the total cost of all products is %.2f", total);

    
//     return 0;
// }

// #include <stdio.h>

// int main() {

//     char item[150] = "";
//     float price = 0.0f;
//     int quantity = 0;
//     char currency = '$';
//     float total = 0.0f;

   
//     printf("what is the name of item?");
//     fgets(item, sizeof(item), stdin);
//     item[strlen(item) - 1] = '\0'; // Remove the newline character from the input
    //u can use this insted of getchar() to remove the newline character from the input string.
// make sure to #include <string.h> at the top of your code to use strlen() function.

//     printf("what was the price of the product?");
//     scanf("%f", &price);

//     printf("how many did u buy");
//     scanf("%d", &quantity);

//     total = price * quantity;

   

//     printf("the total cost is %f", total);

//     return 0;

// }

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// int main()  {

//     float y = 3.14;
   // the abs() is used to take a modulus of a number but make to. #include <stdlib.h> to use the abs() function
   // the fabs() is used to take a modulus of a float number but make sure to #include <math.h> to use the fabs() function
   // the fabs need only include math but abs need #include <stdlib.h> to use the abs() function
    // int x= floor(y);

    // to use log function use log();

    // float x = sin(y);
    // float x = log(y);
    // float x = cos(y);
    // float x = tan(y);



    // int x = abs(y);
    // int x = sqrt(y);
    // int x = pow(y, 5);
    // float x = round(y);
    // for ceiling the value of y we can use ceil()
    // and to round the no. to the least no we can use floor
    // so round is used to round off a number and pow is used to take a power of a number
    //sqrt is used to take sqrt of a numer


    // printf (" %f", x);
    //}


    // Calculating area of some specific geometry
    // #include <stdio.h> 
    // #include <math.h> 
    // #include <string.h>

    // int main() {

    //     char shape[100] = "";
    
    
    // printf("Please write the shape: ");
    // fgets(shape, sizeof(shape), stdin);

    // shape[strcspn(shape, "\n")] = '\0';

    // //shape[strcspn(shpae, "\n")] = '\0';

    // // for replacement of \n with nulkl terminator we use variable[strcspn(variable, "\n")] = '\0'

    // // foe comp we use strcmp like strcmp(shspe, "dphere") == 0

    // if(strcmp(shape, "Sphere") == 0)

    // {
    //     float r = 0;

    // printf("Enter the radius of the sphere: ");
    // scanf("%f", &r);

    // float Area = 4*3.14*r*r;
    // printf("The area of Sphere is %.3f\n", Area);

    // float volume = (4/3)*3.14*r*r*r;
    // printf("The volume of the sphere is %.3f\n", volume); 

    // }

    // else if (strcmp(shape, "Rectangle") == 0)

    // {
    //     int a,b;
    //     printf("Enter the value of bigger side: ");
    //     scanf("%d", &a);

    //     printf("Enter the value of smaller side: ");
    //     scanf("%d", &b);

    //     int Area = a*b;
    //     printf("The area of rectangle with sides as %d and %d is %d", a, b, Area);

    // }

    // else if (strcmp(shape, "Cuboid") == 0)

    // {
    //     int a, b, c, area, volume;
    //     printf("Enter the height of cuboid: ");
    //     scanf("%d", &a);

    //     printf("Enter the length of cuboid: ");
    //     scanf("%d", &b);



    //     printf("Enter the bredth of cuboid: ");
    //     scanf("%d", &c);

    //     area = 2*(a*b + b*c + c*a);
    //     volume = a*b*c;

    //     printf("The area of cuboid is %d\n", area);
    //     printf("The volume of cuboid is %d\n", volume);

    // }

    // return 0;
    // }


    // #include <stdio.h>

    // int main() {

    //     int marks;

    //     printf("Enter your marks here: ");
    //     scanf("%d", &marks);

    //     if(marks>=20){
    //         printf("That's good could do alot better");
    //     }
    //     else if(marks>=16){
    //         printf("That's totally crazy thing bro enjoy");
    //     }
    //     else if(marks==30){
    //         printf("thats insane kid good job");
    //     }

    //     return 0;
    // }

    // // in c language == compares the value but = assigns the variable value however the == symbol checks whether the other variables matches them or not'


// #include <stdio.h>
// #include <stdbool.h>

// int main(){

//     bool passed = false;

//     if(passed){
//         printf("ok thats great bro");
//     }
//     else{
//         printf("nah bro it's done maa kid");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){

//     char name[100] = "";

    
//     printf("Enter your name vro: ");
//     fgets(name, sizeof(name) , stdin);
// name[strcspn(name, "\n")] = '\0';

//     if(strlen(name)==0)
// {
//     printf("u havent entered your name pls enter to continue");
// }
// else{
//     printf("yea thats a cute name %s cant lie vro", name);
// }

// return 0;

// }

// #include <stdio.h>

// int main(){

//     int a=0;
//     printf("Enter your no. : ");
//     scanf("%d", &a);

//     if(a>0 && a<25){
//         printf("a lies betweem 0 and 25");
//     }
//     else {
//         printf("the no. is greater than 25");
//     }
//     return 0;
//}


// #include <stdio.h>
// int main(){

//     int a;
//     printf("Enter the day of week. ");
//     scanf("%d", &a);

//     //the switch statement are useful for so many cases


//     switch(a){
//         case 1: 
//         printf("the day is mon");
//         break;
//         // the break is used to maintain the switch if deleted then the switch gets broken

//         case 2:
//         printf("the day is tue");
//         break;
//         case 3:
//         printf("the day is wed");
//         break;
//         case 4:
//         printf("the day is thurs");
//         break;
//         case 5:
//         printf("the day is fri");
//         break;
//         case 6:
//         printf("the day is sat");
//         break;
//         case 7:
//         printf("the day is sun");
//         break;
//         default:
//         printf("")
//     }
// }

//lets do some practice que
//1.
// #include <stdio.h>
// int main(){

//     int a = 0;
//     printf("Enter the No. to check if its positive, neagtive or zero\n");
//     printf("Enter the no.: ");
//     scanf("%d", &a);

//     if(a==0){
//         printf("the no. is equal to zero");
//     }
//     else if(a>0){
//         printf("the no. is positive");

//     }
//     else{
//         printf("the no. is negative");

//     }
//     return 0;

// }

//2. simple calculator
// #include <stdio.h>
// int main(){
//     int a,b;
//     char operation = '\0';

//     printf("Enter the no.s: ");
//     scanf("%d %d", &a &b);
//     printf("Enter the operation to be don: ");
//     scanf("%c", &operation);

//     if(operation==)
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a , b , c;
//     printf("Enter the three numbers: ");
//     scanf("%d %d %d", &a ,&b ,&c);

//     int result = a%b == c ? printf("yes") : printf("no");
//     return 0;

// }

// #include <stdio.h>
// int main() {
//     int a , b , c;
//     printf("Enter the three numbers: ");
//     scanf("%d %d %d", &a ,&b ,&c);

//     int result = (a>b && b>c) ? printf("true") : printf("false");
    

//     return 0;

// }

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the no.s: ");
    scanf("%d %d", &a, &b);

    // bitwise and
    int r1 = a & b;
    printf("bitwise and of r1 is %d", r1);
    return 0;

}
