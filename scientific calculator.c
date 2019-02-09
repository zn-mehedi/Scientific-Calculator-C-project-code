#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//this are functions which is used in the program
void user_manual();
int start_the_program();
int normal_calcultion();
int matrix();
int matrix_addition();
int matrix_subtraction();
int matrix_multiplication();
int matrix_transpose();
int factorial();
int prime();
int single_prime_number();
int total_prime_number();
int zero_diff_prime(int a);
int prime_checker_n_to_n(int a, int b);
int trigometry();
int rad_deg_con();
int trigonometry_function();
int value_generate(double radian_value, double degree_value1);
int logarithm_function();
int power_and_exponential();
int base_wise_converter();
int palindrome();
int unit_converter();//used 23 functions including main function
//start of main function
int main()
{
    while(1)//main function infinite while loop this can be terminated only by matching statements
    {
    printf("\n");//this is a big font word named, the calculator
    printf("                                              * * * * *  *     *  * * *\n");
    printf("                                                  *      *     *  *    \n");
    printf("                                                  *      * * * *  * *  \n");
    printf("                                                  *      *     *  *    \n");
    printf("                                                  *      *     *  * * *\n");
    printf("\n\n");
    printf("              * * * *      *      *        * * * *  *       *  *            *      * * * * *   * * * *   * * * \n");
    printf("              *   * *     * *     *        *   * *  *       *  *           * *         *      *       *  *    *\n");
    printf("              *          *   *    *        *        *       *  *          *   *        *      *       *  * * * \n");
    printf("              *     *   * * * *   *        *     *   *     *   *         * * * *       *      *       *  *  *  \n");
    printf("              * * * *  *       *  * * * *  * * * *    * * *    * * * *  *       *      *       * * * *   *   * \n");
    printf("\n\n\n\n");
    //permission of users
    printf("Type underscore:                                    Credit: Mehedi Hasan \n\n");
    printf("1.For start the program type 'enter'      Contact:  E-mail: zn.mehedi@gmail.com \n");
    printf("2.For user manual type 'help'                     Facebook:https://www.facebook.com/zn.mehedi \n");
    printf("3.For exit program type 'exit'                     Website:https://sites.google.com/diu.edu.bd/znmehedi/home \n");
    printf("\n\n");

    printf("Type:");
    char start[10], e[]="enter", h[]="help", end[]="exit";//start is the user given test string, e, h, end for matching input
    gets(start);//this will take users input
    system("cls");//this statement will clear previous text and operations shown in the console
    if(strcmp(start, e)==0)//this condition will check whether the users input is same to string e
    {
        system("cls");//
        start_the_program();//now the start_the_program function will be called when the condition will true
    }
    else if(strcmp(start, h)==0)//this condition will check whether the users input is same to string h
    {
        user_manual();//now user_manual function will be called when the condition will true
    }
    else if((strcmp(start, e)!=0)&&(strcmp(start, h)!=0)&&(strcmp(start, end)!=0))
    {
        printf("Sorry!\nYou've entered wrong keyword.\n");
        continue;//when all this condition will true this statement will take the program in the first of while loop
    }
    else if(strcmp(start, end)==0)
    {
        break;//when this condition will true this statement will make this loop break and the function will terminate
    }
    }
    return 0;
}
//end of the main function


//here the function will start
int start_the_program()
{
    //firstly this is a such a type of greetings.
    printf("\t\t\t\t\t\tBismillah ir-Rahman ir-Rahim\n\n\n\n\t\t\t\t\t\t\tSOLUTION SQUAD\n\n");
    printf("Hello! users.\nHow're you?\nHope you're well. Solution Squad is presenting you all a Scientific Calculator, which will provide you all to calculate\nmany kind of measurement in day to day life and also helps to calculate scientific calculations.\n");
    printf("\n\n\n");
    while(1)
    {

    char e1[10], type[]="yes", anti_type[]="no";//e1 is a string it's for storing the users input for permission
    printf("\n\n\nIf you want to use calculator, Press enter 'yes'\nOr\nFor Exit enter 'no'\n");//want to know
    printf("Type:");
    scanf("%s", &e1);//inputting e1 string
    system("cls");
    if(strcmp(e1, type)==0)//will check if the e1 is equal to type string, its will true when user will type yes
    {
        //ask to user what's they wanna to do
    printf("What types of calculation do you want?\nEnter those keys for your selection:\n\n");
    printf("\n#For Normal addition, subtraction, multiplication, division and remainder Enter key no. 1\n");
    printf("\n#For Matrix calculation Enter key no. 2\n\n#For Factorial calculation Enter key no. 3\n");
    printf("\n#For Prime number calculation Enter key no. 4\n\n#For Trigonometrical calculation Enter key no. 5\n");
    printf("\n#For Logarithm calculation Enter key no. 6\n\n#For Power & Exponential calculation Enter key no. 7\n");
    printf("\n#For Numerical base wise converter Enter key no. 8\n\n#For Palindrome checking Enter key no. 9\n");
    printf("\n#For Unit Converter Enter key no. 10\n");
    int calculator;//this integer is for taking the chosen  input for switch-case
    printf("Choose:");
    scanf("%d", &calculator);//inputting integer
    system("cls");
    switch(calculator)//user will travel to your destination function for your need, it will be done by switch case. It's the first switch case.
    {
    case 1://full complete
        //printf("\n\n\n\n");
        normal_calcultion();//It'll call normal calculation function.
        break;
    case 2:
        //printf("\n\n\n\n");
        matrix();//It'll call matrix calculation function.
        break;
    case 3:
        //printf("\n\n\n\n");
        factorial();//It'll call factorial function.
        break;
    case 4:
        //printf("\n\n\n\n");
        prime();//It'll call prime function.
        break;
    case 5:
        //printf("\n\n\n\n");
        trigometry();//It's call trigonometry function.
        break;
    case 6:
        //printf("\n\n\n\n");
        logarithm_function();//It'll call logarithm function.
        break;
    case 7:
        //printf("\n\n\n\n");
        power_and_exponential();//It'll call power and exponential function
        break;
    case 8:
      //  printf("\n\n\n\n");
        base_wise_converter();//It'll call numerical base wise converter function
        break;
    case 9:
        //printf("\n\n\n\n");
        palindrome();//It'll call palindrome checking function
        break;
    case 10:
        unit_converter();
        break;
    default:
        //printf("\n\n\n");//if inputting value isn't match with switch-case
        printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
     }//last bracket of main switch case.
    }//last area of if condition
    else if(strcmp(e1, anti_type)==0)//this will true when user will type no
    {
        break;
    }
    else if((strcmp(e1, type)!=0)&&(strcmp(e1, anti_type)!=0))//when users input won't match with both type&anti_type named string
    {
        printf("Sorry!\nYou've entered wrong keyword.\n\n");
        continue;//for this statement program will be backed to the first of while loop
    }

    }//last area of infinite while loop, please be noted the loop can be manipulated by user inputs through if and else if statements
return 0;
}
//last of the start_the_program function


//normal_calculation function starts
int normal_calcultion()
{
    while(1)
    {

    double a, b;//two variable for calculation , thats a double data type, output will be at users will
    int c, f;//c integer for choosing users will, f integer for choosing users will, it's mainly for users will, if user want to choose decimal or floating point value.
    //user will choose
    printf("You're in the normal calculation section.\nEnter belows key for your operation.\n\n\nFor addition press key no. 1\n\nFor subtraction press key no. 2\n");
    printf("\nFor multiplication press key no. 3\n\nFor division press key no. 4\n\nFor remainder value of division press key no. 5\n");
    printf("Choose:");
    scanf("%d", &c);//scan user choose through integer data type called c
    system("cls");
    switch(c)//choosing switch-case starts
    {
    case 1://this is addition
                    printf("You choose for addition.\nEnter the value of A:");
                    scanf("%lf", &a);//taking value of a, capable of taking floating point values
                    printf("Enter the value of B:");
                    scanf("%lf", &b);//taking value of b, capable of taking floating point values
                    //asking user what type of value they want, their choice might be decimal or floating point value
                        printf("What type of result's you want?\nFor decimal values Enter no. 1\nFor floating point values Enter no. 2\n");
                        scanf("%d", &f);//inputting user choice
                        switch(f)//user decimal or floating point choice based switch case
                        {
                        case 1://case 1 for showing output in decimal
                            printf("The addition of %d and %d is =%d\n", (int)a, (int)b, (int)(a+b));//as inputed value is floating point (int)will make it integer
                            break;
                        case 2://case 2 for showing output in floating point
                            printf("The addition of %.2lf and %.2lf is =%.2lf\n", a, b, a+b);//as the input is in floating point (int) hasn't used
                            break;
                        default://for unexpected input
                            printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");

                        }

        break;//addition operation ended
    case 2://this is subtraction
                    printf("You choose for subtraction.\nEnter the value of A:");
                    scanf("%lf", &a);//taking value of b, capable of taking floating point value
                    printf("Enter the value of B:");
                    scanf("%lf", &b);//taking value of b, capable of taking floating point point value
                    //asking user what type of value they want, their choice might be decimal or floating point value
                        printf("What type of result's you want?\nFor decimal values Enter no. 1\nFor floating point values Enter no. 2\n");
                        scanf("%d", &f);//inputting user choice
                        switch(f)//user decimal or floating point choice based switch case
                        {
                        case 1://case 1 for showing output in decimal
                            printf("The subtraction of (%d-%d) as (A-B) is =%d\nand\n(%d-%d) as (B-A) is =%d", (int)a, (int)b, (int)(a-b), (int)b, (int)a, (int)(b-a));//as inputed value is floating point (int)will make it integer
                            break;
                        case 2://case 2 for showing output in floating point
                            printf("The subtraction of (%.2lf-%.2lf) as (A-B) is =%.2lf\nand\n(%.2lf-%.2lf) as (B-A) is =%.2lf", a, b, a-b, b, a, b-a);//as the input is in floating point (int) hasn't used
                            break;
                        default://for unexpected input
                            printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
                        }
        break;//subtraction operation ended
    case 3://this is multiplication
                        printf("You choose for multiplication.\nEnter the value of A:");
                        scanf("%lf", &a);//taking value of a, capable of taking floating point value
                        printf("Enter the value of B:");
                        scanf("%lf", &b);//taking value of b, capable of taking floating point point value
                        //asking user what type of value they want, their choice might be decimal or floating point value
                            printf("What type of result's you want?\nFor decimal values Enter no. 1\nFor floating point values Enter no. 2\n");
                            scanf("%d", &f);//inputting user choice
                            switch(f)//user decimal or floating point choice based switch case
                            {
                            case 1://case 1 for output in decimal
                                printf("The multiplication of (%d x %d) as (A x B) is =%d\nand\n(%d x %d) as (B x A) is =%d", (int)a, (int)b, (int)(a*b), (int)b, (int)a, (int)(b*a));//as inputed value is floating point (int)will make it integer
                                break;
                            case 2://case 2 for output in floating point
                                printf("The multiplication of (%.2lf x %.2lf) as (A x B) is =%.2lf\nand\n(%.2lf x %.2lf) as (B x A) is =%.2lf", a, b, a*b, b, a, b*a);//as the input is in floating point (int) hasn't used
                                break;
                            default://for unexpected input
                                printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
                            }
        break;//multiplication operation ended
        int x, y;//integer x, y only for remainder value of division
    case 4://this is division
                printf("You choose for division.\nEnter the value of A:");
                scanf("%lf", &a);//taking value of a , capable of taking floating point value
                printf("Enter the value of B:");
                scanf("%lf", &b);//taking value of b, capable of taking floating point value
                x=(int)a, y=(int)b;//converting floating point to decimal for remainder values
                                //asking user what type of value they want, there choice might be decimal or floating point value
                                printf("What type of result's you want?\nFor decimal values Enter no. 1\nFor floating point values Enter no. 2\n");
                                    scanf("%d", &f);//inputting user choice
                                    switch(f)//user decimal or floating point based switch case
                                    {
                                        /*please be noted that for division:
                                        1.if the divisor became 0 and dividend isn't zero the result will be "infinity" [such as, something/0=infinity]
                                        2. if the dividend became 0 and divisor isn't zero the result will be "zero" [such as, 0/something= 0]
                                        3. if the both dividend and divisor became zero(0) the result will be "indeterminate" [such as, 0/0= indeterminate*/


                                    case 1://case 1 for output in decimal
                                                if((a!=0)&&(b!=0))//if the both divisor and dividend isn't zero, result will be always valid
                                                    {
                                                        printf("The division of (%d / %d) as (A / B) is =%d\nremainder is= %d\nand\n(%d / %d) as (B / A) is =%d\nremainder is= %d\n", (int)a, (int)b, (int)(a/b), x%y, (int)b, (int)a, (int)(b/a), y%x);//as inputed value is floating point (int)will make it integer
                                                    }

                                                else if((a==0)&&(b==0))//if the both divisor and dividend is became 0 [0/0=indeterminate]
                                                {
                                                    printf("The division of (%d / %d) as (A / B) is = indeterminate\nand\n(%d / %d) as (B / A) is = indeterminate", (int)a, (int)b, (int)b, (int)a);//as inputed value is floating point (int)will make it integer
                                                }
                                                else if((a==0)||(b==0))//if divisor or dividend became zero
                                                {
                                                    if(a==0)//if a is zero
                                                    {
                                                        //for (a/b) result will be valid and (b/a) result will be infinity
                                                        printf("The division of (%d / %d) as (A / B) is =%d\nand\n(%d / %d) as (B / A) is = infinity", (int)a, (int)b, (int)(a/b), (int)b, (int)a);//as inputed value is floating point (int)will make it integer
                                                    }
                                                    else if(b==0)//if b is zero
                                                    {
                                                        //for (a/b) result will be infinity and (b/a) result will be valid
                                                        printf("The division of (%d / %d) as (A / B) is = infinity\nand\n(%d / %d) as (B / A) is =%d", (int)a, (int)b, (int)b, (int)a, (int)(b/a));//as inputed value is floating point (int)will make it integer
                                                    }

                                                            }

                                    break;
                                    case 2://case 2 for output in floating point
                                                    if((a!=0)&&(b!=0))//if the both divisor and dividend isn't zero, result will be always valid
                                                    {
                                                        printf("The division of (%.2lf / %.2lf) as (A / B) is =%.2f\nand\n(%.2lf / %.2lf) as (B / A) is =%.2lf", a, b, a/b, b, a, b/a);//as the input is in floating point (int) hasn't used
                                                    }
                                                    else if((a==0)&&(b==0))//if the both divisor and dividend is became 0 [0/0=indeterminate]
                                                    {
                                                        printf("The division of (%.2lf / %.2lf) as (A / B) is = indeterminate\nand\n(%.2lf / %.2lf) as (B / A) is =indeterminate", a, b, b, a);//as the input is in floating point (int) hasn't used
                                                    }
                                                    else if((a==0)||(b==0))//if divisor or dividend became zero
                                                    {
                                                        if(a==0)//if a is zero
                                                        {
                                                            //for (a/b) result will be valid and (b/a) result will be infinity
                                                            printf("The division of (%.2lf / %.2lf) as (A / B) is =%.2lf\nand\n(%.2lf / %.2lf) as (B / A) is = infinity", a, b, (a/b), b, a);//as the input is in floating point (int) hasn't used
                                                        }
                                                        else if(b==0)//if b is zero
                                                        {
                                                            //for (a/b) result will be infinity and (b/a) result will be valid
                                                            printf("The division of (%.2lf / %.2lf) as (A / B) is = infinity\nand\n(%.2lf / %.2lf) as (B / A) is =%.2lf", a, b, b, a, b/a);//as the input is in floating point (int) hasn't used
                                                        }
                                                    }


                                        break;
                                    default://for unexpected input
                                        printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");

                                    }

        break;
    case 5://this is the remainder of division
                printf("You choose for remainder values of division.\nEnter the value of A:");
                scanf("%lf", &a);//taking value of a , capable of taking floating point value
                printf("Enter the value of B:");
                scanf("%lf", &b);//taking value of b, capable of taking floating point value
                x=(int)a, y=(int)b;//converting floating point to decimal, cause floating point can't calculate remainder of division
                if((x!=0)&&(y!=0))//if both dividend and divisor isn't zero
                {
                	printf("The remainder value  of (%d %% %d) as (A %% B) is = %d\nand\n(%d %% %d) as (B %% A) is = %d\n", x, y, x%y, y, x, y%x);
				}
				else if((x==0&&y==0)||(x==0||y==0))//if anything is zero
				{
					printf("Sorry!\nYour inputted value isn't valid for gaining remainder values.\n");
				}
        break;

    default:
        printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
    }

    jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }
    }
}


//matrix function starts
int matrix()
{//asking users for what's type of work they wanna to do
    while(1)
    {

    printf("You're in the Matrix calculation section.\nEnter belows key for your operation.\n\nFor addition of two matrix press key no. 1\n\nFor subtraction of two matrix press key no. 2\n\n");
    printf("For transpose of matrix press key no. 3\n");
    int matrix;//matrix is an integer for choosing users operation
    printf("Choose:");
    scanf("%d", &matrix);//inputting choice
    system("cls");
   switch(matrix)//choice based switch case for only matrix
    {
    case 1://case 1 for additional type matrix
        printf("For matrix addition you got two matrix as matrix A and matrix B\n");
        matrix_addition();//call to the matrix addition function
        break;
    case 2://case 2 for subtract type matrix
        printf("For matrix subtraction you got two matrix as matrix A and matrix B\n");
        matrix_subtraction();//call to matrix subtraction function
        break;
    case 3://case 3 for transposed type matrix
        matrix_transpose();//call to matrix transpose function
        break;

    default://for unexpected inputs
        printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
    }//choice based switch case ends

    jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }
    }
    return 0;
}//matrix function ends



//matrix addition function starts
//user will define their dimension type for this matrix addition
int matrix_addition()
{

    int r1, c1, r2, c2;//r1, c1 is for row and column of 1st matrix next r2, c2 is for row and column of 2nd matrix
    jumpmadd:
    printf("For matrix A, what's the dimension you want to take:\n");
    scanf("%d", &r1);//inputting what will be the row of 1st matrix
    system("cls");
    printf("%d\nx\n", r1);
    scanf("%d", &c1);//inputting what will be the column of 2nd matrix
    printf("\n\n");
    int a[r1][c1];//2 dimensional array will be defined by users input for matrix A
    printf("Now enter the entities of matrix A:\n");
    int i, j;//integer i and j for inputting entities row and column wise as it's a two dimensional array , we need two loops
    for(i=0;i<r1;i++)//1st loop will represents row
    {//condition i will end at the number of row as r1 is from the total dimension of matrix A
        for(j=0;j<c1;j++)//2nd loop will represents column
        {//condition j will end at the number of column as c1 is from the total dimension of matrix A
            scanf("%d", &a[i][j]);//inputting entities row wise in the matrix A
        }
    }
    printf("\n\n");
    //print the matrix A, dimensionally
    printf("Matrix A is:\n");
    for(i=0;i<r1;i++)//1st loop will represents row
    {//condition i will end at the number of row as r1 is from the total dimension of matrix A
        for(j=0;j<c1;j++)//2nd loop will represents column
        {//condition j will end at the number of column as c1 is from the total dimension of matrix A
            printf("%d  ", a[i][j]);//printing entities row wise in the matrix A
        }
        printf("\n");//this is for new line, just making new row for users
    }
    //matrix B
    printf("\n\n");
    printf("For matrix B, what's the dimension you want to take:\n");
    scanf("%d", &r2);//inputting what will be the row of 2nd matrix
    system("cls");
    printf("%d\nx\n", r2);

    scanf("%d", &c2);//inputting what will be the column of 2nd matrix
    int b[r2][c2];//2 dimensional array will be defined by users input for matrix B
    printf("\n\n");
    printf("Now enter the entities of matrix B:\n");
    for(i=0;i<r2;i++)//1st loop will represents row
    {//condition i will end at the number of row as r2 is from the total dimension of matrix B
        for(j=0;j<c2;j++)//2nd loop will represents column
        {//condition j will end at the number of column as c1 is from the total dimension of matrix A
            scanf("%d", &b[i][j]);//inputting entities row wise in the matrix A
        }
    }
    printf("\n\n");
    //print the matrix B, dimensionally
    printf("Matrix B is:\n");
    for(i=0;i<r2;i++)//1st loop will represents row
    {//condition i will end at the number of row as r2 is from the total dimension of matrix B
        for(j=0;j<c2;j++)//2nd loop will represents column
        {//condition j will end at the number of column as c2 is from the total dimension of matrix B
            printf("%d  ", b[i][j]);//printing entities row wise in the matrix B
        }
        printf("\n");//this is for new line, just making new row for users
    }

    //very important checking, two matrix can be added if both matrix is dimensionally equal
    if((r1==r2)&&(c1==c2))//checking row and column of both matrix
    {
        int result_matrix[r1][c1];//the addition results will be printed by result_matrix named array which dimension will be defined by users in the top
        //addition and printing process starts
        printf("\n\n\n\n\nThe result of Matrix (A+B):\n");//result
        for(i=0;i<r1;i++)//1st loop will deal with row
        {//condition ends at the number of rows of the matrix as the both matrix is equal
            for(j=0;j<c1;j++)//2nd loop will deal with column
            {//condition ends at the number of rows of the both matrix as the matrix is equal
                result_matrix[i][j]=a[i][j]+b[i][j];//adding the entities and stores it in result matrix
                printf("%d  ", result_matrix[i][j]); //printing the entities after addition which is done is in previous line
            }
            printf("\n");//this is for new line, just making new row for users
        }
        printf("\n\n");
    }
    else
    {
        printf("Sorry! you've made a dimensional error. So, it can't be calculated.\nTwo matrix can be added when both matrix got equal row and column\n\nTry again\n");
        goto jumpmadd;
    }
}


int matrix_subtraction()
{
    int r1, c1, r2, c2;
    jumpmsub:
    printf("For matrix A, what's the dimension you want to take:\n");
    scanf("%d", &r1);
    system("cls");
    printf("%d\nx\n");
    scanf("%d", &c1);
    printf("\n\n");
    int a[r1][c1];
    printf("Now enter the entities of matrix A:\n");
    int i, j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");
    printf("Matrix A is;\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    //matrix B
    printf("\n\n");
    printf("For matrix B, what's the dimension you want to take:\n");
    scanf("%d", &r2);
    system("cls");
    printf("%d\nx\n");
    scanf("%d", &c2);
    int b[r2][c2];
    printf("\n\n");
    printf("Now enter the entities of matrix B:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\n");
    printf("Matrix B is;\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    if((r1==r2)&&(c1==c2))
    {
        printf("Enter 1 for (A-B).\nEnter 2 for (B-A).\n");
        int subtraction_choice;
        scanf("%d", &subtraction_choice);
        int result_matrix[r1][c1];
        switch(subtraction_choice)
        {
            case 1:
                {
                    printf("Matrix (A-B):\n");
                    for(i=0;i<r1;i++)
                        {
                            for(j=0;j<c1;j++)
                                {
                                    printf("%d ", result_matrix[i][j]=a[i][j]-b[i][j]);
                                }
                                printf("\n");
                        }
                                        printf("\n\n");

                }
            break;

            case 2:
                {
                    printf("Matrix (B-A):\n");
                    for(i=0;i<r1;i++)
                        {
                            for(j=0;j<c1;j++)
                                {
                                    printf("%d ", result_matrix[i][j]=b[i][j]-a[i][j]);
                                }
                                printf("\n");
                        }
                                        printf("\n\n");

                    }
            break;

            default:
                printf("Sorry! Wrong input. Try again.\n");

        }


    }
    else
    {
        printf("Sorry! you've made a dimensional error. So, it can't be calculated.\nTwo matrix can be subtract when both matrix got equal row and column\n\nTry again\n");
        goto jumpmsub;
    }

}


int matrix_transpose()
{
    int r1, c1;
    jumpmta:
    printf("For matrix Transpose, what's the dimension you want to take:\n");
    scanf("%d", &r1);
    printf("x\n");
    scanf("%d", &c1);
    printf("\n\n");
    int a[r1][c1];
    if(r1!=c1)
    {
        printf("Sorry! you've made a dimensional error. So, it can't be calculated.\nTranspose of matrix will be valid when row and column will equal.\n\nTry again\n");
        goto jumpmta;
    }
    printf("Now enter the entities of the matrix:\n");
    int i, j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");
    printf("Entered matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

            int result_matrix1[r1][c1];
            printf("Transpose of the matrix:\n\n\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ", result_matrix1[i][j]=a[j][i]);

            }
            printf("\n");
        }

}


int factorial()
{
    while(1)
    {
    printf("You're in the Factorial calculation section.\nEnter belows key for your operation.\n");
    printf("Enter a number to see its factorial value:");
    int n;
    scanf("%d", &n);
    int i=1, temp=1;
    do
    {
        temp*=i;
        i++;
    }
    while(i<=n);
    printf("\n\n\nThe factorial of %d!= %d\n\n", n, temp);
    jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }
}
}


int prime()
{
    while(1)
    {

    printf("You're in the Prime number calculation section.\nEnter belows key for your operation.\n\n\nFor single prime number press key no. 1\n\nFor total prime number of two . 2\n");
    int prime_choose;
    printf("Choose:");
    scanf("%d", &prime_choose);
    system("cls");
    switch(prime_choose)
    {
        case 1:
            printf("You've selected for single number prime calculation.\n\n");
            single_prime_number();
        break;
        case 2:
            printf("You've selected for total number prime calculation.\n\n");
            total_prime_number();
        break;
        default:
            printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
    }

    jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }

}
}


//single prime calculation
int single_prime_number()
{

    printf("Enter a number to check is it a prime number:");
    int n;
    scanf("%d", &n);
    printf("You've entered %d to check, is it a prime number.\n\n\n\n ", n);
    int i=2, temp=0;
    while(i<n)
    {
        if(n%i==0)
        {
             temp++;
        }
        i++;
    }
    if(temp!=0) printf("Sorry\n %d isn't a prime number.\n\n\n", n);
    else printf("Congratulation\n %d is a prime number.\n\n\n", n);
}


//total prime calculation
int total_prime_number()
{
    printf("Enter two number to check total prime number of from start to end.\n\n#This program is able to count both ascending and descending order.\n\n\n ");
    printf("Enter first number:");
    int a, b;
    scanf("%d", &a);
    printf("\n\n%d TO:", a);
    scanf("%d", &b);
    if(a==b)
    {
            printf("You wanna to check prime number from %d to %d to which difference is 0.\nAs you entered,\n", a, a);
            zero_diff_prime(a);
    }
    else prime_checker_n_to_n(a, b);
}


int zero_diff_prime(int a)
{
    int i=2, temp=0;
    do
    {
        if(a%i!=0)
        {
            temp++;
        }
        i++;
    }
    while(i<a);
    if(temp!=0)
        {
            printf("\n\nCongratulation\n%d is a prime number.\n", a);
        }
        else printf("\n\nSorry\n%d isn't a prime number.\n", a);
}



int prime_checker_n_to_n(int a, int b)
{

    int temp;
    if(b<a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    int i=a, count=0, x[b-a];
    while(i<=b)
    {
        int temp1=0,  j=2;
        while(j<i)
        {
            if(i%j==0)
            {
                temp1++;
            }
            j++;
        }
        if((temp1==0)&&i!=1)
        {
            x[count]=i;
            count++;
        }
        i++;
    }
    printf("\n\nThere is total #%d prime number between %d to %d\n\n\n", count, a, b);
    int l, temp5=0;
    printf("And they are:\n");
    for(l=0;l<count;l++)
    {
        printf("%d, ", x[l]);
        temp5++;
        if(temp5==3)
        {
            printf("\n\n");
            temp5=0;
        }
        if(l==count-1)
        {
            printf("\n\n\n");
        }
    }

}



//trigonometry main section
int trigometry()
{
    while(1)
    {

    printf("You're in the Trigonometric calculation section.\nEnter belows key for your operation.\n");
    printf("\n\nFor conversion of Radian and Degree press key no. 1\n\nFor trigonometric functions press key no. 2\n");
    int trigonometry_fun_choice;
    printf("Choose:");
    scanf("%d", &trigonometry_fun_choice);
    system("cls");
    switch(trigonometry_fun_choice)
    {
    case 1:
        rad_deg_con();
        break;
    case 2:
        trigonometry_function();
        break;
    default:
    printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
    }

    jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }

    }

    return 0;
}


#define PI 3.14159
int rad_deg_con()
{

    printf("You choose for conversion of Degree and Radian.\n\nFor conversion of Degree to Radian press key no. 1\n\nFor conversion of Radian to Degree press key no. 2\n\n");
    int radian_degree_choose;
    scanf("%d", &radian_degree_choose);
    system("cls");
    switch(radian_degree_choose)
    {
        double d;
    case 1:
        printf("\n\n\nDegree to Radian process terminal.\n\nEnter a Degree value:");
        scanf("%lf", &d);
        printf("\n\nThe Radian value of %.2lf Degree is = %.4lf Radians.\n\n", d, (d*PI)/180);
        break;
    case 2:
        printf("\n\n\nRadian to Degree process terminal.\n\nEnter a Radian value:");
        scanf("%lf", &d);
        printf("\n\nThe Degree value of %.3lf Radian is = %.4lf Degree.\n\n", d, (180*d)/PI);
        break;
    default:
        printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");

    }
}



#define PI 3.14159
int trigonometry_function()
{
    printf("\n\nYou choose for trigonometric functions.\n\nWhat types of value you want to calculate?\n\nYou can Enter both Radian and Degree value.\n\n\n\nInputting Radian value press key no. 1\nInputting Degree value press key no. 2\n\n");
    int degree_or_radian_choose;
    scanf("%d", &degree_or_radian_choose);
    system("cls");
    switch(degree_or_radian_choose)
    {
        double value, value1;
    case 1:
        printf("Enter a Radian value for Trigonometry Function (X) :");
        scanf("%lf", &value);
        value1=(180*value)/PI;
        value_generate(value, value1);
        break;
    case 2:
        printf("Enter a Degree value for Trigonometry Function (X) :");
        scanf("%lf", &value1);
        value=(value1*PI)/180;
        value_generate(value, value1);
        break;
    default:
        printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");

    }
}



int value_generate(double radian_value, double degree_value1)
    {
    printf("For sin(x) press key no. 1\nFor cos(x) press key no. 2\n");
    printf("For tan(x) press key no. 3\nFor cot(x) press key no. 4\n");
    printf("For sec(x) press key no. 5\nFor cosec(x) press key no. 6\n");
    int trigonometry_fun_choose;
    scanf("%d", &trigonometry_fun_choose);
    printf("The value of ");
    switch(trigonometry_fun_choose)
    {
        case 1:
            printf("sin(%d Degree or %3lf Radian) as sin(x) = %.3lf\n", (int)degree_value1, radian_value, sin(radian_value));
            break;
        case 2:
            printf("cos(%d Degree or %3lf Radian) as cos(x) = %.3lf\n", (int)degree_value1, radian_value, cos(radian_value));
            break;
        case 3:
            printf("tan(%d Degree or %3lf Radian) as tan(x) = %.3lf\n", (int)degree_value1, radian_value, tan(radian_value));
            break;
        case 4:
            printf("cot(%d Degree or %3lf Radian) as cot(x) = %.3lf\n", (int)degree_value1, radian_value, 1/tan(radian_value));
            break;
        case 5:
            printf("sec(%d Degree or %3lf Radian) as sec(x) = %.3lf\n", (int)degree_value1, radian_value, 1/cos(radian_value));
            break;
        case 6:
            printf("cosec(%d Degree or %3lf Radian) as cosec(x) = %.3lf\n", (int)degree_value1, radian_value, 1/sin(radian_value));
            break;
        default:
            printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
    }
    }




int logarithm_function()
{
    while(1)
    {
    double b, n;
	 printf("You're in the Logrithm calculation section.\nEnter belows key for your operation.\n\n\nFor 10 base Logrithm press key no. 1\n");
    printf("\nFor for n base Logrithm calcultion press key no. 2\n\nFor e base Logrithm calculation press key no. 3\n");
    int c;
    printf("Choose:");
    scanf("%d", &c);
    system("cls");
    switch(c)//choosing switch-case
    {
    	double b, n;
    	case 1:
    		printf("You choose for 10 base Logrithm or log10(real number)calculation. carry on:\n");
    		printf("Log 10 base ");
    		scanf("%lf", &n);
    		if(n>0) printf("%lf is equal to: %lf\n\nAs Log10(%.2lf)=%.2lf\n", n, log10(n), n, log10(n));
    		else printf("Math Error.\n\nyou entered %.2lf\nWhich isn't be calculated by Logrithm function.\nN.B: Logrithm is only valid for 1 to infinity.\nTry again.\n", n);
    		break;
    	case 2:
    		printf("You choose for n base Logrithm or log(base)(real number)calculation. carry on:\n");
    		printf("Log ");
    		scanf("%lf", &b);
			printf("base ");
    		scanf("%lf", &n);
    		if(n>0&&b>0) printf("is equal to: %lf\n\nAs Log%d(%.2lf)=%.2lf\n", log(n)/log(b), (int)n, b, log(n)/log(b));
    		else printf("Math Error.\n\nYou entered base %d for calculating log%d(%.2lf)\nWhich isn't be calculated by Logarithm.\nTry again.\n", (int)b, (int)b, n);
    		break;
    	case 3:
    		printf("You choose for e base Logrithm or ln(real number) calculation. carry on:\n");
    		printf("Log e base ");
    		scanf("%lf", &n);
    		if(n>0) printf("%lf is equal to: %lf\n\nAs Loge(%.2lf)=%.2lf\n", n, log(n), n, log(n));
    		else printf("Math Error.\n\nyou entered %.2lf\nWhich isn't be calculated by Logrithm function.\nN.B: Logrithm is only valid for 1 to infinity.\nTry again.\n", n);
    		break;
        default:
            printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
	}

	jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }
}
	return 0;
}



int power_and_exponential()
{
    while(1)
    {

    printf("You're in the power wised and Expoenetial calculation section.\nOur program can provide you to calculate 12 types of power wised and Expoenetial function\n\nEnter belows key for your operation.\n\n\n");
	printf("For m^n press key no. 1\n\nFor m^x(+/-)n^y press key no. 2\n\nFor (m(+/-)n)^x press key no. 3\n");
	printf("\nFor m^x(+/-)n^y(+/-)p press key no. 4\n\nFor ((m^x(+/-)n^y)^p)(+/-)x press key no. 5\n\nFor e^x press key no. 6\n");
	printf("\nFor e^x(+/-)m press key no. 7\n\nFor (e^x(+/-)m)^n press key no. 8\n\nFor e^x(+/-)e^y press key no. 9\n");
	printf("\nFor e^x(+/-)e^y(+/-)m press key no. 10\n\nFor (e^x(+/-)e^y)^p press key no. 11\n\nFor  ((e^x(+/-)e^y)^p)(+/-)m press key no. 12\n");
	int x, y, p, m, n;
	int c;
	printf("Choose:");
	scanf("%d", &c);
	system ("cls");
	switch(c)
	{
		int choice_output;
		case 1:
			printf("You choose for m^n function.\nNow enter the value of base which is m:");
			scanf("%d", &m);
			printf("Enter the value of power which is n:");
			scanf("%d", &n);
			system("cls");
			printf("Your function is like  z=%d^%d\nWhich answer is z=%g\n\n", m, n, (float)pow(m, n));
			break;
		case 2:
			printf("You choose for m^x(+/-)n^y function.\nNow enter the value of first base which is m:");
			scanf("%d", &m);
			printf("Enter the value of first base power which is x:");
			scanf("%d", &x);
			printf("%d^%d\n", m, x);
			printf("Enter the value of second base which is n:");
			scanf("%d", &n);
			printf("%d^%d(+/-)%d", m, x, n);
			printf("Enter the value of second base power which is y:");
			scanf("%d", &y);
			system("cls");
			printf("Your function is like  z=%d^%d+%d^%d\nWhich answer is z=%g\n\nOr\n\n", m, x, n, y, (float)(pow(m, x)+pow(n, y)));
			printf("Your function is like  z=%d^%d-%d^%d\nWhich answer is z=%g\n\n", m, x, n, y, (float)(pow(m, x)+pow(n, y)));
			break;
		case 3:
			printf("You choose for (m(+/-)n)^p function.\nNow enter the value of first base which is m:");
			scanf("%d", &m);
			printf("Enter the value of second base which is n:");
			scanf("%d", &n);
			printf("%d(+/-)%d\n", m, n);
			printf("Enter the value of the power which is p:");
			scanf("%d", &p);
			system("cls");
			printf("Your function is like z=(%d+%d)^%d\nWhich answewr is z=%g\n\nOr\n\n", m, n, p, (float)pow(m+n, p));
			printf("Your function is like z=(%d-%d)^%d\nWhich answewr is z=%g\n\n", m, n, p, (float)pow(m-n, p));
			break;
		case 4:
			printf("You choose for m^x(+/-)n^y(+/-)p function.\nNow enter the value of first base which is m:");
			scanf("%d", &m);
			printf("Enter the value of first base power which is x:");
			scanf("%d", &x);
			printf("%d^%d\n", m, x);
			printf("%d^%d\n", m, x);
			printf("Enter the value of second base which is n:");
			scanf("%d", &n);
			printf("%d^%d(+/-)%d\n", m, x, n);
			printf("Enter the value of second base power which is y:");
			scanf("%d", &y);
			printf("%d^%d(+/-)%d^%d\n", m, x, n, y);
			printf("Enter the value of the constant which is:");
			scanf("%d", &p);
			system("cls");
			printf("Your function is like z=%d^%d+%d^%d+%d\nWhich answer is z=%g\nOr\n\n", m, x, n, y, p, (float)(pow(m, x)+pow(n, y)+p));
			printf("Your function is like z=%d^%d+%d^%d-%d\nWhich answer is z=%g\nOr\n\n", m, x, n, y, p, (float)(pow(m, x)+pow(n, y)-p));
			printf("Your function is like z=%d^%d-nswer %d^%d+%d\nWhich ais z=%g\nOr\n\n", m, x, n, y, p, (float)(pow(m, x)-pow(n, y)+p));
			printf("Your function is like z=%d^%d-%d^%d-%d\nWhich answer is z=%g\n", m, x, n, y, p, (float)(pow(m, x)-pow(n, y)-p));
			break;
		case 5:
			printf("You choose for ((m(+/-)n)^p)(+/-)x function.\nNow enter the value of first base which is m:");
			scanf("%d", &m);
			printf("Enter the value of second base which is n:");
			scanf("%d", &n);
			printf("%d(+/-)%d\n", m, n);
			printf("Enter the value of the power which is p:");
			scanf("%d", &p);
			printf("(%d(+/-)%d)^%d\n", m, n, p);
			printf("Enter the value of the constant which is m:");
			scanf("%d", &x);
			system("cls");
			printf("Your function is like z=((%d+%d)^%d)+%d\nWhich answer is z=%g\n\nOr\n\n", m, n, p, x, pow(m+n, p)+x);
			printf("Your function is like z=((%d+%d)^%d)-%d\nWhich answer is z=%g\n\nOr\n\n", m, n, p, x, pow(m+n, p)-x);
			printf("Your function is like z=((%d-%d)^%d)+%d\nWhich answer is z=%g\n\nOr\n\n", m, n, p, x, pow(m-n, p)+x);
			printf("Your function is like z=((%d-%d)^%d)-%d\nWhich answer is z=%g\n\n", m, n, p, x, pow(m-n, p)-x);
			break;
		case 6:
			printf("You choose for z= e^x function.\nNow enter the value of power which is X:");
			scanf("%d", &x);
			system("cls");
			printf("Your function is like: z=e^%d\nWhich answer is z=%g", x, exp(x));
			break;
		case 7:
			printf("You choose for z= e^x(+/-)m function.\nNow enter the value of power which is x:");
			scanf("%d", &x);
			printf("e^%d\n", x);
			printf("Enter the value of constant which is m:");
			scanf("%d", &m);
			system("cls");
			printf("Your function is like: z=e^%d+%d\nWhich answer is z=%g\n\nOR\n\n", x, m, exp(x)+m);
			printf("Your function is like: z=e^%d-%d\nWhich answer is z=%g", x, m, exp(x)-m);
			break;
		case 8:
			printf("You choose for z= (e^x(+/-)m)^n  function.\nNow enter the value of power which is x:");
			scanf("%d", &x);
			printf("e^%d\n", x);
			printf("Enter the value of constant which is m:");
			scanf("%d", &m);
			printf("(e^%d)(+/-)%d\n", x, m);
			printf("Enter the value of another power which is n:");
			scanf("%d", &n);
			system("cls");
			printf("Your function is like: z= ((e^%d)+%d)^%d\nWhich answer is z=%g\n\nOR\n\n", x, m, n, pow(exp(x)+m, n));
			printf("Your function is like: z= ((e^%d)-%d)^%d\nWhich answer is z=%g\n\n", x, m, n, pow(exp(x)-m, n));
			break;
		case 9:
			printf("You choose for z=e^x(+/-)e^y function.\nNow enter the value of first power which is x:");
			scanf("%d", &x);
			printf("e^%d\n", x);
			printf("Enter the value of second power which is y:");
			scanf("%d", &y);
			system("cls");
				printf("Your function is like z= (e^%d+e^%d) function.\nWhich answer is z=%g\n\nOR\n\n)", x, y, exp(x)+exp(y));
				printf("Your function is like z= (e^%d-e^%d) function.\nWhich answer is z=%g\n\nOR\n\n)", x, y, exp(x)-exp(y));
			break;
		case 10:
			printf("You choose for z=e^x(+/-)e^y(+/-)m function.\nNow enter the value of first power which is x:");
			scanf("%d", &x);
			printf("e^%d\n", x);
			printf("Enter the value of second power which is y:");
			scanf("%d", &y);
			printf("e^%d(+/-)e^%d\n", x, y);
			printf("Enter the value of the constant which is m:");
			scanf("%d", &m);
			system("cls");
			printf("Your function is like z=e^%d+e^%d+%d\nWhich answer is z=%g\n\nOR\n\n", x, y, m, exp(x)+exp(y)+m);
			printf("Your function is like z=e^%d+e^%d-%d\nWhich answer is z=%g\n\nOR\n\n", x, y, m, exp(x)+exp(y)-m);
			printf("Your function is like z=e^%d-e^%d+%d\nWhich answer is z=%g\n\nOR\n\n", x, y, m, exp(x)-exp(y)+m);
			printf("Your function is like z=e^%d-e^%d-%d\nWhich answer is z=%g\n\n", x, y, m, exp(x)-exp(y)-m);
			break;
		case 11:
			printf("You choose for z=(e^x(+/-)e^y)^p function.\nNow enter the value of the first power which is x:");
			scanf("%d", &x);
			printf("e^%d\n", x);
			printf("Enter the value of the second power which is y:");
			scanf("%d", &y);
			printf("e^%d(+/-)e^%d\n", x, y);
			printf("Enter the value of third power which is p:");
			scanf("%d", &p);
			system("cls");
				printf("Your function is like z=(e^%d+e^%d)^%d\nWhich answer is z=%g\n\nOR\n\n", x, y, p, pow(exp(x)+exp(y), p));
				printf("Your function is like z=(e^%d-e^%d)^%d\nWhich answer is z=%g\n\n", x, y, p, pow(exp(x)-exp(y), p));
			break;
		case 12:
			printf("You choose for z=((e^x(+/-)e^y)^p)(+/-)m function.\nNow enter the value of the first power which is x:");
			scanf("%d", &x);
			printf("e^%d\n", x);
			printf("Enter the value of the second power which is y:");
			scanf("%d", &y);
			printf("e^%d(+/-)e^%d\n", x, y);
			printf("Enter the value of the third power which is p:");
			scanf("%d", &p);
			printf("(e^%d(+/-)e^%d)^%d\n", x, y, p);
			printf("Enter the value of the constant which is m:");
			scanf("%d", &m);
			system("cls");
			printf("Your function is like z=((e^%d+e^%d)^%d)+%d\nWhich answer is z=%g\n\nOR\n\n", x, y, p, m, pow(exp(x)+exp(y), p)+m);
			printf("Your function is like z=((e^%d+e^%d)^%d)-%d\nWhich answer is z=%g\n\nOR\n\n", x, y, p, m, pow(exp(x)+exp(y), p)-m);
			printf("Your function is like z=((e^%d-e^%d)^%d)+%d\nWhich answer is z=%g\n\nOR\n\n", x, y, p, m, pow(exp(x)-exp(y), p)+m);
			printf("Your function is like z=((e^%d-e^%d)^%d)-%d\nWhich answer is z=%g\n\n", x, y, p, m, pow(exp(x)-exp(y), p)-m);
			break;
		default:
			printf("Sorry! you've entered a wrong key.\n\nPlease try again.\n\n\n");
	}

	jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }
    }
	return 0;
}




int base_wise_converter()
{

    while(1)
    {

	printf("You're in the Numerical base wise convertering section.\nEnter belows key for your operation.\n\n");
	printf("\nFor Decimal to Binary Convert press key no. 1\n\nFor Decimal to Octal Convert press key no. 2\n\nFor Decimal to Hexa-decimal Convert press key no. 3\n");
	printf("\nFor Binary to Decimal Convert press key no. 4\n\nFor Binary to Octal Convert press key no. 5\n\nFor Binary to Hexa-decimal Convert press key no. 6\n");
	printf("\nFor Octal to Decimal Convert press key no. 7\n\nFor Octal to Binary Convert press key no. 8\n\nFor Octal to Hexa-decimal Convert press key no. 9\n");
	printf("\nFor Hexa-decimal to Decimal Convert press key no. 10\n\nFor hexa-decimal to Binary Convert press key no. 11\n\nFor Hexa-decimal to OctalConvert press key no. 12\n");
	int choose;
	printf("choose:");
	scanf("%d", &choose);
	system("cls");
	int i, n, rev;
	int dec=0, remainder=0, a[9000];
	switch(choose)
	{
		case 1:
			printf("You choose for Decimal to Binary Convert.\n\nEnter a Decimal value:");
	              scanf("%d", &n);
	              for(i=0;n>0;i++)
	              {
	              	remainder=n%2;
	              	a[i]=remainder;
	              	n/=2;
	              	rev=i;
				  }
				  while(rev>=0)
				  {
				  	printf("%d", a[rev]);
				  	rev--;
				  }

		break;

		case 2:
			printf("You choose for Decimal to Octal Convert.\n\nEnter a Decimal value:");
	              scanf("%d", &n);
	              printf("%o", n);

		break;
	    case 3:
			printf("You choose for Decimal to Hexa-decimal Convert.\n\nEnter a Decimal value:");
	              scanf("%d", &n);
	              printf("%X", n);

		break;
		case 4:

			printf("You choose for Binary to Decimal Convert.\n\nEnter a Binary value:");
			i=0;
			scanf("%d", &n);
			while(n!=0)
			{
				remainder=n%10;
				dec+=remainder*pow(2, i);
				i++;
				n/=10;
			}
			printf("%d", dec);

		break;
		case 5:

			printf("You choose for Binary to octal Convert.\n\nEnter a Binary value:");
				i=0;
			scanf("%d", &n);
			while(n!=0)
			{
				remainder=n%10;
				dec+=remainder*pow(2, i);
				i++;
				n/=10;
			}
			printf("%o", dec);

		break;
		case 6:

			printf("You choose for Binary to Hexa-decimal Convert.\n\nEnter a Binary value:");
				i=0;
			scanf("%d", &n);
			while(n!=0)
			{
				remainder=n%10;
				dec+=remainder*pow(2, i);
				i++;
				n/=10;
			}
			printf("%X", dec);

		break;
		case 7:

			printf("You choose for Octal to Decimal Convert.\n\nEnter a Octal value:");
				i=0;
			scanf("%d", &n);
			while(n!=0)
			{
				remainder=n%10;
				dec+=remainder*pow(8, i);
				i++;
				n/=10;
			}
			printf("%d", dec);

		break;
		case 8:

			printf("You choose for Octal to Binary Convert.\n\nEnter a Octal value:");
				i=0;
			scanf("%d", &n);
			while(n!=0)
			{
				remainder=n%10;
				dec+=remainder*pow(8, i);
				i++;
				n/=10;
			}
			//converted octal value to decimal
			//now we convert this decimal value to a binary value
			n=dec;
			for(i=0;n>0;i++)
			{
				remainder=n%2;
				a[i]=remainder;
				n/=2;
			}
			rev=i-1;
			while(rev>=0)
			{
				printf("%d", a[rev]);
				rev--;
			}

		break;
		case 9:

			printf("You choose for Octal to Hexa-decimal Convert.\n\nEnter a Octal value:");
				i=0;
			scanf("%d", &n);
			while(n!=0)
			{
				remainder=n%10;
				dec+=remainder*pow(8, i);
				i++;
				n/=10;
			}
			printf("%X", dec);
		break;
		case 10:

			printf("You choose for Hexa-decimal to Decimal Convert.\n\nEnter a Hexa-decimal value:");
			scanf("%hhx", &n);
			dec=(int)n;
			printf("%d", dec);
		break;
		case 11:

			printf("You choose for Hexa-decimal to Binary Convert.\n\nEnter a Hexa-decimal value:");
			scanf("%hhx", &n);
			dec=(int)n;//in this line hexa decimal is converted to decimal, now we'll convert decimal to binary number
			i=0;
			while(dec>0)
			{
				remainder=dec%2;
				a[i]=remainder;
				dec/=2;
				i++;
			}
			rev=i-1;
			while(rev>=0)
			{
				printf("%d", a[rev]);
				rev--;
			}
		break;
		case 12:

			printf("You choose for Hexa-decimal to Octal Convert.\n\nEnter a Hexa-decimal value:");
			scanf("%hhx", &n);
			dec=(int)n;//in this line hexa decimal is converted to decimal, now we'll convert decimal to octal number
			printf("%o", dec);
		break;
		default:
		    printf("Sorry!\nYou've entered wrong keyword.\n");

	}

	jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }
    }
}



int palindrome()
{

    while(1)
    {
        printf("You're in the Palindrome checking section.\nThis program is able to check both Numerical and Character wise palindromic problems.\n\nYou just need to type and hit Enter Button.\n");
		char a[9000], b[9000];
		printf("Type:");
		scanf("%s", &a);
		system("cls");
		int i=0;
		strcpy(b, a);
		if(strcmp(b, strrev(a))==0)
		{
			printf("Your entered problem is a palindrome.\nCause :\n\nBefore reverse: ");
			puts(b);
		 	printf("After reverse: ");
		 	puts(a);
		}
		else
		{
			 printf("Your entered problem isn't a palindrome.\nCause :\n\nBefore reverse: ");
			 puts(b);
			 printf("After reverse: ");
		 	puts(a);
		}
        jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }
    }

    return 0;
}


int unit_converter()
{

    while(1)
    {
    printf("You're in the Unit Convert calculation ction.\nEnter belows key for your operation.\n\n\n");
	printf("For Inch to Centimeter convert press key no. 1\nFor Centimeter to Inch convert press key no. 2\n");
    printf("For Feet to Meter convert press key no. 3\nFor Meter to Feet convert press key no. 4\n");
    printf("For Mile to Km convert press key no. 5\nFor Km to Mile convert press key no. 6\n");
    printf("For  Km/h to m/s convert press key no. 7\nFor m/s to km/h convert press key no. 8\n");
    printf("For lb to Kg convert press key no. 9\nFor kg to lb convert press key no. 10\n");
    printf("For atm to Pa convert press key no. 11\nFor Pa to atm convert press key no. 12\n");
    printf("For mmHg to Pa convert press key no. 13\nFor Pa to mmHg convert press key no. 14\n");
    printf("For hp to kW convert press key no. 15\nFor kW to hp convert press key no. 16\n");
    printf("For Joule to Calorie  convert press key no. 17\nFor Calorie to Joule convert press key no. 18\n");
    printf("For Fahrenheit to Celsius convert press key no. 19\nFor Fahrenheit to Kelvin convert press key no. 20\n");
    printf("For Celsius to Fahrenheit convert press key no. 21\nFor Celsius to Kelvin convert press key no. 22\n");
    printf("For Kelvin to Fahrenheit convert press key no. 23\nFor Kelvin to  Celsius convert press key no. 24\n");
	double n;
	int choose;
	printf("Choose:");
	scanf("%d", &choose);
	system("cls");
	switch(choose)
	{
		case 1:
			printf("You've choosen for Inch to Centimeter convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 2.54*n);
			break;
		case 2:
			printf("You've choosen for Centimeter to Inch convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 0.3937*n);
			break;
		case 3:
			printf("You've choosen for Feet to Meter convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 0.3084*n);
			break;
		case 4:
			printf("You've choosen for Meter to Feet convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 3.2808*n);
			break;
		case 5:
			printf("You've choosen for Mile to Km convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 1.609344*n);
			break;
		case 6:
			printf("You've choosen for Km to Mile convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 0.6213*n);
			break;
		case 7:
			printf("You've choosen for Km/h to m/s convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 0.277778*n);
			break;
		case 8:
			printf("You've choosen for m/s to Km/s convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 3.6*n);
			break;
		case 9:
			printf("You've choosen for lb to Kg convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 0.4535924*n);
			break;
		case 10:
			printf("You've choosen for Kg to lb convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 2.20462*n);
			break;
		case 11:
			printf("You've choosen for atm to Pa convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 101325*n);
			break;
		case 12:
			printf("You've choosen for Pa to atm convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", n/101325);
			break;
		case 13:
			printf("You've choosen for mmHg to Pa convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 133.3224*n);
			break;
		case 14:
			printf("You've choosen for Pa to mmHg convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", n/133.3224);
			break;
		case 15:
			printf("You've choosen for hp to kW convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 0.7457*n);
			break;
		case 16:
			printf("You've choosen for kW to hp convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", 1.341021*n);
			break;
		case 17:
			printf("You've choosen for Joule to Calorie convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", (5000*n)/20929);
			break;
		case 18:
			printf("You've choosen for Calorie to Joule convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", (20929*n)/5000);
			break;
		case 19:
			printf("You've choosen for Fahrenheit to Celsius convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", (5*(n-32))/9);
			break;
		case 20:
			printf("You've choosen for Fahrenheit to kelvin convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", ((5/9)*(n-32))+273);
			break;
		case 21:
			printf("You've choosen for Celsius to Fahrenheit convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", ((9*n)/5)+32);
			break;
		case 22:
			printf("You've choosen for Celsius to Kelvin convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", n+273);
			break;
		case 23:
			printf("You've choosen for Kelvin to Fahrenheit convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", ((9/5)*(n-273))+32);
			break;
		case 24:
			printf("You've choosen for Kelvin to  Celsius convert.\n\nEnter a inch value:");
			scanf("%lf", &n);
			printf("%.2lf\n", n-273);
			break;
        default:
            printf("Sorry!\nYou've entered wrong keyword.\n");
	}

	jump:
		printf("\n\nIf you want to do same problem Type 'again' and press enter.\n\nOtherwise Type no 'no' and press enter.\n\nType: ");
		char u[10];
		scanf("%s", &u);
		system("cls");
		if(strcmp(u, "again")==0) continue;
		else if (strcmp(u, "no")==0) break;
		else if ((strcmp(u, "again")!=0)||(strcmp(u, "no")==0))
        {
             printf("Sorry!\nYou've entered wrong keyword.\n");
             goto jump;
        }
    }
}



void user_manual()
{
    while(1)
    {
    printf("Welcome to the user manual section of this program\n");
	printf("\n\nHow to use this?\n");
	printf("This calculator is so much user friendly that anyone can use it as there will.\nBut they just have to follow the instractions.\n");
	printf("Speciallity:\n1.User can input both floating point and decimal values in any calculations.\n");
	printf("2.If user want to see values in floating point or decimal, they just need to select it.\n");
	printf("N.B: Type always underscore.\n\n\n");
	printf("\n\nPurpose of this calculator:\n\n");
	printf("'Solution Squad' is presenting you to all this secientific calcultor.\nThis calculator is providing 10 major types calculations which sub section calculation is more than 100+ problems\n");
	printf("This calculator is a great helping hand for school, college and universities  students in their daily basics and  major problems.\n ");
	
	printf("									               	Contact: zn.mehedi@gmail.com\n");
	printf("Type 'home' for go back to Start page.\ntype:");
	char cm[]="home";
	gets(cm);
	system("cls");
	if(strcmp(cm, "home")==0) break;
	else if(strcmp(cm, "home")!=0)
    {
        printf("Sorry!\nYou've entered wrong keyword.\n");
        continue;
    }
    }
}
