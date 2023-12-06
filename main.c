#include <stdio.h>
#include <stdlib.h>
/*
dispenses stamps worth of 10,15,25
accepts coins of 5,10,25,50
only accepts one coin for each time
if same denomination of a same coin is to given as change coin will be returned
machine should dispense the stamp and necessary change
*/
int main()
{
//process will be terminated when values are at this values
    const int stamp_count_stamp_10 = 0;
    //count of stamps worth 10
    const int stamp_count_stamp_15 = 0;
    //count of stamps worth 15
    const int stamp_count_stamp_25 = 0;
    //count of stamps worth 25

    //process will be terminated when the values are at these values
    const int coin_count_coin_5 = 0;
    const int coin_count_coin_10 = 0;
    const int coin_count_coin_25 = 0;
    const int coin_count_coin_50= 0;

    //currently stored coins in the machine
    int coins_stored_rs5 = 5 ;
    int coins_stored_rs10 = 5;
    int coins_stored_rs25= 5 ;
    int coins_stored_rs50= 5 ;

    //currently stored stamp count
    int stamps_rs10_stored =3;
    int stamps_rs15_stored =3;
    int stamps_rs25_stored =3;

    int user_command;
    int Amount_tendered;
     //value of the coin inserted
    int stamp_requested;
     //required stamp;
//..........................................
while(1){

        printf("\n....Press 1 or any number to take a stamp....\n....Press 2 to EXIT....\n ");
        scanf("%d" , &user_command);

if (user_command==1){

        printf("\nStamps left :\nRs 10:%d \nRs 15:%d \nRs 25:%d \n..............\n",stamps_rs10_stored, stamps_rs15_stored,stamps_rs25_stored);
        printf("\ncoins left :\ncoin Rs 5:%d \ncoin Rs 10: %d\ncoin Rs 25: %d \ncoin Rs 50: %d\n..............\n\n",coins_stored_rs5, coins_stored_rs10,coins_stored_rs25,coins_stored_rs50);

        printf("Insert a coin:\n--------\n1.Rs 5>>>press 5\n2.Rs.10>>>press 10\n3.Rs.25>>>press 25\n4.Rs.50>>>press 50\n\n--------\n");
        scanf("%d" , &Amount_tendered);
        //user inputs the coin
        printf("**********************************************************************************************************\n");

        printf("The stamps available are \n1.Stamp of Rs 10--->press 1\n2.Stamp of Rs 15--->press 2\n3.Stamp of Rs 25--->press 3\nEnter the stamp number you want:\n");
        scanf("%d" , &stamp_requested);}
        //user inputs the stamp he wants


if (user_command == 2)
		{
            printf("Exiting program.\n");
            break;
		}


        //user inputs the stamp he/she wants

        printf("**********************************************************************************************************\n");

   switch(Amount_tendered){
    //checks the value of coin the user inputs

        case 5:
                printf("Amount is insufficient.Coin returned.\ntake another stamp?\n");
                break;

        case 10:
                if(stamp_requested==1&&stamps_rs10_stored!=stamp_count_stamp_10){


                    printf("Rs 10 stamp is vending \nno change. \n.take another stamp?\n");

                        stamps_rs10_stored--;
                        coins_stored_rs10++;

                }

                else{
                        if (stamp_requested==2){
                        printf("Insufficient amount.Coin returned.Please try again\n");
                        }
                        else{
                                if (stamp_requested==3){
                                    printf("Insufficient amount.Coin returned.Please try again\n");
                        }
                                else{
                                    printf("NO change.Try again.\n");
                                }



                        }
                }
                break;
       case 25:
                if(stamp_requested==1&&coins_stored_rs5!=coin_count_coin_5&&coins_stored_rs10!=coin_count_coin_10&&stamps_rs10_stored!=stamp_count_stamp_10){

                    printf("Rs 10 stamp is vending.\n Take change Rs 10 and Rs 5.\ntake another stamp?\n");

                        stamps_rs10_stored--;
                        coins_stored_rs10--;
                        coins_stored_rs5--;
                        coins_stored_rs25++;

                }

                else{
                        if (stamp_requested==2&&coins_stored_rs10!=coin_count_coin_10&&stamps_rs15_stored!=stamp_count_stamp_15){
                            printf("Rs 15 stamp is vending\nTake change Rs 10.");


                            stamps_rs15_stored--;
                            coins_stored_rs25++;
                            coins_stored_rs10--;

                        }
                        else{
                            if (stamp_requested==3&&stamps_rs25_stored!=stamp_count_stamp_25){
                                    printf("Rs 25 stamp is vending\nNo change\n");

                                    stamps_rs25_stored--;
                                    coins_stored_rs25++;
                        }
                                else{
                                    printf("change or stamp not available.coin returned.Try again.\n");
                                }
                            }

                        }

                break;
        case 50:
                if(stamp_requested==1&&coins_stored_rs5!=coin_count_coin_5&&coins_stored_rs10!=coin_count_coin_10&&coins_stored_rs25!=coin_count_coin_25&&stamps_rs10_stored!=stamp_count_stamp_10){

                    printf("Rs 10 stamp is vending\n.Change is Rs 25, Rs 10,Rs 5\ntake another stamp?\n");
                        stamps_rs10_stored--;

                        coins_stored_rs50++;
                        coins_stored_rs10--;
                        coins_stored_rs5--;
                        coins_stored_rs25--;

                }

                    else{
                        if (stamp_requested==2&&coins_stored_rs10!=coin_count_coin_10&&coins_stored_rs25!=coin_count_coin_25&&stamps_rs15_stored!=stamp_count_stamp_15 ){
                            printf("Rs 15 stamp is vending\n.Change is Rs 25, Rs 10.\ntake another stamp?\n");
                                stamps_rs15_stored--;

                                coins_stored_rs50++;
                                coins_stored_rs10--;
                                coins_stored_rs25--;
                    }
                        else{
                                if (stamp_requested==3&&coins_stored_rs25!=coin_count_coin_25&&stamps_rs25_stored!=stamp_count_stamp_25){
                                    printf("Rs 25 stamp is vending.\nChange is Rs 25.\ntake another stamp?\n");
                                        stamps_rs25_stored--;

                                        coins_stored_rs50++;
                                        coins_stored_rs25--;
                                    }
                                else{
                                    printf("Change or stamp not available.Try again.\n");
                                }
                            }


                        }

                break;

        default:
            printf("error...enter a valid coin");

   }
   }

    return 0;
}
