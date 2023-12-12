/*
 * main.c

 *
 *  Created on: Nov 13, 2020
 *      Author: Mamdouh
 */

#include "STD_TYPES.h"
#include "DIO_int.h"
#include <util/delay.h>
#include "7_Seg_Interface.h"




_7Seg_type Seg1;
_7Seg_type Seg2;
_7Seg_type Seg3;
_7Seg_type Seg4;
_7Seg_type Seg5;
_7Seg_type Seg6;

void SSD_voidInit(void)
{
Seg1.A_port = PORTA;
Seg1.A_pin = PIN3;
Seg1.B_port = PORTA;
Seg1.B_pin = PIN4;
Seg1.C_port = PORTA;
Seg1.C_pin = PIN6;
Seg1.D_port = PORTA;
Seg1.D_pin = PIN5;
Seg1.E_port = PORTA;
Seg1.E_pin = PIN0;
Seg1.F_port = PORTA;
Seg1.F_pin = PIN2;
Seg1.G_port = PORTA;
Seg1.G_pin = PIN1;
Seg1.Comm_port = PORTB;
Seg1.Comm_pin = PIN0;
Seg1.Comm_type = Comm_A;



Seg2.A_port = PORTA;
Seg2.A_pin = PIN3;
Seg2.B_port = PORTA;
Seg2.B_pin = PIN4;
Seg2.C_port = PORTA;
Seg2.C_pin = PIN6;
Seg2.D_port = PORTA;
Seg2.D_pin = PIN5;
Seg2.E_port = PORTA;
Seg2.E_pin = PIN0;
Seg2.F_port = PORTA;
Seg2.F_pin = PIN2;
Seg2.G_port = PORTA;
Seg2.G_pin = PIN1;
Seg2.Comm_port = PORTB;
Seg2.Comm_pin = PIN1;
Seg2.Comm_type = Comm_A;


Seg3.A_port = PORTA;
Seg3.A_pin = PIN3;
Seg3.B_port = PORTA;
Seg3.B_pin = PIN4;
Seg3.C_port = PORTA;
Seg3.C_pin = PIN6;
Seg3.D_port = PORTA;
Seg3.D_pin = PIN5;
Seg3.E_port = PORTA;
Seg3.E_pin = PIN0;
Seg3.F_port = PORTA;
Seg3.F_pin = PIN2;
Seg3.G_port = PORTA;
Seg3.G_pin = PIN1;
Seg3.Comm_port = PORTB;
Seg3.Comm_pin = PIN2;
Seg3.Comm_type = Comm_A;


Seg4.A_port = PORTA;
Seg4.A_pin = PIN3;
Seg4.B_port = PORTA;
Seg4.B_pin = PIN4;
Seg4.C_port = PORTA;
Seg4.C_pin = PIN6;
Seg4.D_port = PORTA;
Seg4.D_pin = PIN5;
Seg4.E_port = PORTA;
Seg4.E_pin = PIN0;
Seg4.F_port = PORTA;
Seg4.F_pin = PIN2;
Seg4.G_port = PORTA;
Seg4.G_pin = PIN1;
Seg4.Comm_port = PORTB;
Seg4.Comm_pin = PIN3;
Seg4.Comm_type = Comm_A;


Seg5.A_port = PORTA;
Seg5.A_pin = PIN3;
Seg5.B_port = PORTA;
Seg5.B_pin = PIN4;
Seg5.C_port = PORTA;
Seg5.C_pin = PIN6;
Seg5.D_port = PORTA;
Seg5.D_pin = PIN5;
Seg5.E_port = PORTA;
Seg5.E_pin = PIN0;
Seg5.F_port = PORTA;
Seg5.F_pin = PIN2;
Seg5.G_port = PORTA;
Seg5.G_pin = PIN1;
Seg5.Comm_port = PORTB;
Seg5.Comm_pin = PIN4;
Seg5.Comm_type = Comm_A;


Seg6.A_port = PORTA;
Seg6.A_pin = PIN3;
Seg6.B_port = PORTA;
Seg6.B_pin = PIN4;
Seg6.C_port = PORTA;
Seg6.C_pin = PIN6;
Seg6.D_port = PORTA;
Seg6.D_pin = PIN5;
Seg6.E_port = PORTA;
Seg6.E_pin = PIN0;
Seg6.F_port = PORTA;
Seg6.F_pin = PIN2;
Seg6.G_port = PORTA;
Seg6.G_pin = PIN1;
Seg6.Comm_port = PORTB;
Seg6.Comm_pin = PIN5;
Seg6.Comm_type = Comm_A;
}


int main(void)
{
	SSD_voidInit();

	DIO_SetPortDirection(PORTA, 0xFF);
	DIO_SetPortDirection(PORTB, 0xFF);
	while(1)
	{

		for(u8 h1=0; h1<3; h1++){
			if(h1==7)
				break;
			for(u8 h2=0; h2<10; h2++){
				if((h1==2) && (h2==4)){
					h1 = 7;
					break;
				}

				for(int m1=0 ;m1<6;m1++){
					for(u8 m2=0; m2<10; m2++){
						for(u8 i=0; i<6; i++){
							for(u8 j=0; j<10; j++){
								for(u8 s=0; s<50; s++){
									Seg_On(Seg6, j);
									_delay_ms(3);
									Seg_Off(Seg6 );

									Seg_On(Seg5, i);
									_delay_ms(3);
									Seg_Off(Seg5 );

									Seg_On(Seg4, m2);
									_delay_ms(3);
									Seg_Off(Seg4 );

									Seg_On(Seg3, m1);
									_delay_ms(3);
									Seg_Off(Seg3 );

									Seg_On(Seg2, h2);
									_delay_ms(3);
									Seg_Off(Seg2 );

									Seg_On(Seg1, h1);
									_delay_ms(3);
									Seg_Off(Seg1 );
									_delay_ms(2);
								}
							}
						}
					}
				}
			}
		}
	}



	return 0;
}



