#ifndef CONFIG_OS_H
#define	CONFIG_OS_H

#include "types.h"

// Número máximo de tarefas de usuário
#define MAX_USER_TASKS          4
#define MAX_STACK_SIZE          21
#define RR_QUANTUM              8

#define PRIOR_SCHEDULER         FALSE
#define RR_SCHEDULER            TRUE

#endif	/* CONFIG_OS_H */

