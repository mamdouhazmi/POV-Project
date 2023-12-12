/***********************************************************************/
/***********************************************************************/
/********************		Author: Mamdouh Azmi		****************/
/********************       Layer:  HAL                 ****************/
/********************		SWC:    7_SEG_INTERFACE_H_  ****************/
/********************		Version: 1.00      			****************/
/***********************************************************************/
/***********************************************************************/

#ifndef _7_SEG_INTERFACE_H_
#define _7_SEG_INTERFACE_H_

#define  Comm_A		1
#define  Comm_C		0

#define HIGH 		1
#define LOW 		0

typedef struct{
	u8 A_port;
	u8 A_pin;
	u8 B_port;
	u8 B_pin;
	u8 C_port;
	u8 C_pin;
	u8 D_port;
	u8 D_pin;
	u8 E_port;
	u8 E_pin;
	u8 F_port;
	u8 F_pin;
	u8 G_port;
	u8 G_pin;


	u8 Comm_port;
	u8 Comm_pin;

	u8 Comm_type;

}_7Seg_type;

void Seg_On(_7Seg_type Segment,u8 cpy_u8num);
void Seg_Off(_7Seg_type Segment);



#endif /* 7_SEG_INTERFACE_H_ */
