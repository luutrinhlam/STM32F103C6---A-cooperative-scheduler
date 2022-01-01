/*
 * scheduler.h
 *
 *  Created on: Nov 2, 2021
 *      Author: Admin
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_


uint32_t SCH_Add_Task(void (*pFunction)(), unsigned int DELAY, unsigned int PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
uint8_t SCH_Delete_Task(uint32_t taskID);
//void SCH_Report_Status(void);
void SCH_Go_To_Sleep();

#endif /* INC_SCHEDULER_H_ */
