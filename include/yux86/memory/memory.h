#ifndef YUX86_MEMORY_MEMORY_H_
#define YUX86_MEMORY_MEMORY_H_

#include <stdbool.h>
#include <stdint.h>

#ifdef  __cplusplus
extern "C" {
#endif //  __cplusplus

#define YUX86_MEMORY_PHYSICAL_MEMORY_BYTE_COUNT 1024 * 1024

typedef struct _Memory {
  uint8_t main_memory[YUX86_MEMORY_PHYSICAL_MEMORY_BYTE_COUNT];
} Memory;

typedef VirtualAddr;

void VirtualMemoryRead(VirtualAddr addr);
void VirtualMemoryWrite(VirtualAddr addr);

#ifdef __cplusplus
}
#endif //  __cplusplus

#endif // YUX86_MEMORY_MEMORY_H_

