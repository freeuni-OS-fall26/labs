//
// A driver for qemu's "tulip" DEC 21143 NIC.
//
// see: Digital Semiconductor 21143 PCI/CardBus 10/100-Mb/s Ethernet
//      LAN Controller Hardware Reference Manual
//

#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "riscv.h"
#include "spinlock.h"
#include "proc.h"
#include "defs.h"


//
// called by pci_init().
// csrs is the memory address at which the
// tulip's 16 command and status registers (CSRs) are mapped.
//
void
tulip_init(volatile uint64 *csrs)
{
  // Your code here.
  
}


//
// buf contains an ethernet frame.
// tulip_xmit() should ask the tulip NIC to transmit the packet.
// the tulip driver should kfree(buf) when it's done.
//
void
tulip_xmit(char *buf, int len)
{
  // Your code here.
  
}

