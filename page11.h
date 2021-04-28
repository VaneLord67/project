#ifndef _PAGE11_H_
#define _PAGE11_H_

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<time.h>
#include<malloc.h>
#include<math.h>
#include"mouse.h"
#include"hz.h"
#include"myf.h"

extern void *buffer;
extern union REGS regs;

extern int mouseX;
extern int mouseY;
extern int press;
extern int flag;

/*
函数名：page11_screen
功能：绘制一键换电界面
入口参数：void
返回值：void
*/
void page11_screen(void);

/*
函数名：p11
功能：一键换电界面
入口参数：汽车结构体变量pCar
返回值：int类型，返回page的值
*/
int p11(PCAR pCar);

/*
函数名：CarElecWrite_change
功能：将汽车电量变化写入文件elec.txt中
入口参数：id,汽车结构体指针pCar，汽车充电前电量p1
返回值：void
*/
void CarElecWrite_change(char * p, PCAR pCar, double *p1);

#endif
