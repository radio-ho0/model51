#ifndef __STC89C5xRC_H_
#define __STC89C5xRC_H_

/////////////////////////////////////////////////

/* The following is STC additional SFR */

/* sfr  AUXR  = 0x8e; */
/* sfr  AUXR1 = 0xa2; */
/* sfr  IPH   = 0xb7; */

__sfr __at 0xe8  P4;
__sbit __at 0xeb P43;
__sbit __at 0xea P42;
__sbit __at 0xe9 P41;
__sbit __at 0xe8 P40;

__sfr __at 0xc0 XICON;
__sfr __at 0xe1 WDT_CONTR;
__sfr __at 0xe2 ISP_DATA;
__sfr __at 0xe3 ISP_ADDRH;
__sfr __at 0xe4 ISP_ADDRL;
__sfr __at 0xe5 ISP_CMD;
__sfr __at 0xe6 ISP_TRIG;
__sfr __at 0xe7 ISP_CONTR;

/* BYTE addressable registers */
__sfr __at 0x80 P0          ;
__sfr __at 0x81 SP          ;
__sfr __at 0x82 DPL         ;
__sfr __at 0x83 DPH         ;
__sfr __at 0x87 PCON        ;
__sfr __at 0x88 TCON        ;
__sfr __at 0x89 TMOD        ;
__sfr __at 0x8A TL0         ;
__sfr __at 0x8B TL1         ;
__sfr __at 0x8C TH0         ;
__sfr __at 0x8D TH1         ;
__sfr __at 0x90 P1          ;
__sfr __at 0x98 SCON        ;
__sfr __at 0x99 SBUF        ;
__sfr __at 0xA0 P2          ;
__sfr __at 0xA8 IE          ;
__sfr __at 0xB0 P3          ;
__sfr __at 0xB8 IP          ;
__sfr __at 0xC8 T2CON       ;
__sfr __at 0xC9 T2MOD       ;
__sfr __at 0xCA RCAP2L      ;
__sfr __at 0xCB RCAP2H      ;
__sfr __at 0xCC TL2         ;
__sfr __at 0xCD TH2         ;
__sfr __at 0xD0 PSW         ;
__sfr __at 0xE0 ACC         ;
__sfr __at 0xE0 A           ;
__sfr __at 0xF0 B           ;


/* BIT addressable registers */
/* P0 */
__sbit __at 0x80 P0_0       ;
__sbit __at 0x81 P0_1       ;
__sbit __at 0x82 P0_2       ;
__sbit __at 0x83 P0_3       ;
__sbit __at 0x84 P0_4       ;
__sbit __at 0x85 P0_5       ;
__sbit __at 0x86 P0_6       ;
__sbit __at 0x87 P0_7       ;

/* TCON */
__sbit __at 0x88 IT0        ;
__sbit __at 0x89 IE0        ;
__sbit __at 0x8A IT1        ;
__sbit __at 0x8B IE1        ;
__sbit __at 0x8C TR0        ;
__sbit __at 0x8D TF0        ;
__sbit __at 0x8E TR1        ;
__sbit __at 0x8F TF1        ;

/* P1 */
__sbit __at 0x90 P1_0       ;
__sbit __at 0x91 P1_1       ;
__sbit __at 0x92 P1_2       ;
__sbit __at 0x93 P1_3       ;
__sbit __at 0x94 P1_4       ;
__sbit __at 0x95 P1_5       ;
__sbit __at 0x96 P1_6       ;
__sbit __at 0x97 P1_7       ;

__sbit __at 0x90 T2         ;
__sbit __at 0x91 T2EX       ;

/* SCON */
__sbit __at 0x98 RI         ;
__sbit __at 0x99 TI         ;
__sbit __at 0x9A RB8        ;
__sbit __at 0x9B TB8        ;
__sbit __at 0x9C REN        ;
__sbit __at 0x9D SM2        ;
__sbit __at 0x9E SM1        ;
__sbit __at 0x9F SM0        ;

/* P2 */
__sbit __at 0xA0 P2_0       ;
__sbit __at 0xA1 P2_1       ;
__sbit __at 0xA2 P2_2       ;
__sbit __at 0xA3 P2_3       ;
__sbit __at 0xA4 P2_4       ;
__sbit __at 0xA5 P2_5       ;
__sbit __at 0xA6 P2_6       ;
__sbit __at 0xA7 P2_7       ;

/* IE */
__sbit __at 0xA8 EX0        ;
__sbit __at 0xA9 ET0        ;
__sbit __at 0xAA EX1        ;
__sbit __at 0xAB ET1        ;
__sbit __at 0xAC ES         ;
__sbit __at 0xAD ET2        ;
__sbit __at 0xAF EA         ;

/* P3 */
__sbit __at 0xB0 P3_0       ;
__sbit __at 0xB1 P3_1       ;
__sbit __at 0xB2 P3_2       ;
__sbit __at 0xB3 P3_3       ;
__sbit __at 0xB4 P3_4       ;
__sbit __at 0xB5 P3_5       ;
__sbit __at 0xB6 P3_6       ;
__sbit __at 0xB7 P3_7       ;

__sbit __at 0xB0 RXD        ;
__sbit __at 0xB1 TXD        ;
__sbit __at 0xB2 INT0       ;
__sbit __at 0xB3 INT1       ;
__sbit __at 0xB4 T0         ;
__sbit __at 0xB5 T1         ;
__sbit __at 0xB6 WR         ;
__sbit __at 0xB7 RD         ;

/* IP */ 
__sbit __at 0xB8 PX0        ;
__sbit __at 0xB9 PT0        ;
__sbit __at 0xBA PX1        ;
__sbit __at 0xBB PT1        ;
__sbit __at 0xBC PS         ;
__sbit __at 0xBD PT2        ;

/* T2CON */
__sbit __at 0xC8 T2CON_0    ;
__sbit __at 0xC9 T2CON_1    ;
__sbit __at 0xCA T2CON_2    ;
__sbit __at 0xCB T2CON_3    ;
__sbit __at 0xCC T2CON_4    ;
__sbit __at 0xCD T2CON_5    ;
__sbit __at 0xCE T2CON_6    ;
__sbit __at 0xCF T2CON_7    ;

__sbit __at 0xC8 CP_RL2     ;
__sbit __at 0xC9 C_T2       ;
__sbit __at 0xCA TR2        ;
__sbit __at 0xCB EXEN2      ;
__sbit __at 0xCC TCLK       ;
__sbit __at 0xCD RCLK       ;
__sbit __at 0xCE EXF2       ;
__sbit __at 0xCF TF2        ;

/* PSW */
__sbit __at 0xD0 P          ;
__sbit __at 0xD1 FL         ;
__sbit __at 0xD2 OV         ;
__sbit __at 0xD3 RS0        ;
__sbit __at 0xD4 RS1        ;
__sbit __at 0xD5 F0         ;
__sbit __at 0xD6 AC         ;
__sbit __at 0xD7 CY         ;


/* BIT definitions for bits that are not directly accessible */
/* PCON bits */
#define IDL             0x01
#define PD              0x02
#define GF0             0x04
#define GF1             0x08
#define SMOD            0x80

#define IDL_            0x01
#define PD_             0x02
#define GF0_            0x04
#define GF1_            0x08
#define SMOD_           0x80

/* TMOD bits */
#define M0_0            0x01
#define M1_0            0x02
#define C_T0            0x04
#define GATE0           0x08
#define M0_1            0x10
#define M1_1            0x20
#define C_T1            0x40
#define GATE1           0x80

#define M0_0_           0x01
#define M1_0_           0x02
#define C_T0_           0x04
#define GATE0_          0x08
#define M0_1_           0x10
#define M1_1_           0x20
#define C_T1_           0x40
#define GATE1_          0x80

#define T0_M0           0x01
#define T0_M1           0x02
#define T0_CT           0x04
#define T0_GATE         0x08
#define T1_M0           0x10
#define T1_M1           0x20
#define T1_CT           0x40
#define T1_GATE         0x80

#define T0_M0_          0x01
#define T0_M1_          0x02
#define T0_CT_          0x04
#define T0_GATE_        0x08
#define T1_M0_          0x10
#define T1_M1_          0x20
#define T1_CT_          0x40
#define T1_GATE_        0x80

#define T0_MASK         0x0F
#define T1_MASK         0xF0

#define T0_MASK_        0x0F
#define T1_MASK_        0xF0

/* T2MOD bits */
#define DCEN            0x01
#define T2OE            0x02

#define DCEN_           0x01
#define T2OE_           0x02


/* Interrupt numbers: address = (number * 8) + 3 */
#define IE0_VECTOR      0       /* 0x03 external interrupt 0 */
#define TF0_VECTOR      1       /* 0x0b timer 0 */
#define IE1_VECTOR      2       /* 0x13 external interrupt 1 */
#define TF1_VECTOR      3       /* 0x1b timer 1 */
#define SI0_VECTOR      4       /* 0x23 serial port 0 */
#define TF2_VECTOR      5       /* 0x2B timer 2 */
#define EX2_VECTOR      5       /* 0x2B external interrupt 2 */
 
/*  80C51Fx/Rx Extensions  */
__sfr __at 0xA9 SADDR;
__sfr __at 0xb9 SADEN;

/* PCA SFR
sfr CCON   = 0xD8;
sfr CMOD   = 0xD9;
sfr CCAPM0 = 0xDA;
sfr CCAPM1 = 0xDB;
sfr CCAPM2 = 0xDC;
sfr CCAPM3 = 0xDD;
sfr CCAPM4 = 0xDE;
sfr CL     = 0xE9;
sfr CCAP0L = 0xEA;
sfr CCAP1L = 0xEB;
sfr CCAP2L = 0xEC;
sfr CCAP3L = 0xED;
sfr CCAP4L = 0xEE;
sfr CH     = 0xF9;
sfr CCAP0H = 0xFA;
sfr CCAP1H = 0xFB;
sfr CCAP2H = 0xFC;
sfr CCAP3H = 0xFD;
sfr CCAP4H = 0xFE;
*/
       
/*  P1  */
/* PCA
sbit CEX4 = P1^7;
sbit CEX3 = P1^6;
sbit CEX2 = P1^5;
sbit CEX1 = P1^4;
sbit CEX0 = P1^3;
sbit ECI  = P1^2;
*/
/*  CCON  */
/*  PCA
sbit CF    = CCON^7;
sbit CR    = CCON^6;

sbit CCF4  = CCON^4;
sbit CCF3  = CCON^3;
sbit CCF2  = CCON^2;
sbit CCF1  = CCON^1;
sbit CCF0  = CCON^0;
*/

/////////////////////////////////////////////////

#endif
