/*******************
author: Saber Sayeed
date: 5 april 2016
*******************/

.syntax unified

.section .interrupt_vector, "a", %progbits

.word 0x0
.word reset_handler + 1
.org 0x3C
.word systick_handler + 1

.section .interrupt_handler, "a", %progbits

reset_handler:

LDR SP, =0x20017FFF
BL main

loop:
NOP
B loop

