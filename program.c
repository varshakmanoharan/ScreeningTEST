#include <stdio.h>
int main()
{
    float dis, Total, subt, t1, t2, t3, payment;
    int qty1, qty2, qty3, tqty, pdtprice1 = 20, pdtprice2 = 40, pdtprice3 = 50, gifwrap = 1;
    char pname1[30], pname2[30], pname3[30], ans;
    printf("Enter PRODUCT NAME 1 and QUANTITY :");
    scanf("%s%d", &pname1, &qty1);
    t1 = pdtprice1 * qty1;
    printf("\nTotal Amount of Product1 = %f", t1);
    printf("\n enter PRODUCT NAME 2 and QUANTITY :");
    scanf("%s%d", &pname1, &qty2);
    t2 = pdtprice2 * qty2;
    printf("\n Total amount of product2 = %f", t2);
    printf("\nenter PRODUCT NAME 3 and QUANTITY  :");
    scanf("%s%d", &pname3, &qty3);
    t3 = pdtprice3 * qty3;
    tqty = qty1 + qty2 + qty3;
    printf("\n Total Quantity =%d", tqty);
    printf("\n Total amount of product3 = %f", t3);
    subt = t1 + t2 + t3;
    printf("\n subtotal of products %f", subt);
    if(tqty >30){
         dis = subt * 50 / 100;
        Total = subt - dis;
        printf("\n***TOTAL QTY EXCCEEDS 30 UNITS DISCOUNT 50 PERCENTAGE*** =%f", dis);
        printf("\nYour Total Payment is : %f", Total);
    
    }
    else if (subt > 200)
    {
        dis = subt * 10 / 100;
        Total = subt - dis;
        printf("\n***CART TOTAL EXCEEDS $200 DISCOUNT 10 PERCENTAGE*** = %f", dis);
        printf("\nYour Total Payment is : %f", Total);
    }
    else if (qty1 > 10)
    {
        dis = subt * 5 / 100;
        Total = Total / 100 * 5;
        printf("\n***QTY 1 EXCEEDS 10 UNITS DISCOUNT 5 PERCENTGE*** =%f", dis);
        printf("\nYour Total Payment is : %f", Total);
    }
    else if (qty2 > 10)
    {
        dis = subt * 5 / 100;
        Total = Total / 100 * 5;
        printf("\n***QTY 2 EXCEEDS 10 UNITS DISCOUNT 5 PERCENTGE*** =%f", dis);
        printf("\nYour Total Payment is : %f", Total);
    }
    else if (qty3 > 10)
    {
        dis = subt * 5 / 100;
        Total = Total / 100 * 5;
        printf("\n***QTY 3 EXCEEDS 10 UNITS DISCOUNT 5 PERCENTGE***%f", dis);
        printf("\nYour Total Payment is : %f", Total);
    }
    else if (tqty > 20)
    {
        dis = subt * 10 / 100;
        Total = subt - dis;
        printf("\n***TOTAL QUANTITY EXCEEDS 20 UNITS DISCOUNT 10 PERCENTAGE*** =%f", dis);
        printf("\nYour Total Payment is : %f", Total);
    }
    else
    {
        printf("\n*********NO DISCOUNT***************");
      
    }
     
    printf("\n DO YOU WANT A GIFT WRAP (Y/N)? ");
    scanf("%s", &ans);
    if (ans == 'y' || ans == 'Y')
    {
        gifwrap = tqty * 1;
        printf("\n AMOUNT FOR GIFT WRAP IS : %d", gifwrap);
        payment = subt + gifwrap;
        printf("\n YOUR TOTAL PAYMENT : %f", payment);
    }

    else if(ans == 'n' || ans == 'N') {
        printf(" NO GIFT WRAP ADDED ");
        
    }
    
    return 0;
}