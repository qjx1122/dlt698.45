/*
 * PublicFunction.h
 *
 *  Created on: Sep 11, 2015
 *      Author: fzh
 */

#ifndef PUBLICFUNCTION_H_
#define PUBLICFUNCTION_H_

#include "option.h"

#define delay(A) usleep((A)*1000)
extern void TSGet(TS *ts);
extern void Setsig(struct sigaction *psa,void (*pfun)(ProjectInfo *proinfo));
extern void* CreateShMem(char* shname,int memsize,void* pmem);
extern void* OpenShMem(char* shname,int memsize,void* pmem);

/* BCD码转int32u
 *参数：bcd为bcd码头指针，len为bcd码长度，order为positive正序/inverted反序，dint转换结果
 * 返回:0：成功；-1：asc为空；-2：en为0；-3：order有误
 * 例如:0x12 0x34 -> 1234
 * */
extern INT8S bcd2int32u(INT8U *bcd, INT8U len,ORDER order,INT32U* dint);
extern INT32S int32u2bcd(INT32U dint32, INT8U* bcd,ORDER order);
extern int OpenCom(int port,int baud,unsigned char *par,unsigned char stopb,unsigned char bits);
extern void CloseCom(int ComPort);

#endif /* PUBLICFUNCTION_H_ */
