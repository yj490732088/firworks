#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib) */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define IDLE_THREAD_STACK_SIZE 256
#define RT_DEBUG

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_MAILBOX
/* end of Inter-Thread communication */

/* Memory Management */

#define RT_USING_SMALL_MEM
#define RT_USING_HEAP
/* end of Memory Management */
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_VER_NUM 0x30104
/* end of RT-Thread Kernel */
#define ARCH_ARM
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M3

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* Command shell */

/* end of Command shell */
/* end of RT-Thread Components */
#define RT_STUDIO_BUILT_IN

#endif
