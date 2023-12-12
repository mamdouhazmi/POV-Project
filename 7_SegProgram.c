/***********************************************************************/
/***********************************************************************/
/********************		Author: Mamdouh Azmi		****************/
/********************       Layer:  HAL                 ****************/
/********************		SWC:    7_SEG               ****************/
/********************		Version: 1.00      			****************/
/***********************************************************************/
/***********************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include <util/delay.h>
#include "7_Seg_Interface.h"




u8 Values[10] = { 0b11000000, 0b11111001, 0b10100100, 0b10110000, 0b10011001, 0b10010010, 0b10000010, 0b11111000, 0b10000000, 0b10010000};

void Seg_On(_7Seg_type Segment,u8 cpy_u8num)
{
	u8 State ;
	State= GET_BIT((Values[cpy_u8num]),0);
	DIO_SetPinValue (Segment.A_port, Segment.A_pin, State);
	State= GET_BIT(Values[cpy_u8num],1);
	DIO_SetPinValue (Segment.B_port, Segment.B_pin, State);
	State= GET_BIT(Values[cpy_u8num],2);
	DIO_SetPinValue (Segment.C_port, Segment.C_pin, State);
	State= GET_BIT(Values[cpy_u8num],3);
	DIO_SetPinValue (Segment.D_port, Segment.D_pin, State);
	State= GET_BIT(Values[cpy_u8num],4);
	DIO_SetPinValue (Segment.E_port, Segment.E_pin, State);
	State= GET_BIT(Values[cpy_u8num],5);
	DIO_SetPinValue (Segment.F_port, Segment.F_pin, State);
	State= GET_BIT(Values[cpy_u8num],6);
	DIO_SetPinValue (Segment.G_port, Segment.G_pin, State);
	DIO_SetPinValue (Segment.Comm_port, Segment.Comm_pin, HIGH);

}
void Seg_Off(_7Seg_type Segment)
{
	DIO_SetPinValue (Segment.Comm_port, Segment.Comm_pin, LOW);
}







