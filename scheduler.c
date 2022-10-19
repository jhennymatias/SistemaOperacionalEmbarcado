#include "scheduler.h"
#include "types.h"

extern ready_queue_t READY_queue;

void scheduler()
{
#if RR_SCHEDULER == TRUE
   READY_queue.pos_task_running = RR_scheduler();
#elif PRIOR_SCHEDULER == TRUE
   READY_queue.pos_task_running = PRIOR_scheduler();
#endif   
}

u_int RR_scheduler()
{
   u_int next_task = READY_queue.pos_task_running;
   
   do {
      next_task = (next_task+1) % READY_queue.ready_queue_size;
   } while (READY_queue.tasks[next_task].task_state != READY);
   
   return next_task;
}

u_int PRIOR_scheduler()
{
   
}

