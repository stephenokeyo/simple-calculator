/*I
project:payslip program
Author:Stephen okeyo
Date:Oct,2021
Compiler:GCC
Language:C99
License:MIT
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable declaration
    char name(200);
    int emp_no,hours;
    int normal_pay,overtime_pay,gross;
    float tax,net;
    Const int rate=2000
    //Capture input
    printf("Gitonga's Factory payslip system!\n");
    printf("employee Name:");
    gets   (name);
    printf("employee number:");
    scanf("%d",&emp_no);
    printf("Hours worked:"),
    scanf("%d",&hours);
  // computations
  if(hours>40)(
               normal_pay=40*rate;
               overtime_pay=(hours-40)*1.5*rate;)
                else(normal_pay=hours*rate;
                overtime-pay=0;
  )
    gross =normal_pay+overtime_pay;
    tax =0.16*gross;
    net=gross-tax;
    //print payslip
    printf("Emp NO:\T%d\n",emp_no);
    printf("Employee Name: \t%s\n,",name);
    printf("normal pay: \t%d\n",normal_pay);
    printf("Overtime pay: \t%d\n",Ovetime_pay),
    printf("Gross pay: \t%d\n",gross);
    printf("tax: \t%d\n",tax);
    printf("Net pay: \t%d\n",net;






    )
        return 0;
}
