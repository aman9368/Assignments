/*Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include <stdio.h>

int main() {
 float unit,totalElectricityBill;
 printf("Enter Electricity Unit Consumption :");
 scanf("%f",&unit);

 switch(unit<=50){
 	case 1:
    	totalElectricityBill = (unit*0.5)*120/100;
   	 	printf("Total Electricity Bill is : %.2f Rs.",totalElectricityBill);
    	break;
    case 0:
    	 switch(unit>50 && unit<=150){
 			case 1:
    			totalElectricityBill = ((50*0.5) + (unit-50)*0.75)*120/100;
   	 			printf("Total Electricity Bill is : %.2f Rs.",totalElectricityBill);
    			break;
    		case 0:
    			 switch(unit>150 && unit<=250){
 			case 1:
    			totalElectricityBill = ((50*0.5) + (100*0.75) + ((unit-150)*1.20))*120/100;
   	 			printf("Total Electricity Bill is : %.2f Rs.",totalElectricityBill);
    			break;
    		case 0:
    				totalElectricityBill = ((50*0.5)+ (100*0.75) + (100*1.20) + ((unit-250)*1.5))*120/100;
   	 			printf("Total Electricity Bill is : %.2f Rs.",totalElectricityBill);
    			break;
			}
			}

  }
  return 0;
}
