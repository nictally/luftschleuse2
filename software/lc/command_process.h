#ifndef CMD_PROCESS_H_
#define CMD_PROCESS_H_

#include <stdint.h>

void cmd_init(void);
void cmd_tick(void);
void cmd_process(void);

#define CMD_SET_LED     'L'
#define CMD_WRITE_LCD   'W'

#endif