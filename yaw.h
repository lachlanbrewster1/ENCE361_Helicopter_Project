/*
 * yaw.h
 *
 *  Created on: 14/05/2019
 *      Author: bsl28
 */

#ifndef YAW_H_
#define YAW_H_

void
yawIntHandler(void);

void
initYaw(void);

void
update_yaw();

uint16_t
getYaw();

bool
atRef();


extern volatile bool yaw_flag;

#endif /* YAW_H_ */